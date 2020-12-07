CC:=gcc
CFLAGS:=-I. -O2
LDLIBS:=-lm

a:=$(wildcard *.c)
dests:=$(a:%.c=%)

.PHONY: all

%.o: %.c
	${CC} ${CFLAGS} -c -o $@ $<

%: %.o
	${CC} ${CFLAGS} -o $@ $<

all: ${dests}

clean:
	rm ${dests} *.o

