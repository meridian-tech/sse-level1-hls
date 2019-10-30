/**********************************\
*   define seg length
*   Must be aligned to 4 bytes
\**********************************/

#define ISEG_LEN 51
#define OSEG_LEN 64
/*Define mini segment to initial segment distance*/
#define CONTINUE_LEN_STREAM_START       (2+3+6 )
#define CONTINUE_STREAM_SEG_NUM         3
#define CONTINUE_LEN_NANOSEC_START      2
#define CONTINUE_NANOSEC_SEG_NUM        1
#define CONTINUE_LEN_VOL_START          (2+2+2)
#define CONTINUE_VOL_SEG_NUM            3
#define CONTINUE_LEN_NUTRADE_START      2
#define CONTINUE_NUTRADE_SEG_NUM        1

#define SEG_IP_INFO_DIS     (CONTINUE_LEN_STREAM_START - CONTINUE_STREAM_SEG_NUM)
#define SEG_LAST_DIS        (SEG_IP_INFO_DIS + CONTINUE_LEN_NANOSEC_START - CONTINUE_NANOSEC_SEG_NUM)
#define SEG_BID_VOL_1_DIS   (SEG_LAST_DIS + CONTINUE_LEN_VOL_START - CONTINUE_VOL_SEG_NUM)
#define SEG_PRE_CLOSE_DIS   (SEG_BID_VOL_1_DIS + CONTINUE_LEN_NUTRADE_START - CONTINUE_NUTRADE_SEG_NUM)

enum SEG{
    STREAM_ID     ,//(6 )   8   
    SECURITY_ID   ,//(11)   12  
    SYMBOL        ,//(21)   24  
    IP_INFO       ,//(4 )   4   
    TRADINGDAY    ,//(4 )   4   
    UPDATE_TIME   ,//(4 )   4   
    UPDATE_MS     ,//(4 )   4   
    NANOSEC       ,//(8 )   8   
    LAST          ,//(4 )   4   
    VOLUME        ,//(8 )   8   
    TURNOVER      ,//(8 )   8   
    OPEN_INTEREST ,//(8 )   8   
    BID_VOL_1     ,//(4 )   4   
    ASK_VOL_1     ,//(4 )   4   
    BID_PRICE_1   ,//(4 )   4   
    ASK_PRICE_1   ,//(4 )   4   
    BID_VOL_2     ,//(4 )   4   
    ASK_VOL_2     ,//(4 )   4   
    BID_PRICE_2   ,//(4 )   4   
    ASK_PRICE_2   ,//(4 )   4   
    BID_VOL_3     ,//(4 )   4   
    ASK_VOL_3     ,//(4 )   4   
    BID_PRICE_3   ,//(4 )   4   
    ASK_PRICE_3   ,//(4 )   4   
    BID_VOL_4     ,//(4 )   4   
    ASK_VOL_4     ,//(4 )   4   
    BID_PRICE_4   ,//(4 )   4   
    ASK_PRICE_4   ,//(4 )   4   
    BID_VOL_5     ,//(4 )   4   
    ASK_VOL_5     ,//(4 )   4   
    BID_PRICE_5   ,//(4 )   4   
    ASK_PRICE_5   ,//(4 )   4   
    SEND_HMS      ,//(4 )   4   
    SEND_MS       ,//(4 )   4   
    MD_HMS        ,//(4 )   4   
    MD_MS         ,//(4 )   4   
    NUM_TRADE     ,//(8 )   8   
    PRE_CLOSE     ,//(4 )   4   
    PRE_SETTLE    ,//(4 )   4   
    OPEN_PRICE    ,//(4 )   4   
    CLOSE_PRICE   ,//(4 )   4   
    SETTLEMENT    ,//(4 )   4   
    HIGHEST_PRICE ,//(4 )   4   
    LOWEST_PRICE  ,//(4 )   4   
    AUCTION_PRICE ,//(4 )   4   
    EXP_VAL1      ,//(4 )   4   
    EXP_VAL2      ,//(4 )   4   
    SRC_IP        ,//(4 )   4   
    PORT          ,//(4 )   4   
    DET_IP        ,//(4 )   4   
    MSG_SQENUM     //(4 )   4   
};


