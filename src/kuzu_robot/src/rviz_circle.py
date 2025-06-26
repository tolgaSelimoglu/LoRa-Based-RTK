#!/usr/bin/env python
# -*- coding: utf-8 -*-

import rospy
from std_msgs.msg import Float32
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point
import math

current_radius = 10.0
sweep_radius = 0.0
sweep_speed = 0.02  # her frame artacak miktar

def draw_circle(radius, line_width=0.05, color=(1.0, 0.0, 0.0, 1.0), marker_id=0, ns="main"):
    marker = Marker()
    marker.header.frame_id = "map"
    marker.header.stamp = rospy.Time.now()
    marker.ns = ns
    marker.id = marker_id
    marker.type = Marker.LINE_STRIP
    marker.action = Marker.ADD

    marker.scale.x = line_width
    marker.color.r = color[0]
    marker.color.g = color[1]
    marker.color.b = color[2]
    marker.color.a = color[3]

    marker.pose.orientation.w = 1.0

    points = []
    for angle in range(0, 361, 5):
        rad = math.radians(angle)
        x = radius * math.cos(rad)
        y = radius * math.sin(rad)
        points.append(Point(x, y, 0))

    marker.points = points
    return marker

def radius_callback(msg):
    global current_radius
    current_radius = msg.data

if __name__ == '__main__':
    rospy.init_node('radar_wave_effect_node')
    marker_pub = rospy.Publisher('/radius_marker', Marker, queue_size=1)
    rospy.Subscriber('/base_station/radius', Float32, radius_callback)

    rate = rospy.Rate(30)
    sweep_radius = 0.0

    rospy.loginfo("Radar dalga efekti başladı")

    while not rospy.is_shutdown():
        # Sabit kırmızı çember
        fixed_circle = draw_circle(
            current_radius,
            line_width=0.05,
            color=(1.0, 0.0, 0.0, 1.0),
            marker_id=0,
            ns="main"
        )

        # Büyüyen yeşil çember
        sweep_circle = draw_circle(
            sweep_radius,
            line_width=0.015,
            color=(1.0, 0.0, 0.0, 1.0),
            marker_id=1,
            ns="sweep"
        )

        marker_pub.publish(fixed_circle)
        marker_pub.publish(sweep_circle)

        # Sweep çemberini büyüt
        sweep_radius += sweep_speed
        if sweep_radius > current_radius:
            sweep_radius = 0.0

        rate.sleep()
