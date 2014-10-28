include "new-default.inc"
include "semaphore.inc"

load db "supervisor/Config.db"
load db "supervisor/configuration/Pr2.db"


load opf "supervisor/Tester.opf"


include "supervisor/modules/Viman.sym"
include "supervisor/modules/Spark.sym"
include "supervisor/modules/Mhp.sym"
include "supervisor/modules/GenomInterface.sym"
include "supervisor/modules/Softmotion.sym"
include "supervisor/modules/Acapela.sym"
include "supervisor/modules/GtpActions.sym"

load db "supervisor/modules/Spark.db"
load db "supervisor/modules/Mhp.db"
load db "supervisor/modules/Softmotion.db"
load db "supervisor/modules/Acapela.db"

load opf "supervisor/modules/Mhp.opf"
load opf "supervisor/modules/GenomInterface.opf"
load opf "supervisor/modules/Softmotion.opf"
load opf "supervisor/modules/Viman.opf"
load opf "supervisor/modules/Spark.opf"
load opf "supervisor/modules/Acapela.opf"
load opf "supervisor/modules/GtpActions.opf"



include "supervisor/robot/PlanManager.sym"
include "supervisor/robot/MonitorManager.sym"
include "supervisor/robot/DatabaseInterface.sym"
include "supervisor/robot/ExecutionManager.sym"
include "supervisor/robot/Controller.sym"
include "supervisor/robot/ArmActions.sym"
include "supervisor/robot/HeadActions.sym"
include "supervisor/robot/PlannerInterface.sym"
include "supervisor/robot/AgentActionMonitor.sym"
include "supervisor/robot/Connector.sym"
include "supervisor/robot/Monitors.sym"
include "supervisor/robot/Robot.sym"
include "supervisor/robot/PathPlanner.sym"
include "supervisor/robot/BaseActions.sym"

load db "supervisor/robot/PlanManager.db"
load db "supervisor/robot/PlannerInterface.db"
load db "supervisor/robot/Connector.db"
load db "supervisor/robot/AgentActionMonitor.db"
load db "supervisor/robot/Robot.db"
load db "supervisor/robot/PathPlanner.db"
load db "supervisor/robot/BaseActions.db"
load db "supervisor/robot/Acapela.db"
load db "supervisor/robot/DatabaseInterface.db"


load opf "supervisor/robot/ExecutionManager.opf"
load opf "supervisor/robot/Controller.opf"
load opf "supervisor/robot/ArmActions.opf"
load opf "supervisor/robot/HeadActions.opf"
load opf "supervisor/robot/PlannerInterface.opf"
load opf "supervisor/robot/AgentActionMonitor.opf"
load opf "supervisor/robot/Connector.opf"
load opf "supervisor/robot/PathPlanner.opf"
load opf "supervisor/robot/BaseActions.opf"
load opf "supervisor/robot/MonitorManager.opf"
load opf "supervisor/robot/DatabaseInterface.opf"
load opf "supervisor/robot/PlanManager.opf"
load opf "supervisor/robot/PriorityQueue.opf"




load db "supervisor/domains/Object.db"
load db "supervisor/domains/sActions.db"
include "supervisor/domains/Actions.sym"

load db "supervisor/domains/POMDP.db"
load db "supervisor/domains/Queue.db"


include "supervisor/utilities/Queue.sym"
include "supervisor/utilities/POMDP.sym"
include "supervisor/utilities/Timer.sym"


load opf "supervisor/utilities/Queue.opf"
load opf "supervisor/utilities/Timer.opf"
load opf "supervisor/utilities/POMDP.opf"


