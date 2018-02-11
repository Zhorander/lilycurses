all: lily_curses lcurses

lcurses:
	gcc -shared -o $@.so lily_curses.o -lcurses

lily_curses:
	gcc -c -g -Wall -fpic -Werror -llily $@.c

