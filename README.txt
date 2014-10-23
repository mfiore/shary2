instructions:
-configure environment
set your OPRS_GENOM_PATH and OPRS_ACAPELA_PATH 

-configure the system 
edit the supervisor/Config.db file

-run the ontology 
execute the runDb.sh script

-run the supervisor
execute the runSup.sh script

-give the robot a goal

execute the Tester.testPlan @goal @parameters function
where @goal is the name of the goal to achieve (ex. CLEAN)
and @parameters is a lisp-list of the parameters of the goal
(ex. (. TABLE_4 .)


-creating a new domain

Detailed instructions for each step are contained in the files that
must be modified.

-Actions
Create a predicate for the action in the Action.db file 
Implement the new action in the ExecutionManager.opf file

-Planner
For each action used by a planner add the PlannerInterface.action
predicate in PlannerInterface.db

-Objects
Add the Object.type and edit the Object.$class predicates

If you create a new class of object add the Spark.typeMonitorSphere predicate in
Spark.db  and 

If you create a new type of object add the Spark.sphereParameter
predicate in Spark.db

each object, add in the file Acapela.db the Acapela.translation predicate.
