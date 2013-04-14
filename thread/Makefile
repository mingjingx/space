.PHONY: clean debug
 
CC      := g++
CCFLAGS := -c -g -std=c++0x 
SRC     := lock_guard.cpp timed_mutex.cpp call_once.cpp
OBJS    := $(SRC:.cpp=.o)
LIBS    := -lpthread
BIN     := $(SRC:.cpp=.out)

all:  $(BIN)

%.out: %.o
	$(CC) -o $@ $^ $(LIBS)
%.o: %.cpp 
	$(CC) -o $@ $(CCFLAGS) $^
clean: 
	rm $(BIN) $(OBJS)
debug:
	@echo "BIN=$(BIN)"
	@echo "OBJS=$(OBJS)"
