include "new-default.inc"
include "semaphore.inc"

load db "supervisor/Config.db"
load db "supervisor/configuration/Spencer.db"


load opf "supervisor/Tester.opf"

include "supervisor/robot/DatabaseInterface.sym"
include "supervisor/robot/ExecutionManager.sym"
include "supervisor/robot/Controller.sym"
include "supervisor/robot/HeadActions.sym"
include "supervisor/robot/PathPlanner.sym"
include "supervisor/robot/BaseActions.sym"
include "supervisor/robot/ReportManager.sym"
include "supervisor/utilities/Timer.sym"



load db "supervisor/robot/PathPlanner.db"
load db "supervisor/robot/BaseActions.db"
load db "supervisor/robot/DatabaseInterface.db"

load opf "supervisor/robot/ExecutionManager.opf"
load opf "supervisor/robot/Controller.opf"
load opf "supervisor/robot/HeadActions.opf"
load opf "supervisor/robot/PlannerInterface.opf"
load opf "supervisor/robot/PathPlanner.opf"
load opf "supervisor/robot/BaseActions.opf"
load opf "supervisor/robot/DatabaseInterface.opf"
load opf "supervisor/robot/ReportManager.opf"

load opf "supervisor/utilities/POMDP.opf"
load db  "supervisor/utilities/POMDP.db"
load opf  "supervisor/utilities/Timer.opf"
load db  "supervisor/utilities/Timer.db"

load opf "supervisor/domains/SpencerIcsrActions.opf"
load db "supervisor/domains/SpencerIcsrActions.db"

