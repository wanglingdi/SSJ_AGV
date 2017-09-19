; Auto-generated. Do not edit!


(cl:in-package pal_interaction_msgs-msg)


;//! \htmlinclude TtsActionGoal.msg.html

(cl:defclass <TtsActionGoal> (roslisp-msg-protocol:ros-message)
  ((header
    :reader header
    :initarg :header
    :type std_msgs-msg:Header
    :initform (cl:make-instance 'std_msgs-msg:Header))
   (goal_id
    :reader goal_id
    :initarg :goal_id
    :type actionlib_msgs-msg:GoalID
    :initform (cl:make-instance 'actionlib_msgs-msg:GoalID))
   (goal
    :reader goal
    :initarg :goal
    :type pal_interaction_msgs-msg:TtsGoal
    :initform (cl:make-instance 'pal_interaction_msgs-msg:TtsGoal)))
)

(cl:defclass TtsActionGoal (<TtsActionGoal>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TtsActionGoal>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TtsActionGoal)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name pal_interaction_msgs-msg:<TtsActionGoal> is deprecated: use pal_interaction_msgs-msg:TtsActionGoal instead.")))

(cl:ensure-generic-function 'header-val :lambda-list '(m))
(cl:defmethod header-val ((m <TtsActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pal_interaction_msgs-msg:header-val is deprecated.  Use pal_interaction_msgs-msg:header instead.")
  (header m))

(cl:ensure-generic-function 'goal_id-val :lambda-list '(m))
(cl:defmethod goal_id-val ((m <TtsActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pal_interaction_msgs-msg:goal_id-val is deprecated.  Use pal_interaction_msgs-msg:goal_id instead.")
  (goal_id m))

(cl:ensure-generic-function 'goal-val :lambda-list '(m))
(cl:defmethod goal-val ((m <TtsActionGoal>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader pal_interaction_msgs-msg:goal-val is deprecated.  Use pal_interaction_msgs-msg:goal instead.")
  (goal m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TtsActionGoal>) ostream)
  "Serializes a message object of type '<TtsActionGoal>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'header) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal_id) ostream)
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'goal) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TtsActionGoal>) istream)
  "Deserializes a message object of type '<TtsActionGoal>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'header) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal_id) istream)
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'goal) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TtsActionGoal>)))
  "Returns string type for a message object of type '<TtsActionGoal>"
  "pal_interaction_msgs/TtsActionGoal")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TtsActionGoal)))
  "Returns string type for a message object of type 'TtsActionGoal"
  "pal_interaction_msgs/TtsActionGoal")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TtsActionGoal>)))
  "Returns md5sum for a message object of type '<TtsActionGoal>"
  "3bccf3a2c5d1d54cc7b0d11a481421eb")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TtsActionGoal)))
  "Returns md5sum for a message object of type 'TtsActionGoal"
  "3bccf3a2c5d1d54cc7b0d11a481421eb")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TtsActionGoal>)))
  "Returns full string definition for message of type '<TtsActionGoal>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%TtsGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: pal_interaction_msgs/TtsGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%## goal definition~%~%# utterance will contain indications to construct~%# the text to be spoken.~%# It must be specified in a section/key format ~%# for internationalisation. The actual text will~%# be obtained from configuration files as in pal_tts_cfg pkg.~% ~%I18nText text~%TtsText rawtext~%~%# This is to suggest a voice name to the ~%# tts engine. For the same language we might have~%# a variety of voices available, and this variable ~%# is to choose one among them. ~%# (not implemented yet)~%string speakerName~%~%# Time to wait before synthesising the text itself.~%# It can be used to produced delayed speech.~%float64 wait_before_speaking~%~%~%================================================================================~%MSG: pal_interaction_msgs/I18nText~%# section/key is used as in examples in the pal_tts_cfg pkg.~%string section~%string key~%~%# language id, must be speficied using RFC 3066~%string lang_id~%~%# arguments contain the values by which ~%# occurrences of '%s' will be replaced in the ~%# main text.~%# This only supports up to 2 arguments and no recursion.~%# However, recursion and more argumnents are~%# planned to be supported in the future.~%I18nArgument[] arguments~%~%================================================================================~%MSG: pal_interaction_msgs/I18nArgument~%# section key, override the value in expanded.~%# Use expanded for text that do not need expansion.~%# Please note that expanded here will not be translated ~%# to any language.~%~%string section~%string key~%string expanded~%~%~%================================================================================~%MSG: pal_interaction_msgs/TtsText~%# this message is to specify ~%# raw text to the TTS server. ~%~%string text~%~%# Language id in RFC 3066 format~%# This field is mandatory~%string lang_id~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TtsActionGoal)))
  "Returns full string definition for message of type 'TtsActionGoal"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%Header header~%actionlib_msgs/GoalID goal_id~%TtsGoal goal~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: actionlib_msgs/GoalID~%# The stamp should store the time at which this goal was requested.~%# It is used by an action server when it tries to preempt all~%# goals that were requested before a certain time~%time stamp~%~%# The id provides a way to associate feedback and~%# result message with specific goal requests. The id~%# specified must be unique.~%string id~%~%~%================================================================================~%MSG: pal_interaction_msgs/TtsGoal~%# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%## goal definition~%~%# utterance will contain indications to construct~%# the text to be spoken.~%# It must be specified in a section/key format ~%# for internationalisation. The actual text will~%# be obtained from configuration files as in pal_tts_cfg pkg.~% ~%I18nText text~%TtsText rawtext~%~%# This is to suggest a voice name to the ~%# tts engine. For the same language we might have~%# a variety of voices available, and this variable ~%# is to choose one among them. ~%# (not implemented yet)~%string speakerName~%~%# Time to wait before synthesising the text itself.~%# It can be used to produced delayed speech.~%float64 wait_before_speaking~%~%~%================================================================================~%MSG: pal_interaction_msgs/I18nText~%# section/key is used as in examples in the pal_tts_cfg pkg.~%string section~%string key~%~%# language id, must be speficied using RFC 3066~%string lang_id~%~%# arguments contain the values by which ~%# occurrences of '%s' will be replaced in the ~%# main text.~%# This only supports up to 2 arguments and no recursion.~%# However, recursion and more argumnents are~%# planned to be supported in the future.~%I18nArgument[] arguments~%~%================================================================================~%MSG: pal_interaction_msgs/I18nArgument~%# section key, override the value in expanded.~%# Use expanded for text that do not need expansion.~%# Please note that expanded here will not be translated ~%# to any language.~%~%string section~%string key~%string expanded~%~%~%================================================================================~%MSG: pal_interaction_msgs/TtsText~%# this message is to specify ~%# raw text to the TTS server. ~%~%string text~%~%# Language id in RFC 3066 format~%# This field is mandatory~%string lang_id~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TtsActionGoal>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'header))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal_id))
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'goal))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TtsActionGoal>))
  "Converts a ROS message object to a list"
  (cl:list 'TtsActionGoal
    (cl:cons ':header (header msg))
    (cl:cons ':goal_id (goal_id msg))
    (cl:cons ':goal (goal msg))
))
