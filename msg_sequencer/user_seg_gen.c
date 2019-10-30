/*
*   user seg idx gen
*/
#include <stdio.h>
#include <stdlib.h>
#include "user_seg.h"

int main(void)
{
    int i;
    int j = 0;
    int ret = 0;
    int seg_mini_offset = 0;
    int idx_out[OSEG_LEN];
    FILE * fp = NULL;
    FILE * fp_user_fmt = NULL;
    struct std_template *mseg = NULL;
    struct user_seg *useg = NULL;
    int user_seg_input[ISEG_LEN] = {0};
    int user_seg_mini[OSEG_LEN] = {0};

    user_seg_mini_init(user_seg_mini);

    mseg = (struct std_template *)malloc(sizeof(struct std_template));
    if (mseg == NULL) {
        printf("Malloc mseg mem failed!\n");
        goto failed;
    }
    useg = (struct user_seg *)malloc(sizeof(struct user_seg));
    if (useg == NULL) {
        printf("Malloc useg mem failed!\n");
        goto failed;
    }

  /*Initial standard template segment infomation*/
    template_seg_init(mseg);
    ret = user_seg_init(mseg, useg);
    if (ret) {
        printf("User seg initial failed!\n");
        goto failed;
    }

  /*Generate user segement infomation*/
    user_seg_out(useg, user_seg_input);
  for (i=0; i<ISEG_LEN; i++) {
    }
  /*Output user fomat seg head file*/
    fp_user_fmt = fopen ("../user_def/user_seg_fmt.h", "w+");
  user_seg_fmt_out(fp_user_fmt, user_seg_input);
  fclose(fp_user_fmt);

    //
  for (i=0; i<ISEG_LEN; i++) {

        if (user_seg_input[i] == STREAM_ID) {
            idx_out[j]   = user_seg_mini[SEG_MINI_STREAM_ID0];
            idx_out[j+1] = user_seg_mini[SEG_MINI_STREAM_ID1];
            j = j + 2;
      continue ;
        }


        if (user_seg_input[i] == SECURITY_ID) {
            idx_out[j]   = user_seg_mini[SEG_MINI_SECURITY_ID0];
            idx_out[j+1] = user_seg_mini[SEG_MINI_SECURITY_ID1];
            idx_out[j+2] = user_seg_mini[SEG_MINI_SECURITY_ID2];
            j = j + 3;
      continue ;
        }

        if (user_seg_input[i] == SYMBOL) {
            idx_out[j]   = user_seg_mini[SEG_MINI_SYMBOL0]  ;
            idx_out[j+1] = user_seg_mini[SEG_MINI_SYMBOL1];
            idx_out[j+2] = user_seg_mini[SEG_MINI_SYMBOL2];
            idx_out[j+3] = user_seg_mini[SEG_MINI_SYMBOL3];
            idx_out[j+4] = user_seg_mini[SEG_MINI_SYMBOL4];
            idx_out[j+5] = user_seg_mini[SEG_MINI_SYMBOL5];
            j = j + 6;
      continue ;
        }

        if (user_seg_input[i] == NANOSEC) {
            idx_out[j]   = user_seg_mini[SEG_MINI_NANOSEC0];
            idx_out[j+1] = user_seg_mini[SEG_MINI_NANOSEC1];
            j = j + 2;
      continue ;
        }

        if (user_seg_input[i] == VOLUME) {
            idx_out[j]   = user_seg_mini[SEG_MINI_VOLUME0];
            idx_out[j+1] = user_seg_mini[SEG_MINI_VOLUME1];
            j = j + 2;
      continue ;
        }

        if (user_seg_input[i] == TURNOVER) {
            idx_out[j]   = user_seg_mini[SEG_MINI_TURNOVER0];
            idx_out[j+1] = user_seg_mini[SEG_MINI_TURNOVER1];
            j = j + 2;
      continue ;
        }

        if (user_seg_input[i] == OPEN_INTEREST) {
            idx_out[j]   = user_seg_mini[SEG_MINI_OPEN_INTEREST0];
            idx_out[j+1] = user_seg_mini[SEG_MINI_OPEN_INTEREST1];
            j = j + 2;
      continue ;
        }

        if (user_seg_input[i] == NUM_TRADE) {
            idx_out[j]   = user_seg_mini[SEG_MINI_NUM_TRADE0];
            idx_out[j+1] = user_seg_mini[SEG_MINI_NUM_TRADE1];
            j = j + 2;
      continue ;
        }

    if ((user_seg_input[i] >= IP_INFO) && (user_seg_input[i] <= UPDATE_MS)) {
      seg_mini_offset = SEG_IP_INFO_DIS;
    }

        if (user_seg_input[i] == LAST) {
      seg_mini_offset = SEG_LAST_DIS;
    }

    if ((user_seg_input[i] >= BID_VOL_1) && (user_seg_input[i] <= MD_MS)) {
      seg_mini_offset = SEG_BID_VOL_1_DIS;
    }

    if ((user_seg_input[i] >= PRE_CLOSE) && (user_seg_input[i] <= MSG_SQENUM)) {
      seg_mini_offset = SEG_PRE_CLOSE_DIS;
    }

        idx_out[j] = user_seg_mini[user_seg_input[i] + seg_mini_offset];

        if (j < OSEG_LEN) {
            j = j + 1;
        }
    }

  for (i=0; i<OSEG_LEN; i++) {
        printf("%d %c\n", idx_out[i], ',');
    }


    fp = fopen ("../hls/src/user_seg_idx.h", "w+");
    fprintf(fp, "%s %s %d %c %c %c\n", "int", "user_seg_idx[", OSEG_LEN, ']', '=', '{');
    for (i=0; i<(OSEG_LEN-1); i++) {
        fprintf(fp, "%d %c\n", idx_out[i], ',');
    }
    fprintf(fp, "%d %c %c\n", idx_out[OSEG_LEN-1], '}', ';');
    fclose(fp);

    free(mseg);
    free(useg);
    return 0;

failed:
    if (mseg != NULL) {
        free(mseg);
    }

    if (useg != NULL) {
        free(useg);
    }

    return -1;
}
