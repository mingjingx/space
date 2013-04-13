.PHONY: clean debug
 
CC      := g++
CCFLAGS := -c -g -std=c++0x 
SRC     := lock_guard.cpp timed_mutex.cpp call_once.cpp
OBJS    := $(SRC:.cpp=.o)
BIN     := $(SRC:.cpp=)
LIBS    := -lpthread

all:  $(BIN)

lock_guard:lock_guard.o
	$(CC) -o $@ lock_guard.o $(LIBS)
timed_mutex:timed_mutex.o
	$(CC) -o $@ timed_mutex.o $(LIBS)
call_once:call_once.o
	$(CC) -o $@ call_once.o $(LIBS)
<<<<<<< HEAD
#@echo "\$$@=$@"
#@echo "\$$^=$^"

%.o: %.cpp 
	$(CC) -o $@ $(CCFLAGS) $^
clean: 
	rm $(BIN) $(OBJS)
=======
%.o: %.cpp 
	$(CC) -o $@ $(CCFLAGS) $^
clean: 
	rm $(BIN) 
>>>>>>> 30f636da2c05447e32f6e488b1c965baf6d06c45
debug:
	@echo "BIN=$(BIN)"
	@echo "OBJS=$(OBJS)"
