CFLAGS := -Wall -O3

.PHONY: all clean

EXE := test

all: $(EXE)

$(EXE): %: %.cc
	@echo Compiling $@
	@g++ $(CFLAGS) $^ -o $@
	
test: enum_str.hh

clean:
	@rm -fv $(EXE)

