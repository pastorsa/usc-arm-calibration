; Auto-generated. Do not edit!


(cl:in-package arm_behavior_actions-msg)


;//! \htmlinclude RepositionObjectFeedback.msg.html

(cl:defclass <RepositionObjectFeedback> (roslisp-msg-protocol:ros-message)
  ((percent_complete
    :reader percent_complete
    :initarg :percent_complete
    :type cl:float
    :initform 0.0))
)

(cl:defclass RepositionObjectFeedback (<RepositionObjectFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <RepositionObjectFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'RepositionObjectFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name arm_behavior_actions-msg:<RepositionObjectFeedback> is deprecated: use arm_behavior_actions-msg:RepositionObjectFeedback instead.")))

(cl:ensure-generic-function 'percent_complete-val :lambda-list '(m))
(cl:defmethod percent_complete-val ((m <RepositionObjectFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader arm_behavior_actions-msg:percent_complete-val is deprecated.  Use arm_behavior_actions-msg:percent_complete instead.")
  (percent_complete m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <RepositionObjectFeedback>) ostream)
  "Serializes a message object of type '<RepositionObjectFeedback>"
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'percent_complete))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <RepositionObjectFeedback>) istream)
  "Deserializes a message object of type '<RepositionObjectFeedback>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'percent_complete) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<RepositionObjectFeedback>)))
  "Returns string type for a message object of type '<RepositionObjectFeedback>"
  "arm_behavior_actions/RepositionObjectFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'RepositionObjectFeedback)))
  "Returns string type for a message object of type 'RepositionObjectFeedback"
  "arm_behavior_actions/RepositionObjectFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<RepositionObjectFeedback>)))
  "Returns md5sum for a message object of type '<RepositionObjectFeedback>"
  "cc6abe8bc172f00995b2c3f53015f718")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'RepositionObjectFeedback)))
  "Returns md5sum for a message object of type 'RepositionObjectFeedback"
  "cc6abe8bc172f00995b2c3f53015f718")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<RepositionObjectFeedback>)))
  "Returns full string definition for message of type '<RepositionObjectFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 percent_complete~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'RepositionObjectFeedback)))
  "Returns full string definition for message of type 'RepositionObjectFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%float64 percent_complete~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <RepositionObjectFeedback>))
  (cl:+ 0
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <RepositionObjectFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'RepositionObjectFeedback
    (cl:cons ':percent_complete (percent_complete msg))
))
