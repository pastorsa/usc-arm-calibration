; Auto-generated. Do not edit!


(cl:in-package arm_head_control-msg)


;//! \htmlinclude LookAtGoal.msg.html

(cl:defclass <LookAtGoal> (roslisp-msg-protocol:ros-message)
  ((ptu_joint_angels
    :reader ptu_joint_angels
    :initarg :ptu_joint_angels
    :type (cl:vector cl:float)
   :initform (cl:make-array 4 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass LookAtGoal (<LookAtGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LookAtGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LookAtGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name arm_head_control-msg:<LookAtGoal> is deprecated: use arm_head_control-msg:LookAtGoal instead.")))

(cl:ensure-generic-function 'ptu_joint_angels-val :lambda-list '(m))
(cl:defmethod ptu_joint_angels-val ((m <LookAtGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader arm_head_control-msg:ptu_joint_angels-val is deprecated.  Use arm_head_control-msg:ptu_joint_angels instead.")
  (ptu_joint_angels m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LookAtGoal>) ostream)
  "Serializes a message object of type '<LookAtGoal>"
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-double-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream)))
   (cl:slot-value msg 'ptu_joint_angels))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LookAtGoal>) istream)
  "Deserializes a message object of type '<LookAtGoal>"
  (cl:setf (cl:slot-value msg 'ptu_joint_angels) (cl:make-array 4))
  (cl:let ((vals (cl:slot-value msg 'ptu_joint_angels)))
    (cl:dotimes (i 4)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-double-float-bits bits)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LookAtGoal>)))
  "Returns string type for a message object of type '<LookAtGoal>"
  "arm_head_control/LookAtGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LookAtGoal)))
  "Returns string type for a message object of type 'LookAtGoal"
  "arm_head_control/LookAtGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LookAtGoal>)))
  "Returns md5sum for a message object of type '<LookAtGoal>"
  "fa6eef1924fccad85982c2c4b5e78c32")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LookAtGoal)))
  "Returns md5sum for a message object of type 'LookAtGoal"
  "fa6eef1924fccad85982c2c4b5e78c32")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LookAtGoal>)))
  "Returns full string definition for message of type '<LookAtGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%float64[4] ptu_joint_angels~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LookAtGoal)))
  "Returns full string definition for message of type 'LookAtGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Define the goal~%float64[4] ptu_joint_angels~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LookAtGoal>))
  (cl:+ 0
     0 (cl:reduce #'cl:+ (cl:slot-value msg 'ptu_joint_angels) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 8)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LookAtGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'LookAtGoal
    (cl:cons ':ptu_joint_angels (ptu_joint_angels msg))
))
