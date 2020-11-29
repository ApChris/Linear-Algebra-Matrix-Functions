OBJS = 	build/main.o \
		build/functions.o \

CC = g++
FLAGS = -Wextra -g -c

TARGET = main

all:  $(TARGET)

clean:
	$(RM) -r  $(TARGET) build/*


build/main.o: src/main.cpp
	$(CC) $(FLAGS) $< -o $@

build/functions.o: src/functions.cpp
	$(CC) $(FLAGS) $< -o $@

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -lm


rebuild: clean all
