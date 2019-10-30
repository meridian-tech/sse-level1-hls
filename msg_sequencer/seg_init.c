#include <stdio.h>
#include "user_seg.h"

void template_seg_init(struct std_template *template_seg)
{
  template_seg->stream_id     = STREAM_ID     ;
  template_seg->security_id   = SECURITY_ID   ;
  template_seg->symbol        = SYMBOL        ;
  template_seg->ip_info       = IP_INFO       ;
  template_seg->tradingday    = TRADINGDAY    ;
  template_seg->update_time   = UPDATE_TIME   ;
  template_seg->update_ms     = UPDATE_MS     ;
  template_seg->nanosec       = NANOSEC       ;
  template_seg->last          = LAST          ;
  template_seg->volume        = VOLUME        ;
  template_seg->turnover      = TURNOVER      ;
  template_seg->open_interest = OPEN_INTEREST ;
  template_seg->bid_vol_1     = BID_VOL_1     ;
  template_seg->ask_vol_1     = ASK_VOL_1     ;
  template_seg->bid_price_1   = BID_PRICE_1   ;
  template_seg->ask_price_1   = ASK_PRICE_1   ;
  template_seg->bid_vol_2     = BID_VOL_2     ;
  template_seg->ask_vol_2     = ASK_VOL_2     ;
  template_seg->bid_price_2   = BID_PRICE_2   ;
  template_seg->ask_price_2   = ASK_PRICE_2   ;
  template_seg->bid_vol_3     = BID_VOL_3     ;
  template_seg->ask_vol_3     = ASK_VOL_3     ;
  template_seg->bid_price_3   = BID_PRICE_3   ;
  template_seg->ask_price_3   = ASK_PRICE_3   ;
  template_seg->bid_vol_4     = BID_VOL_4     ;
  template_seg->ask_vol_4     = ASK_VOL_4     ;
  template_seg->bid_price_4   = BID_PRICE_4   ;
  template_seg->ask_price_4   = ASK_PRICE_4   ;
  template_seg->bid_vol_5     = BID_VOL_5     ;
  template_seg->ask_vol_5     = ASK_VOL_5     ;
  template_seg->bid_price_5   = BID_PRICE_5   ;
  template_seg->ask_price_5   = ASK_PRICE_5   ;
  template_seg->send_hms      = SEND_HMS      ;
  template_seg->send_ms       = SEND_MS       ;
  template_seg->md_hms        = MD_HMS        ;
  template_seg->md_ms         = MD_MS         ;
  template_seg->num_trade     = NUM_TRADE     ;
  template_seg->pre_close     = PRE_CLOSE     ;
  template_seg->pre_settle    = PRE_SETTLE    ;
  template_seg->open_price    = OPEN_PRICE    ;
  template_seg->close_price   = CLOSE_PRICE   ;
  template_seg->settlement    = SETTLEMENT    ;
  template_seg->highest_price = HIGHEST_PRICE ;
  template_seg->lowest_price  = LOWEST_PRICE  ;
  template_seg->auction_price = AUCTION_PRICE ;
  template_seg->exp_val1      = EXP_VAL1      ;
  template_seg->exp_val2      = EXP_VAL2      ;
  template_seg->src_ip        = SRC_IP        ;
  template_seg->port          = PORT          ;
  template_seg->det_ip        = DET_IP        ;
  template_seg->msg_sqenum    = MSG_SQENUM    ;
}

