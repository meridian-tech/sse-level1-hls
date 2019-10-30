#ifndef __HLS_TOP_H__
#define __HLS_TOP_H__
#define DATA_BYTES 256
#define BRAM_WIDTH 4
#define DATA_OUT_WIDTH (BRAM_WIDTH*2)
#define DATA_NUM (DATA_BYTES/BRAM_WIDTH)
#define DATA_OUT_NUM (DATA_BYTES/DATA_OUT_WIDTH)
void hls_top(int in[DATA_NUM], long out[DATA_OUT_NUM]);
#endif
