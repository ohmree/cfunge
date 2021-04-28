##
# cfunge
#
# @file
# @version 0.1

CFLAGS += -Og -ggdb -Wall -Wpedantic -std=c99

cfunge: cfunge.o stack.o
	$(CC) -o cfunge cfunge.o stack.o $(CFLAGS) $(LDFLAGS)

clean:
	rm cfunge *.o

run: cfunge
	./cfunge

.PHONY: clean run

all: cfunge

# end
