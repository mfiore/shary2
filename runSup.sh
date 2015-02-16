#!/bin/bash    

h2 clean OPRS_SUPR

export OPRS_DATA_PATH=${OPRS_DATA_PATH}:"."

xoprs OPRS_SUP -x ./supervisor/mainPr2.inc  -x ${OPRSGENOM} #-x ${OPRS_ACAPELA_PATH}
