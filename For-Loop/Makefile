CC:=gcc
CFLAGS:=-I. -O2
LDLIBS:=-lm

a:=$(wildcard *.c)
dests:=$(a:%.c=%)

.PHONY: all

all: ${dests}

test: $
	echo $<
	echo $@
	echo $(dests)

clean:
	rm -f ${dests} *.o

