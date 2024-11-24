
"use strict";

let GetErrorID = require('./GetErrorID.js')
let TCPSpeed = require('./TCPSpeed.js')
let DO = require('./DO.js')
let DOExecute = require('./DOExecute.js')
let ServoJ = require('./ServoJ.js')
let StopScript = require('./StopScript.js')
let GetCoils = require('./GetCoils.js')
let AccJ = require('./AccJ.js')
let MovJIO = require('./MovJIO.js')
let Tool = require('./Tool.js')
let SetArmOrientation = require('./SetArmOrientation.js')
let ResetRobot = require('./ResetRobot.js')
let StartTrace = require('./StartTrace.js')
let RelMovL = require('./RelMovL.js')
let ClearError = require('./ClearError.js')
let SetTerminal485 = require('./SetTerminal485.js')
let ToolDI = require('./ToolDI.js')
let SpeedL = require('./SpeedL.js')
let ToolDO = require('./ToolDO.js')
let HandleTrajPoints = require('./HandleTrajPoints.js')
let InverseSolution = require('./InverseSolution.js')
let SpeedJ = require('./SpeedJ.js')
let RelJointMovJ = require('./RelJointMovJ.js')
let MovJ = require('./MovJ.js')
let AOExecute = require('./AOExecute.js')
let EmergencyStop = require('./EmergencyStop.js')
let PayLoad = require('./PayLoad.js')
let StartDrag = require('./StartDrag.js')
let DI = require('./DI.js')
let RelMovJUser = require('./RelMovJUser.js')
let GetAngle = require('./GetAngle.js')
let Jump = require('./Jump.js')
let SetCoils = require('./SetCoils.js')
let SetTerminalKeys = require('./SetTerminalKeys.js')
let MovJExt = require('./MovJExt.js')
let EnableRobot = require('./EnableRobot.js')
let ContinueScript = require('./ContinueScript.js')
let GetTraceStartPose = require('./GetTraceStartPose.js')
let ModbusCreate = require('./ModbusCreate.js')
let ToolAI = require('./ToolAI.js')
let BrakeControl = require('./BrakeControl.js')
let RelMovLTool = require('./RelMovLTool.js')
let StartPath = require('./StartPath.js')
let StopDrag = require('./StopDrag.js')
let CP = require('./CP.js')
let MovL = require('./MovL.js')
let StartFCTrace = require('./StartFCTrace.js')
let TCPSpeedEnd = require('./TCPSpeedEnd.js')
let MoveJog = require('./MoveJog.js')
let pause = require('./pause.js')
let GetHoldRegs = require('./GetHoldRegs.js')
let RunScript = require('./RunScript.js')
let GetPathStartPose = require('./GetPathStartPose.js')
let GetSixForceData = require('./GetSixForceData.js')
let ToolDOExecute = require('./ToolDOExecute.js')
let JointMovJ = require('./JointMovJ.js')
let StopmoveJog = require('./StopmoveJog.js')
let Sync = require('./Sync.js')
let PositiveSolution = require('./PositiveSolution.js')
let AccL = require('./AccL.js')
let Arc = require('./Arc.js')
let SetObstacleAvoid = require('./SetObstacleAvoid.js')
let SyncAll = require('./SyncAll.js')
let SetPayload = require('./SetPayload.js')
let SetSafeSkin = require('./SetSafeSkin.js')
let SetCollideDrag = require('./SetCollideDrag.js')
let Circle = require('./Circle.js')
let GetTerminal485 = require('./GetTerminal485.js')
let Arch = require('./Arch.js')
let ModbusClose = require('./ModbusClose.js')
let PowerOn = require('./PowerOn.js')
let DigitalOutputs = require('./DigitalOutputs.js')
let Continues = require('./Continues.js')
let GetInRegs = require('./GetInRegs.js')
let PauseScript = require('./PauseScript.js')
let MovLIO = require('./MovLIO.js')
let AI = require('./AI.js')
let DisableRobot = require('./DisableRobot.js')
let ServoP = require('./ServoP.js')
let RelMovJ = require('./RelMovJ.js')
let AO = require('./AO.js')
let User = require('./User.js')
let GetInBits = require('./GetInBits.js')
let DOGroup = require('./DOGroup.js')
let RobotMode = require('./RobotMode.js')
let SpeedFactor = require('./SpeedFactor.js')
let GetPose = require('./GetPose.js')
let DIGroup = require('./DIGroup.js')
let RelMovJTool = require('./RelMovJTool.js')
let Wait = require('./Wait.js')
let SetCollisionLevel = require('./SetCollisionLevel.js')
let LoadSwitch = require('./LoadSwitch.js')
let RelMovLUser = require('./RelMovLUser.js')
let SetHoldRegs = require('./SetHoldRegs.js')
let LimZ = require('./LimZ.js')

