using RosMessageTypes.BuiltinInterfaces;
using RosMessageTypes.Geometry;
using RosMessageTypes.Std;
using RosMessageTypes.Tf2;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Robotics.ROSTCPConnector;
using Unity.Robotics.ROSTCPConnector.ROSGeometry;

public class RosBroadcastAllFrames : MonoBehaviour {
    // ROS Connector
    ROSConnection m_Ros;

    public Transform robot;
    public Transform[] tags;

    private TFMessageMsg robotPoseMsg = new TFMessageMsg(new TransformStampedMsg[1]);
    TFMessageMsg tagsMsg;
    PoseArrayMsg beamsMsg;

    private const string tfTopic = "tf";
    private const string poseArrayTopic = "poses";
    private const string odomFrame = "odom";

    private void Awake () {
        // Get ROS connection static instance
        m_Ros = ROSConnection.GetOrCreateInstance();
        m_Ros.RegisterPublisher<TFMessageMsg>(tfTopic);
        m_Ros.RegisterPublisher<TFMessageMsg>(poseArrayTopic);

        tagsMsg = new TFMessageMsg(new TransformStampedMsg[tags.Length]);
        beamsMsg = new PoseArrayMsg(new HeaderMsg(0, new TimeMsg(), odomFrame), new PoseMsg[tags.Length]);

        for(int i = 0; i < tags.Length; i++) {
            // print(i);
            HeaderMsg header = new HeaderMsg(0, new TimeMsg(), odomFrame);
            Vector3<FLU> tagPos = tags[i].position.To<FLU>();
            TransformMsg trans = new TransformMsg(
                new Vector3Msg(tagPos.x, tagPos.y, tagPos.z),
                tags[i].rotation.To<FLU>()
            );
            tagsMsg.transforms[i] = new TransformStampedMsg(header, tags[i].name, trans);
            Vector3<FLU> beamPos = tags[i].GetChild(0).position.To<FLU>();
            beamsMsg.poses[i] = new PoseMsg();
            beamsMsg.poses[i].position = new PointMsg(beamPos.x, beamPos.y, beamPos.z);
            beamsMsg.poses[i].orientation = tags[i].GetChild(0).rotation.To<FLU>();
        }
        // print("mid");
        // Finally send the message to server_endpoint.py running in ROS
        m_Ros.Publish(tfTopic, tagsMsg);
        m_Ros.Publish(poseArrayTopic, beamsMsg);

        HeaderMsg robotHeader = new HeaderMsg(0, new TimeMsg(), odomFrame);
        Vector3<FLU> robotPos = robot.position.To<FLU>();
        TransformMsg robotTrans = new TransformMsg(
            new Vector3Msg(robotPos.x, robotPos.y, robotPos.z),
            robot.rotation.To<FLU>()
        );
        robotPoseMsg.transforms[0] = new TransformStampedMsg(robotHeader, robot.name, robotTrans);
        // Finally send the message to server_endpoint.py running in ROS
        m_Ros.Publish(tfTopic, robotPoseMsg);
        // print("end");
    }

    private void FixedUpdate() {
        Vector3<FLU> pos = robot.position.To<FLU>();
        robotPoseMsg.transforms[0].transform.translation = new Vector3Msg(pos.x, pos.y, pos.z);
        robotPoseMsg.transforms[0].transform.rotation = robot.rotation.To<FLU>();
        
        // Finally send the message to server_endpoint.py running in ROS
        m_Ros.Publish(tfTopic, robotPoseMsg);
        m_Ros.Publish(tfTopic, tagsMsg);
        m_Ros.Publish(poseArrayTopic, beamsMsg);
    }
}
