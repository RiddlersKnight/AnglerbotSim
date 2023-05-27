;; Auto-generated. Do not edit!


(when (boundp 'moveit_msgs::ExecuteTrajectoryFeedback)
  (if (not (find-package "MOVEIT_MSGS"))
    (make-package "MOVEIT_MSGS"))
  (shadow 'ExecuteTrajectoryFeedback (find-package "MOVEIT_MSGS")))
(unless (find-package "MOVEIT_MSGS::EXECUTETRAJECTORYFEEDBACK")
  (make-package "MOVEIT_MSGS::EXECUTETRAJECTORYFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude ExecuteTrajectoryFeedback.msg.html


(defclass moveit_msgs::ExecuteTrajectoryFeedback
  :super ros::object
  :slots (_state ))

(defmethod moveit_msgs::ExecuteTrajectoryFeedback
  (:init
   (&key
    ((:state __state) "")
    )
   (send-super :init)
   (setq _state (string __state))
   self)
  (:state
   (&optional __state)
   (if __state (setq _state __state)) _state)
  (:serialization-length
   ()
   (+
    ;; string _state
    4 (length _state)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _state
       (write-long (length _state) s) (princ _state s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _state
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _state (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(setf (get moveit_msgs::ExecuteTrajectoryFeedback :md5sum-) "af6d3a99f0fbeb66d3248fa4b3e675fb")
(setf (get moveit_msgs::ExecuteTrajectoryFeedback :datatype-) "moveit_msgs/ExecuteTrajectoryFeedback")
(setf (get moveit_msgs::ExecuteTrajectoryFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======

# The internal state that the move group action currently is in
string state


")



(provide :moveit_msgs/ExecuteTrajectoryFeedback "af6d3a99f0fbeb66d3248fa4b3e675fb")

