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
	./cfunge

.PHONY: clean run

all: cfunge

# end
