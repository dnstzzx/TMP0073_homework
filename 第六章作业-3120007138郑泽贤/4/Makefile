src = $(wildcard *.c)
linux_target = $(patsubst %.c, %, ${src})
win_target = $(patsubst %.c, %.exe, ${src})

.PHONY: all clean run

%:%.c
	gcc -lm -o $@ $^
%.exe:%.c
	x86_64-w64-mingw32-gcc -lm -fexec-charset=gbk -o $@ $^

all: ${linux_target} ${win_target}

run: all
	./main

clean:
	rm -f ${linux_target} ${win_target}