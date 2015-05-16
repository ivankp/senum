CFLAGS := -Wall -O3

.PHONY: all clean

EXE := test

all: $(EXE)

$(EXE): %: %.cc
	@echo Compiling $@
	@g++ $(CFLAGS) $^ -o $@
	
test: senum.hh

clean:
	@rm -fv $(EXE)

