######################################
#
######################################
#source file
#源文件，自动找所有.c和.cpp文件，并将目标定义为同名.o文件
SOURCE  := $(wildcard *.c) $(wildcard *.cpp)
OBJS    := $(patsubst %.c,%.o,$(patsubst %.cpp,%.o,$(SOURCE)))

#target you can change test to what you want
#目标文件名，输入任意你想要的执行文件名
TARGET  := a.exe

#compile and lib parameter
#编译参数
CC      := g++
LIBS    :=
LDFLAGS := -lopengl32 -lglew32.dll -lfreeglut.dll -lglfw3.dll -lassimp.dll -lSOIL
DEFINES :=
INCLUDE := -I.
CFLAGS  := -g -Wall -Wno-unused -O3 -std=c++17 -fpermissive $(DEFINES) $(INCLUDE)
CXXFLAGS:= $(CFLAGS)


#i think you should do anything here
#下面的基本上不需要做任何改动了
.PHONY : everything objs clean veryclean rebuild

everything : $(TARGET)

all : $(TARGET)

objs : $(OBJS)

rebuild: veryclean everything

clean :
	del  *.o *.d

veryclean : clean
	del  $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CXXFLAGS) -o $@ $(OBJS) $(LDFLAGS) $(LIBS)