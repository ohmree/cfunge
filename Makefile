##
# cfunge
#
# @file
# @version 0.1

NAME := cfunge
CFLAGS += -Og -ggdb -Wall -Wpedantic -std=c11

$(NAME): cfunge.o stack.o grid.o
	$(CC) -o $(NAME) $^ $(CFLAGS) $(LDFLAGS)

clean:
	rm cfunge *.o

run: cfunge
	./$<

valgrind: cfunge
	valgrind ./$<

all: cfunge

.PHONY: clean run valgrind

# end
