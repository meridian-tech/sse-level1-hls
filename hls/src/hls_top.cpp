#include <stdio.h>
#include "hls_top.h"
#include "user_seg_idx.h"

void hls_top(unsigned int in[DATA_NUM],unsigned long int out[DATA_OUT_NUM]){
	int width_chk = 0;
	width_chk = ((DATA_NUM / DATA_OUT_NUM) == 2) && ((DATA_NUM % DATA_OUT_NUM) == 0);
	if (!width_chk) {
		printf(" Data width Error!");
		return;
	}

#pragma HLS INTERFACE ap_fifo port=out
#pragma HLS INTERFACE ap_memory latency=2 port=in

	for(int i=0;i<DATA_OUT_NUM;i++){
#pragma HLS UNROLL
		out[i]= ((unsigned long int)in[user_seg_idx[2*i]]<<32) | ((unsigned long int)in[user_seg_idx[2*i+1]]);
	}
}
