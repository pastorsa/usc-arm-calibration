; Auto-generated. Do not edit!


(cl:in-package arm_behavior_actions-msg)


;//! \htmlinclude LookAtResult.msg.html

(cl:defclass <LookAtResult> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:integer
    :initform 0)
   (info
    :reader info
    :initarg :info
    :type cl:string
    :initform ""))
)

(cl:defclass LookAtResult (<LookAtResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LookAtResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LookAtResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name arm_behavior_actions-msg:<LookAtResult> is deprecated: use arm_behavior_actions-msg:LookAtResult instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <LookAtResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader arm_behavior_actions-msg:result-val is deprecated.  Use arm_behavior_actions-msg:result instead.")
  (result m))

(cl:ensure-generic-function 'info-val :lambda-list '(m))
(cl:defmethod info-val ((m <LookAtResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader arm_behavior_actions-msg:info-val is deprecated.  Use arm_behavior_actions-msg:info instead.")
  (info m))
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql '<LookAtResult>)))
    "Constants for message type '<LookAtResult>"
  '((:FAILED . 0)
    (:SUCCEEDED . 1))
)
(cl:defmethod roslisp-msg-protocol:symbol-codes ((msg-type (cl:eql 'LookAtResult)))
    "Constants for message type 'LookAtResult"
  '((:FAILED . 0)
    (:SUCCEEDED . 1))
)
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LookAtResult>) ostream)
  "Serializes a message object of type '<LookAtResult>"
  (cl:let* ((signed (cl:slot-value msg 'result)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'info))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'info))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LookAtResult>) istream)
  "Deserializes a message object of type '<LookAtResult>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'info) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'info) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LookAtResult>)))
  "Returns string type for a message object of type '<LookAtResult>"
  "arm_behavior_actions/LookAtResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LookAtResult)))
  "Returns string type for a message object of type 'LookAtResult"
  "arm_behavior_actions/LookAtResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LookAtResult>)))
  "Returns md5sum for a message object of type '<LookAtResult>"
  "1cc7049e40e4cf19381819f5e2c8ff95")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LookAtResult)))
  "Returns md5sum for a message object of type 'LookAtResult"
  "1cc7049e40e4cf19381819f5e2c8ff95")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LookAtResult>)))
  "Returns full string definition for message of type '<LookAtResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the result~%int32 result~%int32 FAILED=0~%int32 SUCCEEDED=1~%string info~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LookAtResult)))
  "Returns full string definition for message of type 'LookAtResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the result~%int32 result~%int32 FAILED=0~%int32 SUCCEEDED=1~%string info~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LookAtResult>))
  (cl:+ 0
     4
     4 (cl:length (cl:slot-value msg 'info))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LookAtResult>))
  "Converts a ROS message object to a list"
  (cl:list 'LookAtResult
    (cl:cons ':result (result msg))
    (cl:cons ':info (info msg))
))
