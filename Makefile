##
# cfunge
#
# @file
# @version 0.1

CFLAGS += -Og -ggdb

cfunge: cfunge.o
	$(CC) -o cfunge cfunge.o $(CFLAGS) $(LDFLAGS)

clean:
	rm cfunge

.PHONY: clean

# end
