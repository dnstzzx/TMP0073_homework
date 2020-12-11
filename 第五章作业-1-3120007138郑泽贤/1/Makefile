src = $(wildcard *.c)
linux_target = $(patsubst %.c, %, ${src})
win_target = $(patsubst %.c, %.exe, ${src})

.PHONY: all clean run

%:%.c
	gcc -o $@ $^
%.exe:%.c
	x86_64-w64-mingw32-gcc -fexec-charset=gbk -o $@ $^

all: ${linux_target} ${win_target}

run: all
	./main

clean:
	rm -f ${linux_target} ${win_target}