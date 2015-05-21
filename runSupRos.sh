#!/bin/bash

export OPRS_DATA_PATH=${OPRS_DATA_PATH}:"."

xoprs OPRS_SUP -x ./supervisor/mainPr2.inc
