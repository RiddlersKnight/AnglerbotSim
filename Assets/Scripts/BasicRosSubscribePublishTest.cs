using RosMessageTypes.Sensor;
using RosMessageTypes.Geometry;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;

public class BasicRosSubscribePublishTest : MonoBehaviour
{
    // ROS Connector
    ROSConnection m_Ros;

    // Topics
    const string baseScanTopic = "/base_scan";
    const string cmdVelTopic = "/cmd_vel";

    private void Start()
    {
        // Get ROS connection static instance
        m_Ros = ROSConnection.GetOrCreateInstance();

        m_Ros.Subscribe<LaserScanMsg>(baseScanTopic, LaserScanCallback);

        m_Ros.RegisterPublisher<TwistMsg>(cmdVelTopic);
    }

    public void LaserScanCallback(LaserScanMsg msg) {
        Debug.Log(msg);
    }

    private void FixedUpdate() {
        TwistMsg twistMessage = new TwistMsg();

        twistMessage.linear.x = 1;
        twistMessage.angular.z=4;

        // Finally send the message to server_endpoint.py running in ROS
        m_Ros.Publish(cmdVelTopic, twistMessage);
    }
}
