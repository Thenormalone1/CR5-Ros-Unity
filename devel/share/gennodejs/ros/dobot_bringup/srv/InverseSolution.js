// Auto-generated. Do not edit!

// (in-package dobot_bringup.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class InverseSolutionRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.offset1 = null;
      this.offset2 = null;
      this.offset3 = null;
      this.offset4 = null;
      this.offset5 = null;
      this.offset6 = null;
      this.user = null;
      this.tool = null;
      this.isJointNear = null;
      this.JointNear = null;
    }
    else {
      if (initObj.hasOwnProperty('offset1')) {
        this.offset1 = initObj.offset1
      }
      else {
        this.offset1 = 0.0;
      }
      if (initObj.hasOwnProperty('offset2')) {
        this.offset2 = initObj.offset2
      }
      else {
        this.offset2 = 0.0;
      }
      if (initObj.hasOwnProperty('offset3')) {
        this.offset3 = initObj.offset3
      }
      else {
        this.offset3 = 0.0;
      }
      if (initObj.hasOwnProperty('offset4')) {
        this.offset4 = initObj.offset4
      }
      else {
        this.offset4 = 0.0;
      }
      if (initObj.hasOwnProperty('offset5')) {
        this.offset5 = initObj.offset5
      }
      else {
        this.offset5 = 0.0;
      }
      if (initObj.hasOwnProperty('offset6')) {
        this.offset6 = initObj.offset6
      }
      else {
        this.offset6 = 0.0;
      }
      if (initObj.hasOwnProperty('user')) {
        this.user = initObj.user
      }
      else {
        this.user = 0;
      }
      if (initObj.hasOwnProperty('tool')) {
        this.tool = initObj.tool
      }
      else {
        this.tool = 0;
      }
      if (initObj.hasOwnProperty('isJointNear')) {
        this.isJointNear = initObj.isJointNear
      }
      else {
        this.isJointNear = 0;
      }
      if (initObj.hasOwnProperty('JointNear')) {
        this.JointNear = initObj.JointNear
      }
      else {
        this.JointNear = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type InverseSolutionRequest
    // Serialize message field [offset1]
    bufferOffset = _serializer.float64(obj.offset1, buffer, bufferOffset);
    // Serialize message field [offset2]
    bufferOffset = _serializer.float64(obj.offset2, buffer, bufferOffset);
    // Serialize message field [offset3]
    bufferOffset = _serializer.float64(obj.offset3, buffer, bufferOffset);
    // Serialize message field [offset4]
    bufferOffset = _serializer.float64(obj.offset4, buffer, bufferOffset);
    // Serialize message field [offset5]
    bufferOffset = _serializer.float64(obj.offset5, buffer, bufferOffset);
    // Serialize message field [offset6]
    bufferOffset = _serializer.float64(obj.offset6, buffer, bufferOffset);
    // Serialize message field [user]
    bufferOffset = _serializer.int32(obj.user, buffer, bufferOffset);
    // Serialize message field [tool]
    bufferOffset = _serializer.int32(obj.tool, buffer, bufferOffset);
    // Serialize message field [isJointNear]
    bufferOffset = _serializer.int32(obj.isJointNear, buffer, bufferOffset);
    // Serialize message field [JointNear]
    bufferOffset = _serializer.string(obj.JointNear, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type InverseSolutionRequest
    let len;
    let data = new InverseSolutionRequest(null);
    // Deserialize message field [offset1]
    data.offset1 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [offset2]
    data.offset2 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [offset3]
    data.offset3 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [offset4]
    data.offset4 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [offset5]
    data.offset5 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [offset6]
    data.offset6 = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [user]
    data.user = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [tool]
    data.tool = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [isJointNear]
    data.isJointNear = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [JointNear]
    data.JointNear = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.JointNear);
    return length + 64;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot_bringup/InverseSolutionRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a56434a738fb69f7e97a6dc9a3bb7f8d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    float64 offset1
    float64 offset2
    float64 offset3
    float64 offset4
    float64 offset5
    float64 offset6
    int32 user
    int32 tool
    int32 isJointNear
    string JointNear
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new InverseSolutionRequest(null);
    if (msg.offset1 !== undefined) {
      resolved.offset1 = msg.offset1;
    }
    else {
      resolved.offset1 = 0.0
    }

    if (msg.offset2 !== undefined) {
      resolved.offset2 = msg.offset2;
    }
    else {
      resolved.offset2 = 0.0
    }

    if (msg.offset3 !== undefined) {
      resolved.offset3 = msg.offset3;
    }
    else {
      resolved.offset3 = 0.0
    }

    if (msg.offset4 !== undefined) {
      resolved.offset4 = msg.offset4;
    }
    else {
      resolved.offset4 = 0.0
    }

    if (msg.offset5 !== undefined) {
      resolved.offset5 = msg.offset5;
    }
    else {
      resolved.offset5 = 0.0
    }

    if (msg.offset6 !== undefined) {
      resolved.offset6 = msg.offset6;
    }
    else {
      resolved.offset6 = 0.0
    }

    if (msg.user !== undefined) {
      resolved.user = msg.user;
    }
    else {
      resolved.user = 0
    }

    if (msg.tool !== undefined) {
      resolved.tool = msg.tool;
    }
    else {
      resolved.tool = 0
    }

    if (msg.isJointNear !== undefined) {
      resolved.isJointNear = msg.isJointNear;
    }
    else {
      resolved.isJointNear = 0
    }

    if (msg.JointNear !== undefined) {
      resolved.JointNear = msg.JointNear;
    }
    else {
      resolved.JointNear = ''
    }

    return resolved;
    }
};

class InverseSolutionResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.res = null;
    }
    else {
      if (initObj.hasOwnProperty('res')) {
        this.res = initObj.res
      }
      else {
        this.res = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type InverseSolutionResponse
    // Serialize message field [res]
    bufferOffset = _serializer.int32(obj.res, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type InverseSolutionResponse
    let len;
    let data = new InverseSolutionResponse(null);
    // Deserialize message field [res]
    data.res = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'dobot_bringup/InverseSolutionResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'ca16cfbd5443ad97f6cc7ffd6bb67292';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 res
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new InverseSolutionResponse(null);
    if (msg.res !== undefined) {
      resolved.res = msg.res;
    }
    else {
      resolved.res = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: InverseSolutionRequest,
  Response: InverseSolutionResponse,
  md5sum() { return 'ca1d2fdd189adb0efab2e962b8538e82'; },
  datatype() { return 'dobot_bringup/InverseSolution'; }
};
