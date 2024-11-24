
"use strict";

let GetErrorID = require('./GetErrorID.js')
let PositiveKin = require('./PositiveKin.js')
let DO = require('./DO.js')
let ServoJ = require('./ServoJ.js')
let GetCoils = require('./GetCoils.js')
let CalcUser = require('./CalcUser.js')
let AccJ = require('./AccJ.js')
let EnableSafeSkin = require('./EnableSafeSkin.js')
let MovJIO = require('./MovJIO.js')
let Tool = require('./Tool.js')
let DragSensivity = require('./DragSensivity.js')
let ClearError = require('./ClearError.js')
let SetOutputBool = require('./SetOutputBool.js')
let ToolDI = require('./ToolDI.js')
let ToolDO = require('./ToolDO.js')
let StopMoveJog = require('./StopMoveJog.js')
let GetOutputBool = require('./GetOutputBool.js')
let GetInputInt = require('./GetInputInt.js')
let InverseSolution = require('./InverseSolution.js')
let GetInputFloat = require('./GetInputFloat.js')
let RelJointMovJ = require('./RelJointMovJ.js')
let CalcTool = require('./CalcTool.js')
let MovJ = require('./MovJ.js')
let Stop = require('./Stop.js')
let ModbusRTUCreate = require('./ModbusRTUCreate.js')
let EmergencyStop = require('./EmergencyStop.js')
let InverseKin = require('./InverseKin.js')
let StartDrag = require('./StartDrag.js')
let GetAO = require('./GetAO.js')
let GetOutputFloat = require('./GetOutputFloat.js')
let ToolDOInstant = require('./ToolDOInstant.js')
let DI = require('./DI.js')
let RelMovJUser = require('./RelMovJUser.js')
let SetTool = require('./SetTool.js')
let GetAngle = require('./GetAngle.js')
let SetCoils = require('./SetCoils.js')
let EnableRobot = require('./EnableRobot.js')
let ModbusCreate = require('./ModbusCreate.js')
let ToolAI = require('./ToolAI.js')
let BrakeControl = require('./BrakeControl.js')
let RelMovLTool = require('./RelMovLTool.js')
let StartPath = require('./StartPath.js')
let StopDrag = require('./StopDrag.js')
let GetOutputInt = require('./GetOutputInt.js')
let CP = require('./CP.js')
let MovL = require('./MovL.js')
let SetToolPower = require('./SetToolPower.js')
let MoveJog = require('./MoveJog.js')
let SetBackDistance = require('./SetBackDistance.js')
let SetUser = require('./SetUser.js')
let GetHoldRegs = require('./GetHoldRegs.js')
let RunScript = require('./RunScript.js')
let VelL = require('./VelL.js')
let SetPostCollisionMode = require('./SetPostCollisionMode.js')
let Pause = require('./Pause.js')
let VelJ = require('./VelJ.js')
let AccL = require('./AccL.js')
let Arc = require('./Arc.js')
let GetDOGroup = require('./GetDOGroup.js')
let SetPayload = require('./SetPayload.js')
let SetSafeSkin = require('./SetSafeSkin.js')
let Circle = require('./Circle.js')
let Continue = require('./Continue.js')
let ModbusClose = require('./ModbusClose.js')
let PowerOn = require('./PowerOn.js')
let GetInRegs = require('./GetInRegs.js')
let GetStartPose = require('./GetStartPose.js')
let MovLIO = require('./MovLIO.js')
let AI = require('./AI.js')
let DisableRobot = require('./DisableRobot.js')
let ServoP = require('./ServoP.js')
let DOInstant = require('./DOInstant.js')
let AO = require('./AO.js')
let User = require('./User.js')
let SetToolMode = require('./SetToolMode.js')
let GetInBits = require('./GetInBits.js')
let AOInstant = require('./AOInstant.js')
let DOGroup = require('./DOGroup.js')
let RobotMode = require('./RobotMode.js')
let GetInputBool = require('./GetInputBool.js')
let SpeedFactor = require('./SpeedFactor.js')
let GetDO = require('./GetDO.js')
let GetPose = require('./GetPose.js')
let DIGroup = require('./DIGroup.js')
let RelMovJTool = require('./RelMovJTool.js')
let TcpDashboard = require('./TcpDashboard.js')
let SetOutputFloat = require('./SetOutputFloat.js')
let SetCollisionLevel = require('./SetCollisionLevel.js')
let SetTool485 = require('./SetTool485.js')
let GetCurrentCommandId = require('./GetCurrentCommandId.js')
let SetOutputInt = require('./SetOutputInt.js')
let RelMovLUser = require('./RelMovLUser.js')
let SetSafeWallEnable = require('./SetSafeWallEnable.js')
let SetHoldRegs = require('./SetHoldRegs.js')

