open_project hls_prj
set_top hls_top
add_files ./src/hls_top.cpp
add_files ./src/hls_top.h
add_files ./src/user_seg_idx.h
open_solution "solution1"
set_part {xcvu9p-flga2104-2l-e} -tool vivado
create_clock -period 6.2 -name default
csynth_design
quit