void user_seg_mini_init(int seg_mini[]) {
  seg_mini[0]  = SEG_MINI_STREAM_ID0    ;
  seg_mini[1]  = SEG_MINI_STREAM_ID1    ;
  seg_mini[2]  = SEG_MINI_SECURITY_ID0  ;
  seg_mini[3]  = SEG_MINI_SECURITY_ID1  ;
  seg_mini[4]  = SEG_MINI_SECURITY_ID2  ;
  seg_mini[5]  = SEG_MINI_SYMBOL0       ;
  seg_mini[6]  = SEG_MINI_SYMBOL1       ;
  seg_mini[7]  = SEG_MINI_SYMBOL2       ;
  seg_mini[8]  = SEG_MINI_SYMBOL3       ;
  seg_mini[9]  = SEG_MINI_SYMBOL4       ;
  seg_mini[10] = SEG_MINI_SYMBOL5       ;
  seg_mini[11] = SEG_MINI_IP_INFO       ;
  seg_mini[12] = SEG_MINI_TRADINGDAY    ;
  seg_mini[13] = SEG_MINI_UPDATE_TIME   ;
  seg_mini[14] = SEG_MINI_UPDATE_MS     ;
  seg_mini[15] = SEG_MINI_NANOSEC0      ;
  seg_mini[16] = SEG_MINI_NANOSEC1      ;
  seg_mini[17] = SEG_MINI_LAST          ;
  seg_mini[18] = SEG_MINI_VOLUME0       ;
  seg_mini[19] = SEG_MINI_VOLUME1       ;
  seg_mini[20] = SEG_MINI_TURNOVER0     ;
  seg_mini[21] = SEG_MINI_TURNOVER1     ;
  seg_mini[22] = SEG_MINI_OPEN_INTEREST0;
  seg_mini[23] = SEG_MINI_OPEN_INTEREST1;
  seg_mini[24] = SEG_MINI_BID_VOL_1     ;
  seg_mini[25] = SEG_MINI_ASK_VOL_1     ;
  seg_mini[26] = SEG_MINI_BID_PRICE_1   ;
  seg_mini[27] = SEG_MINI_ASK_PRICE_1   ;
  seg_mini[28] = SEG_MINI_BID_VOL_2     ;
  seg_mini[29] = SEG_MINI_ASK_VOL_2     ;
  seg_mini[30] = SEG_MINI_BID_PRICE_2   ;
  seg_mini[31] = SEG_MINI_ASK_PRICE_2   ;
  seg_mini[32] = SEG_MINI_BID_VOL_3     ;
  seg_mini[33] = SEG_MINI_ASK_VOL_3     ;
  seg_mini[34] = SEG_MINI_BID_PRICE_3   ;
  seg_mini[35] = SEG_MINI_ASK_PRICE_3   ;
  seg_mini[36] = SEG_MINI_BID_VOL_4     ;
  seg_mini[37] = SEG_MINI_ASK_VOL_4     ;
  seg_mini[38] = SEG_MINI_BID_PRICE_4   ;
  seg_mini[39] = SEG_MINI_ASK_PRICE_4   ;
  seg_mini[40] = SEG_MINI_BID_VOL_5     ;
  seg_mini[41] = SEG_MINI_ASK_VOL_5     ;
  seg_mini[42] = SEG_MINI_BID_PRICE_5   ;
  seg_mini[43] = SEG_MINI_ASK_PRICE_5   ;
  seg_mini[44] = SEG_MINI_SEND_HMS      ;
  seg_mini[45] = SEG_MINI_SEND_MS       ;
  seg_mini[46] = SEG_MINI_MD_HMS        ;
  seg_mini[47] = SEG_MINI_MD_MS         ;
  seg_mini[48] = SEG_MINI_NUM_TRADE0    ;
  seg_mini[49] = SEG_MINI_NUM_TRADE1    ;
  seg_mini[50] = SEG_MINI_PRE_CLOSE     ;
  seg_mini[51] = SEG_MINI_PRE_SETTLE    ;
  seg_mini[52] = SEG_MINI_OPEN_PRICE    ;
  seg_mini[53] = SEG_MINI_CLOSE_PRICE   ;
  seg_mini[54] = SEG_MINI_SETTLEMENT    ;
  seg_mini[55] = SEG_MINI_HIGHEST_PRICE ;
  seg_mini[56] = SEG_MINI_LOWEST_PRICE  ;
  seg_mini[57] = SEG_MINI_AUCTION_PRICE ;
  seg_mini[58] = SEG_MINI_EXP_VAL1      ;
  seg_mini[59] = SEG_MINI_EXP_VAL2      ;
  seg_mini[60] = SEG_MINI_SRC_IP        ;
  seg_mini[61] = SEG_MINI_PORT          ;
  seg_mini[62] = SEG_MINI_DET_IP        ;
  seg_mini[63] = SEG_MINI_MSG_SQENUM    ;
}