module.exports = {
  GetErrorID: GetErrorID,
  PositiveKin: PositiveKin,
  DO: DO,
  ServoJ: ServoJ,
  GetCoils: GetCoils,
  CalcUser: CalcUser,
  AccJ: AccJ,
  EnableSafeSkin: EnableSafeSkin,
  MovJIO: MovJIO,
  Tool: Tool,
  DragSensivity: DragSensivity,
  ClearError: ClearError,
  SetOutputBool: SetOutputBool,
  ToolDI: ToolDI,
  ToolDO: ToolDO,
  StopMoveJog: StopMoveJog,
  GetOutputBool: GetOutputBool,
  GetInputInt: GetInputInt,
  InverseSolution: InverseSolution,
  GetInputFloat: GetInputFloat,
  RelJointMovJ: RelJointMovJ,
  CalcTool: CalcTool,
  MovJ: MovJ,
  Stop: Stop,
  ModbusRTUCreate: ModbusRTUCreate,
  EmergencyStop: EmergencyStop,
  InverseKin: InverseKin,
  StartDrag: StartDrag,
  GetAO: GetAO,
  GetOutputFloat: GetOutputFloat,
  ToolDOInstant: ToolDOInstant,
  DI: DI,
  RelMovJUser: RelMovJUser,
  SetTool: SetTool,
  GetAngle: GetAngle,
  SetCoils: SetCoils,
  EnableRobot: EnableRobot,
  ModbusCreate: ModbusCreate,
  ToolAI: ToolAI,
  BrakeControl: BrakeControl,
  RelMovLTool: RelMovLTool,
  StartPath: StartPath,
  StopDrag: StopDrag,
  GetOutputInt: GetOutputInt,
  CP: CP,
  MovL: MovL,
  SetToolPower: SetToolPower,
  MoveJog: MoveJog,
  SetBackDistance: SetBackDistance,
  SetUser: SetUser,
  GetHoldRegs: GetHoldRegs,
  RunScript: RunScript,
  VelL: VelL,
  SetPostCollisionMode: SetPostCollisionMode,
  Pause: Pause,
  VelJ: VelJ,
  AccL: AccL,
  Arc: Arc,
  GetDOGroup: GetDOGroup,
  SetPayload: SetPayload,
  SetSafeSkin: SetSafeSkin,
  Circle: Circle,
  Continue: Continue,
  ModbusClose: ModbusClose,
  PowerOn: PowerOn,
  GetInRegs: GetInRegs,
  GetStartPose: GetStartPose,
  MovLIO: MovLIO,
  AI: AI,
  DisableRobot: DisableRobot,
  ServoP: ServoP,
  DOInstant: DOInstant,
  AO: AO,
  User: User,
  SetToolMode: SetToolMode,
  GetInBits: GetInBits,
  AOInstant: AOInstant,
  DOGroup: DOGroup,
  RobotMode: RobotMode,
  GetInputBool: GetInputBool,
  SpeedFactor: SpeedFactor,
  GetDO: GetDO,
  GetPose: GetPose,
  DIGroup: DIGroup,
  RelMovJTool: RelMovJTool,
  TcpDashboard: TcpDashboard,
  SetOutputFloat: SetOutputFloat,
  SetCollisionLevel: SetCollisionLevel,
  SetTool485: SetTool485,
  GetCurrentCommandId: GetCurrentCommandId,
  SetOutputInt: SetOutputInt,
  RelMovLUser: RelMovLUser,
  SetSafeWallEnable: SetSafeWallEnable,
  SetHoldRegs: SetHoldRegs,
};