module.exports = {
  GetErrorID: GetErrorID,
  TCPSpeed: TCPSpeed,
  DO: DO,
  DOExecute: DOExecute,
  ServoJ: ServoJ,
  StopScript: StopScript,
  GetCoils: GetCoils,
  AccJ: AccJ,
  MovJIO: MovJIO,
  Tool: Tool,
  SetArmOrientation: SetArmOrientation,
  ResetRobot: ResetRobot,
  StartTrace: StartTrace,
  RelMovL: RelMovL,
  ClearError: ClearError,
  SetTerminal485: SetTerminal485,
  ToolDI: ToolDI,
  SpeedL: SpeedL,
  ToolDO: ToolDO,
  HandleTrajPoints: HandleTrajPoints,
  InverseSolution: InverseSolution,
  SpeedJ: SpeedJ,
  RelJointMovJ: RelJointMovJ,
  MovJ: MovJ,
  AOExecute: AOExecute,
  EmergencyStop: EmergencyStop,
  PayLoad: PayLoad,
  StartDrag: StartDrag,
  DI: DI,
  RelMovJUser: RelMovJUser,
  GetAngle: GetAngle,
  Jump: Jump,
  SetCoils: SetCoils,
  SetTerminalKeys: SetTerminalKeys,
  MovJExt: MovJExt,
  EnableRobot: EnableRobot,
  ContinueScript: ContinueScript,
  GetTraceStartPose: GetTraceStartPose,
  ModbusCreate: ModbusCreate,
  ToolAI: ToolAI,
  BrakeControl: BrakeControl,
  RelMovLTool: RelMovLTool,
  StartPath: StartPath,
  StopDrag: StopDrag,
  CP: CP,
  MovL: MovL,
  StartFCTrace: StartFCTrace,
  TCPSpeedEnd: TCPSpeedEnd,
  MoveJog: MoveJog,
  pause: pause,
  GetHoldRegs: GetHoldRegs,
  RunScript: RunScript,
  GetPathStartPose: GetPathStartPose,
  GetSixForceData: GetSixForceData,
  ToolDOExecute: ToolDOExecute,
  JointMovJ: JointMovJ,
  StopmoveJog: StopmoveJog,
  Sync: Sync,
  PositiveSolution: PositiveSolution,
  AccL: AccL,
  Arc: Arc,
  SetObstacleAvoid: SetObstacleAvoid,
  SyncAll: SyncAll,
  SetPayload: SetPayload,
  SetSafeSkin: SetSafeSkin,
  SetCollideDrag: SetCollideDrag,
  Circle: Circle,
  GetTerminal485: GetTerminal485,
  Arch: Arch,
  ModbusClose: ModbusClose,
  PowerOn: PowerOn,
  DigitalOutputs: DigitalOutputs,
  Continues: Continues,
  GetInRegs: GetInRegs,
  PauseScript: PauseScript,
  MovLIO: MovLIO,
  AI: AI,
  DisableRobot: DisableRobot,
  ServoP: ServoP,
  RelMovJ: RelMovJ,
  AO: AO,
  User: User,
  GetInBits: GetInBits,
  DOGroup: DOGroup,
  RobotMode: RobotMode,
  SpeedFactor: SpeedFactor,
  GetPose: GetPose,
  DIGroup: DIGroup,
  RelMovJTool: RelMovJTool,
  Wait: Wait,
  SetCollisionLevel: SetCollisionLevel,
  LoadSwitch: LoadSwitch,
  RelMovLUser: RelMovLUser,
  SetHoldRegs: SetHoldRegs,
  LimZ: LimZ,
};
