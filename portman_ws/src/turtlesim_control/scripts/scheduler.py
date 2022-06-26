#!/usr/bin/python3
import re
import numpy as np
import rclpy
from geometry_msgs.msg import Point
from rclpy.node import Node
from turtlesim_interfaces.srv import RandGoal, SetGoal
from std_srvs.srv import Empty

class Scheduler(Node):
    def __init__(self):
        super().__init__('scheduler')
        self.rand_goal_service = self.create_service(RandGoal,'/rand_goal',self.rand_goal_callback)
        self.enable_client = self.create_client(Empty, '/enable_goal')
        self.set_goal_client = self.create_client(SetGoal, '/set_goal')
    def rand_goal_callback(self,request,response):
        goal = 9*np.random.rand(2)+0.5
        response.position = Point()
        response.position.x = goal[0]
        response.position.y = goal[1]
        self.sent_set_goal_request(response.position)
        self.sent_enable_request()
        self.get_logger().info(f'New goal => x:{goal[0]},y:{goal[1]}')
        return response
    def sent_enable_request(self):
        req = Empty.Request()
        self.future = self.enable_client.call_async(req)
    def sent_set_goal_request(self, position):
        req = SetGoal.Request()
        req.position = position
        self.future = self.set_goal_client.call_async(req)

def main(args=None):
    rclpy.init(args=args)
    scheduler = Scheduler()
    rclpy.spin(scheduler)
    scheduler.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
