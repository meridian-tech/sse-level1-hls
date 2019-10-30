#include <stdio.h>
#include "user_seg.h"

int user_seg_init(struct std_template *template_seg, struct user_seg *user_seg)
{   
    unsigned int sz_temp_segs;
    unsigned int sz_user_segs;
    sz_temp_segs = sizeof(struct std_template);
    sz_user_segs = sizeof(struct user_seg);
    if (sz_temp_segs != sz_user_segs) {
        printf("Input user_seg len is invalid!\n");
        return -1;
    }
    //
    	user_seg->seg[0]  = template_seg->stream_id     ;
	user_seg->seg[1]  = template_seg->security_id   ;
	user_seg->seg[2]  = template_seg->symbol        ;
	user_seg->seg[3]  = template_seg->ip_info       ;
	user_seg->seg[4]  = template_seg->tradingday    ;
	user_seg->seg[5]  = template_seg->update_time   ;
	user_seg->seg[6]  = template_seg->update_ms     ;
	user_seg->seg[7]  = template_seg->nanosec       ;
	user_seg->seg[8]  = template_seg->last          ;
	user_seg->seg[9]  = template_seg->volume        ;
	user_seg->seg[10] = template_seg->turnover     ;
	user_seg->seg[11] = template_seg->open_interest;
	user_seg->seg[12] = template_seg->bid_vol_1    ;
	user_seg->seg[13] = template_seg->ask_vol_1    ;
	user_seg->seg[14] = template_seg->bid_price_1  ;
	user_seg->seg[15] = template_seg->ask_price_1  ;
	user_seg->seg[16] = template_seg->bid_vol_2    ;
	user_seg->seg[17] = template_seg->ask_vol_2    ;
	user_seg->seg[18] = template_seg->bid_price_2  ;
	user_seg->seg[19] = template_seg->ask_price_2  ;
	user_seg->seg[20] = template_seg->bid_vol_3    ;
	user_seg->seg[21] = template_seg->ask_vol_3    ;
	user_seg->seg[22] = template_seg->bid_price_3  ;
	user_seg->seg[23] = template_seg->ask_price_3  ;
	user_seg->seg[24] = template_seg->bid_vol_4    ;
	user_seg->seg[25] = template_seg->ask_vol_4    ;
	user_seg->seg[26] = template_seg->bid_price_4  ;
	user_seg->seg[27] = template_seg->ask_price_4  ;
	user_seg->seg[28] = template_seg->bid_vol_5    ;
	user_seg->seg[29] = template_seg->ask_vol_5    ;
	user_seg->seg[30] = template_seg->bid_price_5  ;
	user_seg->seg[31] = template_seg->ask_price_5  ;
	user_seg->seg[32] = template_seg->send_hms     ;
	user_seg->seg[33] = template_seg->send_ms      ;
	user_seg->seg[34] = template_seg->md_hms       ;
	user_seg->seg[35] = template_seg->md_ms        ;
	user_seg->seg[36] = template_seg->num_trade    ;
	user_seg->seg[37] = template_seg->pre_close    ;
	user_seg->seg[38] = template_seg->pre_settle   ;
	user_seg->seg[39] = template_seg->open_price   ;
	user_seg->seg[40] = template_seg->close_price  ;
	user_seg->seg[41] = template_seg->settlement   ;
	user_seg->seg[42] = template_seg->highest_price;
	user_seg->seg[43] = template_seg->lowest_price ;
	user_seg->seg[44] = template_seg->auction_price;
	user_seg->seg[45] = template_seg->exp_val1     ;
	user_seg->seg[46] = template_seg->exp_val2     ;
	user_seg->seg[47] = template_seg->src_ip       ;
	user_seg->seg[48] = template_seg->port         ;
	user_seg->seg[49] = template_seg->det_ip       ;
	user_seg->seg[50] = template_seg->msg_sqenum   ;
    
    return 0;
}
