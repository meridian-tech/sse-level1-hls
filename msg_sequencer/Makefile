CC := gcc
TARGET := user_seg_gen
OBJ := user_seg_gen.o seg_init.o user_seg.o
HOST_CFLAGS := -I./ -I../user_def
HOST_CFLAGS += -Wall

USER_DEF_DIR := ../user_def
HLS_DIR := ../hls

.PHONY : all

all: $(TARGET)

$(TARGET) : $(OBJ)
	$(CC) -o $@ $(OBJ)

user_seg.o :
	${CC} ${HOST_CFLAGS} -c ${USER_DEF_DIR}/user_seg.c

%.o : %.c
	${CC} ${HOST_CFLAGS} -c $< -o $@
    
.PHONY : clean
clean :
	rm -rf *.o $(TARGET)
	rm -rf ${USER_DEF_DIR}/user_seg_fmt.h
	rm -rf ${HLS_DIR}/user_seg_idx.h

