#!/bin/bash    

h2 clean OPRS_DBR
export OPRS_DATA_PATH=${OPRS_DATA_PATH}:"."


xoprs OPRS_DB -x ./database/Db.inc #-x  ${ROBOTPKG_BASE}/share/superv/translink-superv.inc
