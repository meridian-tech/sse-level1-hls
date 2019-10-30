#!/bin/sh

WORK_PATH=/tmp/sse-level1-hls

cd ${WORK_PATH}/msg_sequencer
make clean
make
./user_seg_gen

cd ${WORK_PATH}/hls
vivado_hls -f run_hls.tcl

mkdir -p ${WORK_PATH}/rtl_output/
cp ${WORK_PATH}/hls/hls_prj/solution1/syn/verilog/hls_top.v ${WORK_PATH}/rtl_output/
