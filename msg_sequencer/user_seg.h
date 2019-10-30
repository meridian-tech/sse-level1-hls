#include "seg.h"
typedef unsigned int uint;

struct std_template {
  uint security_id   ;//(11)   12
  uint stream_id     ;//(6 )   8
  uint symbol        ;//(21)   24
  uint ip_info       ;//(4 )   4
  uint tradingday    ;//(4 )   4
  uint update_time   ;//(4 )   4
  uint update_ms     ;//(4 )   4
  uint nanosec       ;//(8 )   8
  uint last          ;//(4 )   4
  uint volume        ;//(8 )   8
  uint turnover      ;//(8 )   8
  uint open_interest ;//(8 )   8
  uint bid_vol_1     ;//(4 )   4
  uint ask_vol_1     ;//(4 )   4
  uint bid_price_1   ;//(4 )   4
  uint ask_price_1   ;//(4 )   4
  uint bid_vol_2     ;//(4 )   4
  uint ask_vol_2     ;//(4 )   4
  uint bid_price_2   ;//(4 )   4
  uint ask_price_2   ;//(4 )   4
  uint bid_vol_3     ;//(4 )   4
  uint ask_vol_3     ;//(4 )   4
  uint bid_price_3   ;//(4 )   4
  uint ask_price_3   ;//(4 )   4
  uint bid_vol_4     ;//(4 )   4
  uint ask_vol_4     ;//(4 )   4
  uint bid_price_4   ;//(4 )   4
  uint ask_price_4   ;//(4 )   4
  uint bid_vol_5     ;//(4 )   4
  uint ask_vol_5     ;//(4 )   4
  uint bid_price_5   ;//(4 )   4
  uint ask_price_5   ;//(4 )   4
  uint send_hms      ;//(4 )   4
  uint send_ms       ;//(4 )   4
  uint md_hms        ;//(4 )   4
  uint md_ms         ;//(4 )   4
  uint num_trade     ;//(8 )   8
  uint pre_close     ;//(4 )   4
  uint pre_settle    ;//(4 )   4
  uint open_price    ;//(4 )   4
  uint close_price   ;//(4 )   4
  uint settlement    ;//(4 )   4
  uint highest_price ;//(4 )   4
  uint lowest_price  ;//(4 )   4
  uint auction_price ;//(4 )   4
  uint exp_val1      ;//(4 )   4
  uint exp_val2      ;//(4 )   4
  uint src_ip        ;//(4 )   4
  uint port          ;//(4 )   4
  uint det_ip        ;//(4 )   4
  uint msg_sqenum    ;//(4 )   4
};

struct user_seg {
  uint seg[ISEG_LEN];
};

void user_seg_mini_init(int seg_mini[]);
void template_seg_init(struct std_template *template_seg);
int  user_seg_init(struct std_template *template_seg, struct user_seg *user_seg);
void user_seg_out(struct user_seg *seg_in, int seg_out[]);
void user_seg_fmt_out(FILE * fp, int user_seg[]);
