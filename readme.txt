目录说明
1 user_def
  用户数据目录，
  用户需要在该目录下usr_seg.c中按照需求修改字段顺序
  字段初始化后，会在该目录下生成用于用户使用的字段结构体定义文件

2 msg_sequencer
  放置输出字段格式初始化工具

3 hls
  hls目录，待字段格式初始化后，导入该目录下文件，
  使用vivado_hls进行C to RTL综合


使用说明
1 进入user_def目录
  按照需求修改（或保持）字段定义
  例如
  user_seg->seg[0]  = template_seg->stream_id     ;
  user_seg->seg[1]  = template_seg->security_id   ;
  表示第0字段为stream_id，
  第1字段为security_id

  修改字段为
  user_seg->seg[0]  = template_seg->security_id   ;
  user_seg->seg[1]  = template_seg->stream_id     ;
  表示第0字段为security_id，
  第1字段为stream_id

  以此类推

2 进入sse-level1-hls目录
  修改run_all.sh中的WORK_PATH到当前路径
  执行run_all.sh
  会自动完成所有的编译，生成的RTL代码输出到rtl_output文件夹下