enum SEG_MINI{
	SEG_MINI_STREAM_ID0    ,//8
    SEG_MINI_STREAM_ID1    ,  
    SEG_MINI_SECURITY_ID0  ,//12
    SEG_MINI_SECURITY_ID1  ,
    SEG_MINI_SECURITY_ID2  ,
    SEG_MINI_SYMBOL0       ,//24
    SEG_MINI_SYMBOL1       ,
    SEG_MINI_SYMBOL2       ,
    SEG_MINI_SYMBOL3       ,
    SEG_MINI_SYMBOL4       ,
    SEG_MINI_SYMBOL5       ,
    SEG_MINI_IP_INFO       ,//4 
    SEG_MINI_TRADINGDAY    ,//4 
    SEG_MINI_UPDATE_TIME   ,//4 
    SEG_MINI_UPDATE_MS     ,//4 
    SEG_MINI_NANOSEC0      ,//8
    SEG_MINI_NANOSEC1      ,
    SEG_MINI_LAST          ,//4 
    SEG_MINI_VOLUME0       ,//8
    SEG_MINI_VOLUME1       ,    
    SEG_MINI_TURNOVER0     ,//8
    SEG_MINI_TURNOVER1     ,    
    SEG_MINI_OPEN_INTEREST0,//8
    SEG_MINI_OPEN_INTEREST1,    
    SEG_MINI_BID_VOL_1     ,//4 
    SEG_MINI_ASK_VOL_1     ,//4 
    SEG_MINI_BID_PRICE_1   ,//4 
    SEG_MINI_ASK_PRICE_1   ,//4 
    SEG_MINI_BID_VOL_2     ,//4 
    SEG_MINI_ASK_VOL_2     ,//4 
    SEG_MINI_BID_PRICE_2   ,//4 
    SEG_MINI_ASK_PRICE_2   ,//4 
    SEG_MINI_BID_VOL_3     ,//4 
    SEG_MINI_ASK_VOL_3     ,//4 
    SEG_MINI_BID_PRICE_3   ,//4 
    SEG_MINI_ASK_PRICE_3   ,//4 
    SEG_MINI_BID_VOL_4     ,//4 
    SEG_MINI_ASK_VOL_4     ,//4 
    SEG_MINI_BID_PRICE_4   ,//4 
    SEG_MINI_ASK_PRICE_4   ,//4 
    SEG_MINI_BID_VOL_5     ,//4 
    SEG_MINI_ASK_VOL_5     ,//4 
    SEG_MINI_BID_PRICE_5   ,//4 
    SEG_MINI_ASK_PRICE_5   ,//4 
    SEG_MINI_SEND_HMS      ,//4 
    SEG_MINI_SEND_MS       ,//4 
    SEG_MINI_MD_HMS        ,//4 
    SEG_MINI_MD_MS         ,//4 
    SEG_MINI_NUM_TRADE0    ,//8 
    SEG_MINI_NUM_TRADE1    ,    
    SEG_MINI_PRE_CLOSE     ,//4 
    SEG_MINI_PRE_SETTLE    ,//4 
    SEG_MINI_OPEN_PRICE    ,//4 
    SEG_MINI_CLOSE_PRICE   ,//4 
    SEG_MINI_SETTLEMENT    ,//4 
    SEG_MINI_HIGHEST_PRICE ,//4 
    SEG_MINI_LOWEST_PRICE  ,//4 
    SEG_MINI_AUCTION_PRICE ,//4 
    SEG_MINI_EXP_VAL1      ,//4 
    SEG_MINI_EXP_VAL2      ,//4 
    SEG_MINI_SRC_IP        ,//4 
    SEG_MINI_PORT          ,//4 
    SEG_MINI_DET_IP        ,//4 
    SEG_MINI_MSG_SQENUM    ,//4
};                          //64X4 B