void user_seg_out(struct user_seg *seg_in, int seg_out[])
{
    int i;
    for (i=0; i<ISEG_LEN; i++) {
        seg_out[i] = seg_in->seg[i];
    }
}

void user_seg_fmt_out(FILE * fp, int user_seg[])
{
  int i;
  fprintf(fp, "%s %s\n", "struct", "segfmt{");
    for (i=0; i<ISEG_LEN; i++) {
    switch(user_seg[i]) {
      case STREAM_ID :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "stream_id[2]", ';');
        break;
      case SECURITY_ID :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "security_id[3]", ';');
        break;
      case SYMBOL :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "symbol[6]", ';');
        break;
      case IP_INFO :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ip_info", ';');
        break;
      case TRADINGDAY :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "tradingday", ';');
        break;
      case UPDATE_TIME :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "update_time", ';');
        break;
      case UPDATE_MS :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "update_ms", ';');
        break;
      case NANOSEC :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "nanosec", ';');
        break;
      case LAST :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "last", ';');
        break;
      case VOLUME :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "volume[2]", ';');
        break;
      case TURNOVER :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "turnover[2]", ';');
        break;
      case OPEN_INTEREST :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "open_interest[2]", ';');
        break;
      case BID_VOL_1 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_vol_1", ';');
        break;
      case ASK_VOL_1 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_vol_1", ';');
        break;
      case BID_PRICE_1 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_price_1", ';');
        break;
      case ASK_PRICE_1 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_price_1", ';');
        break;
      case BID_VOL_2 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_vol_2", ';');
        break;
      case ASK_VOL_2 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_vol_2", ';');
        break;
      case BID_PRICE_2 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_price_2", ';');
        break;
      case ASK_PRICE_2 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_price_2", ';');
        break;
      case BID_PRICE_3 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_price_3", ';');
        break;
      case BID_VOL_3 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_vol_3", ';');
        break;
      case ASK_VOL_3 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_vol_3", ';');
        break;
      case ASK_PRICE_3 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_price_3", ';');
        break;
      case BID_VOL_4 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_vol_4", ';');
        break;
      case ASK_VOL_4 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_vol_4", ';');
        break;
      case BID_PRICE_4 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_price_4", ';');
        break;
      case ASK_PRICE_4 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_price_4", ';');
        break;
      case BID_VOL_5 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_vol_5", ';');
        break;
      case ASK_VOL_5 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_vol_5", ';');
        break;
      case BID_PRICE_5 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "bid_price_5", ';');
        break;
      case ASK_PRICE_5 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "ask_price_5", ';');
        break;
      case SEND_HMS :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "send_hms", ';');
        break;
      case SEND_MS :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "send_ms", ';');
        break;
      case MD_HMS :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "md_hms", ';');
        break;
      case MD_MS :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "md_ms", ';');
        break;
      case NUM_TRADE :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "num_trade[2]", ';');
        break;
      case PRE_CLOSE :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "pre_close", ';');
        break;
      case PRE_SETTLE :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "pre_settle", ';');
        break;
      case OPEN_PRICE :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "open_price", ';');
        break;
      case CLOSE_PRICE :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "close_price", ';');
        break;
      case SETTLEMENT :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "settlement", ';');
        break;
      case HIGHEST_PRICE :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "highest_price", ';');
        break;
      case LOWEST_PRICE :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "lowest_price", ';');
        break;
      case AUCTION_PRICE :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "auction_price", ';');
        break;
      case EXP_VAL1 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "exp_val1", ';');
        break;
      case EXP_VAL2 :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "exp_val2", ';');
        break;
      case SRC_IP :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "src_ip", ';');
        break;
      case PORT :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "port", ';');
        break;
      case DET_IP :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "det_ip", ';');
        break;
      case MSG_SQENUM :
        fprintf(fp, "%s %s    %-20s %c\n", "unsigned", "int", "msg_sqenum", ';');
        break;
      default :
          fprintf(fp, "%s , input value is %d", "ERR", user_seg[i]);
        break;
    }
    }
  fprintf(fp, "%c %c\n", '}', ';');
}
