/*
 * MIT License
 * Copyright (c) 2018 Elias Flores
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * LilyCurses
 * Ncurses bindings for the lily programming language
 *
 * Author: Elias Flores
 * Date: Feburary 2018
 * Email: elias_50@live.com
 *
 * Feel free to modify and redistribute
 * */

#include <lily/lily.h>
#include <ncurses.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h> //for sleep function

/**
library lcurses

NCurses bindings.
*/

/** TODO
 *
 * arg checking (lily_check_args)
 */

/** Begin autogen section. **/
typedef struct lily_lcurses_Window_ {
    LILY_FOREIGN_HEADER
    WINDOW *win;
    int x;
    int y;
    int w;
    int h;
} lily_lcurses_Window;
#define ARG_Window(state, index) \
(lily_lcurses_Window *)lily_arg_generic(state, index)
#define ID_Window(state) lily_cid_at(state, 0)
#define INIT_Window(state)\
(lily_lcurses_Window *) lily_push_foreign(state, ID_Window(state), (lily_destroy_func)destroy_Window, sizeof(lily_lcurses_Window))

const char *lily_lcurses_table[] = {
    "\01Window\0"
    ,"C\025Window\0"
    ,"m\0<new>\0(Integer,Integer,Integer,Integer,*Boolean): Window"
    ,"m\0refresh\0(Window): Integer"
    ,"m\0print\0(Window,String): Integer"
    ,"m\0mvprint\0(Window,Integer,Integer,String): Integer"
    ,"m\0addch\0(Window,Byte): Integer"
    ,"m\0mvaddch\0(Window,Integer,Integer,Byte): Integer"
    ,"m\0getmaxyx\0(Window): Tuple[Integer,Integer]"
    ,"m\0border\0(Window,Integer,Integer,Integer,Integer,Integer,Integer,Integer,Integer): Integer"
    ,"m\0attron\0(Window,Integer): Integer"
    ,"m\0attroff\0(Window,Integer): Integer"
    ,"m\0attrset\0(Window,Integer): Integer"
    ,"m\0getyx\0(Window): Tuple[Integer,Integer]"
    ,"m\0clear\0(Window): Integer"
    ,"m\0erase\0(Window): Integer"
    ,"m\0clrtoeol\0(Window): Integer"
    ,"m\0getstr\0(Window,*Integer): String"
    ,"m\0mvgetstr\0(Window,*Integer): String"
    ,"m\0keypad\0(Window,Boolean)"
    ,"m\0getch\0(Window): Byte"
    ,"m\0mvgetch\0(Window): Byte"
    ,"m\0stdscr\0(Window)"
    ,"F\0initscr\0"
    ,"F\0endwin\0: Integer"
    ,"F\0raw\0: Integer"
    ,"F\0cbreak\0: Integer"
    ,"F\0nocbreak\0: Integer"
    ,"F\0echo\0: Integer"
    ,"F\0noecho\0"
    ,"F\0halfdelay\0(Integer)"
    ,"F\0COLS\0: Integer"
    ,"F\0LINES\0: Integer"
    ,"F\0COLOR_PAIR\0(Integer): Integer"
    ,"F\0start_color\0: Integer"
    ,"F\0has_colors\0: Boolean"
    ,"F\0can_change_color\0: Boolean"
    ,"F\0init_pair\0(Integer,Integer,Integer): Integer"
    ,"F\0init_color\0(Integer,Integer,Integer,Integer): Integer"
    ,"F\0color_content\0(Integer): Tuple[Integer,Integer,Integer]"
    ,"F\0curs_set\0(Boolean): Integer"
    ,"F\0sleep\0(Integer)"
    ,"R\0KEY_LEFT\0Byte"
    ,"R\0KEY_RIGHT\0Byte"
    ,"R\0KEY_UP\0Byte"
    ,"R\0KEY_DOWN\0Byte"
    ,"R\0COLOR_RED\0Integer"
    ,"R\0COLOR_BLACK\0Integer"
    ,"R\0COLOR_GREEN\0Integer"
    ,"R\0COLOR_YELLOW\0Integer"
    ,"R\0COLOR_BLUE\0Integer"
    ,"R\0COLOR_MAGENTA\0Integer"
    ,"R\0COLOR_CYAN\0Integer"
    ,"R\0COLOR_WHITE\0Integer"
    ,"R\0A_BOLD\0Integer"
    ,"R\0A_UNDERLINE\0Integer"
    ,"R\0A_NORMAL\0Integer"
    ,"R\0A_STANDOUT\0Integer"
    ,"R\0A_BLINK\0Integer"
    ,"R\0A_REVERSE\0Integer"
    ,"R\0ERR\0Integer"
    ,"Z"
};
#define Window_OFFSET 1
#define toplevel_OFFSET 23
void lily_lcurses_Window_new(lily_state *);
void lily_lcurses_Window_refresh(lily_state *);
void lily_lcurses_Window_print(lily_state *);
void lily_lcurses_Window_mvprint(lily_state *);
void lily_lcurses_Window_addch(lily_state *);
void lily_lcurses_Window_mvaddch(lily_state *);
void lily_lcurses_Window_getmaxyx(lily_state *);
void lily_lcurses_Window_border(lily_state *);
void lily_lcurses_Window_attron(lily_state *);
void lily_lcurses_Window_attroff(lily_state *);
void lily_lcurses_Window_attrset(lily_state *);
void lily_lcurses_Window_getyx(lily_state *);
void lily_lcurses_Window_clear(lily_state *);
void lily_lcurses_Window_erase(lily_state *);
void lily_lcurses_Window_clrtoeol(lily_state *);
void lily_lcurses_Window_getstr(lily_state *);
void lily_lcurses_Window_mvgetstr(lily_state *);
void lily_lcurses_Window_keypad(lily_state *);
void lily_lcurses_Window_getch(lily_state *);
void lily_lcurses_Window_mvgetch(lily_state *);
void lily_lcurses_Window_stdscr(lily_state *);
void lily_lcurses__initscr(lily_state *);
void lily_lcurses__endwin(lily_state *);
void lily_lcurses__raw(lily_state *);
void lily_lcurses__cbreak(lily_state *);
void lily_lcurses__nocbreak(lily_state *);
void lily_lcurses__echo(lily_state *);
void lily_lcurses__noecho(lily_state *);
void lily_lcurses__halfdelay(lily_state *);
void lily_lcurses__COLS(lily_state *);
void lily_lcurses__LINES(lily_state *);
void lily_lcurses__COLOR_PAIR(lily_state *);
void lily_lcurses__start_color(lily_state *);
void lily_lcurses__has_colors(lily_state *);
void lily_lcurses__can_change_color(lily_state *);
void lily_lcurses__init_pair(lily_state *);
void lily_lcurses__init_color(lily_state *);
void lily_lcurses__color_content(lily_state *);
void lily_lcurses__curs_set(lily_state *);
void lily_lcurses__sleep(lily_state *);
void lily_lcurses_var_KEY_LEFT(lily_state *);
void lily_lcurses_var_KEY_RIGHT(lily_state *);
void lily_lcurses_var_KEY_UP(lily_state *);
void lily_lcurses_var_KEY_DOWN(lily_state *);
void lily_lcurses_var_COLOR_RED(lily_state *);
void lily_lcurses_var_COLOR_BLACK(lily_state *);
void lily_lcurses_var_COLOR_GREEN(lily_state *);
void lily_lcurses_var_COLOR_YELLOW(lily_state *);
void lily_lcurses_var_COLOR_BLUE(lily_state *);
void lily_lcurses_var_COLOR_MAGENTA(lily_state *);
void lily_lcurses_var_COLOR_CYAN(lily_state *);
void lily_lcurses_var_COLOR_WHITE(lily_state *);
void lily_lcurses_var_A_BOLD(lily_state *);
void lily_lcurses_var_A_UNDERLINE(lily_state *);
void lily_lcurses_var_A_NORMAL(lily_state *);
void lily_lcurses_var_A_STANDOUT(lily_state *);
void lily_lcurses_var_A_BLINK(lily_state *);
void lily_lcurses_var_A_REVERSE(lily_state *);
void lily_lcurses_var_ERR(lily_state *);
void *lily_lcurses_loader(lily_state *s, int id)
{
    switch (id) {
        case Window_OFFSET + 1: return lily_lcurses_Window_new;
        case Window_OFFSET + 2: return lily_lcurses_Window_refresh;
        case Window_OFFSET + 3: return lily_lcurses_Window_print;
        case Window_OFFSET + 4: return lily_lcurses_Window_mvprint;
        case Window_OFFSET + 5: return lily_lcurses_Window_addch;
        case Window_OFFSET + 6: return lily_lcurses_Window_mvaddch;
        case Window_OFFSET + 7: return lily_lcurses_Window_getmaxyx;
        case Window_OFFSET + 8: return lily_lcurses_Window_border;
        case Window_OFFSET + 9: return lily_lcurses_Window_attron;
        case Window_OFFSET + 10: return lily_lcurses_Window_attroff;
        case Window_OFFSET + 11: return lily_lcurses_Window_attrset;
        case Window_OFFSET + 12: return lily_lcurses_Window_getyx;
        case Window_OFFSET + 13: return lily_lcurses_Window_clear;
        case Window_OFFSET + 14: return lily_lcurses_Window_erase;
        case Window_OFFSET + 15: return lily_lcurses_Window_clrtoeol;
        case Window_OFFSET + 16: return lily_lcurses_Window_getstr;
        case Window_OFFSET + 17: return lily_lcurses_Window_mvgetstr;
        case Window_OFFSET + 18: return lily_lcurses_Window_keypad;
        case Window_OFFSET + 19: return lily_lcurses_Window_getch;
        case Window_OFFSET + 20: return lily_lcurses_Window_mvgetch;
        case Window_OFFSET + 21: return lily_lcurses_Window_stdscr;
        case toplevel_OFFSET + 0: return lily_lcurses__initscr;
        case toplevel_OFFSET + 1: return lily_lcurses__endwin;
        case toplevel_OFFSET + 2: return lily_lcurses__raw;
        case toplevel_OFFSET + 3: return lily_lcurses__cbreak;
        case toplevel_OFFSET + 4: return lily_lcurses__nocbreak;
        case toplevel_OFFSET + 5: return lily_lcurses__echo;
        case toplevel_OFFSET + 6: return lily_lcurses__noecho;
        case toplevel_OFFSET + 7: return lily_lcurses__halfdelay;
        case toplevel_OFFSET + 8: return lily_lcurses__COLS;
        case toplevel_OFFSET + 9: return lily_lcurses__LINES;
        case toplevel_OFFSET + 10: return lily_lcurses__COLOR_PAIR;
        case toplevel_OFFSET + 11: return lily_lcurses__start_color;
        case toplevel_OFFSET + 12: return lily_lcurses__has_colors;
        case toplevel_OFFSET + 13: return lily_lcurses__can_change_color;
        case toplevel_OFFSET + 14: return lily_lcurses__init_pair;
        case toplevel_OFFSET + 15: return lily_lcurses__init_color;
        case toplevel_OFFSET + 16: return lily_lcurses__color_content;
        case toplevel_OFFSET + 17: return lily_lcurses__curs_set;
        case toplevel_OFFSET + 18: return lily_lcurses__sleep;
        case toplevel_OFFSET + 19: lily_lcurses_var_KEY_LEFT(s); return NULL;
        case toplevel_OFFSET + 20: lily_lcurses_var_KEY_RIGHT(s); return NULL;
        case toplevel_OFFSET + 21: lily_lcurses_var_KEY_UP(s); return NULL;
        case toplevel_OFFSET + 22: lily_lcurses_var_KEY_DOWN(s); return NULL;
        case toplevel_OFFSET + 23: lily_lcurses_var_COLOR_RED(s); return NULL;
        case toplevel_OFFSET + 24: lily_lcurses_var_COLOR_BLACK(s); return NULL;
        case toplevel_OFFSET + 25: lily_lcurses_var_COLOR_GREEN(s); return NULL;
        case toplevel_OFFSET + 26: lily_lcurses_var_COLOR_YELLOW(s); return NULL;
        case toplevel_OFFSET + 27: lily_lcurses_var_COLOR_BLUE(s); return NULL;
        case toplevel_OFFSET + 28: lily_lcurses_var_COLOR_MAGENTA(s); return NULL;
        case toplevel_OFFSET + 29: lily_lcurses_var_COLOR_CYAN(s); return NULL;
        case toplevel_OFFSET + 30: lily_lcurses_var_COLOR_WHITE(s); return NULL;
        case toplevel_OFFSET + 31: lily_lcurses_var_A_BOLD(s); return NULL;
        case toplevel_OFFSET + 32: lily_lcurses_var_A_UNDERLINE(s); return NULL;
        case toplevel_OFFSET + 33: lily_lcurses_var_A_NORMAL(s); return NULL;
        case toplevel_OFFSET + 34: lily_lcurses_var_A_STANDOUT(s); return NULL;
        case toplevel_OFFSET + 35: lily_lcurses_var_A_BLINK(s); return NULL;
        case toplevel_OFFSET + 36: lily_lcurses_var_A_REVERSE(s); return NULL;
        case toplevel_OFFSET + 37: lily_lcurses_var_ERR(s); return NULL;
        default: return NULL;
    }
}
/** End autogen section. **/

//-------Initialization/Exit------------------

/**
define initscr

Initialize NCurses
*/
void lily_lcurses__initscr(lily_state *s)
{
    WINDOW *ret = initscr();

    if (ret == NULL)
        lily_RuntimeError(s, "Failed to initialize ncurses.");

    lily_return_unit(s);
}

/**
define endwin: Integer

Exit curses mode
*/
void lily_lcurses__endwin(lily_state *s)
{
    int ret = endwin();

    lily_return_integer(s, ret);
}

//-------Input Manipulation-------------------

/**
define raw: Integer

Characters passed to the terminal are sent without creating signals (CTRL-Z, for example)
*/
void lily_lcurses__raw(lily_state *s)
{
    int ret = raw();

    lily_return_integer(s, ret);
}

/**
define cbreak: Integer

Same as raw, but signals are created
*/
void lily_lcurses__cbreak(lily_state *s)
{
    int ret = cbreak();

    lily_return_integer(s, ret);
}

/**
define nocbreak: Integer

Exit cbreak mode
*/
void lily_lcurses__nocbreak(lily_state *s)
{
    int ret = nocbreak();

    lily_return_integer(s, ret);
}

/**
define echo: Integer

echo characters typed (default behaviour)
*/
void lily_lcurses__echo(lily_state *s)
{
    int ret = echo();

    lily_return_integer(s, ret);
}

/**
define noecho

Disable echoing characters
*/
void lily_lcurses__noecho(lily_state *s)
{
    noecho();

    lily_return_unit(s);
}

/**
define halfdelay(tenths: Integer)

Enable half-delay mode; wait for x tenths of a second
for input.
*/
void lily_lcurses__halfdelay(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    int64_t tenths = lily_arg_integer(s,0);

    halfdelay(tenths);

    lily_return_unit(s);
}

//--------------Macros------------------------

/**
define COLS: Integer

The number of columns on the screen
*/
void lily_lcurses__COLS(lily_state *s)
{
    lily_return_integer(s, COLS);
}

/**
define LINES: Integer

The number of lines on the screen
*/
void lily_lcurses__LINES(lily_state *s)
{
    lily_return_integer(s, LINES);
}

/**
define COLOR_PAIR(n: Integer): Integer

Converts a color pair number to an attribute
*/
void lily_lcurses__COLOR_PAIR(lily_state *s)
{
    int64_t cp = lily_arg_integer(s, 0);

    int ret = COLOR_PAIR(cp);

    lily_return_integer(s, ret);
}

/**
define start_color: Integer

Start color mode
*/
void lily_lcurses__start_color(lily_state *s)
{
    if (has_colors() == 0) {
        lily_RuntimeError(s, "Your terminal does not support color.");
    }
    int ret = start_color();

    lily_return_integer(s, ret);
}

/**
define has_colors: Boolean

Checks if the current terminal supports color
*/
void lily_lcurses__has_colors(lily_state *s)
{
    if (has_colors() == 0)
        lily_return_boolean(s, 0);
    else
        lily_return_boolean(s, 1);
}

/**
define can_change_color: Boolean

Checks if the current terminal supports changing colors
*/
void lily_lcurses__can_change_color(lily_state *s)
{
    if (can_change_color() == 0)
        lily_return_boolean(s, 0);
    else
        lily_return_boolean(s, 1);
}

/**
define init_pair(num_pairs: Integer, fg: Integer, bg: Integer): Integer

Changes the definition of a color-pair
*/
void lily_lcurses__init_pair(lily_state *s)
{
    if (lily_arg_count(s) < 3)
        lily_RuntimeError(s, "Incorrect number of arguments");

    int64_t np = lily_arg_integer(s, 0);
    int64_t fg = lily_arg_integer(s, 1);
    int64_t bg = lily_arg_integer(s, 2);

    int ret = init_pair(np, fg, bg);

    lily_return_integer(s, ret);
}

/**
define init_color(color: Integer, r: Integer, g: Integer, b: Integer): Integer

Change the definition of a color
*/
void lily_lcurses__init_color(lily_state *s)
{
    if (lily_arg_count(s) < 4)
        lily_RuntimeError(s, "Incorrect number of arguments");

    int64_t colr = lily_arg_integer(s, 0);
    int64_t r = lily_arg_integer(s, 1);
    int64_t g = lily_arg_integer(s, 2);
    int64_t b = lily_arg_integer(s, 3);

    int ret = init_color(colr, r, g, b);

    lily_return_integer(s, ret);
}

/**
define color_content(color: Integer): Tuple[Integer, Integer, Integer]

return the rgb contents of a color in an <[r,g,b]> tuple
*/
void lily_lcurses__color_content(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    int64_t colr = lily_arg_integer(s, 0);

    short r;
    short g;
    short b;

    color_content(colr, &r, &g, &b);

    lily_container_val *tpl = lily_push_tuple(s, 3);
    lily_push_integer(s, r);
    lily_con_set_from_stack(s, tpl, 0);
    lily_push_integer(s, g);
    lily_con_set_from_stack(s, tpl, 1);
    lily_push_integer(s, b);
    lily_con_set_from_stack(s, tpl, 2);

    lily_return_top(s);
}

/**
define curs_set(set: Boolean): Integer

Sets the cursor on/off
*/
void lily_lcurses__curs_set(lily_state *s)
{
    if (lily_arg_count(s) != 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    int set = lily_arg_boolean(s, 0);

    int ret = curs_set(set);

    lily_return_integer(s, ret);
}

/**
define sleep(ms: Integer)

sleep for ms micro seconds
*/
void lily_lcurses__sleep(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    int64_t t = lily_arg_integer(s, 0);

    usleep(t);

    lily_return_unit(s);
}

//-------Variables----------------------------

/**
var KEY_LEFT: Byte

The value of a left key press
*/
void lily_lcurses__KEY_LEFT(lily_state *s)
{
    lily_push_integer(s, KEY_LEFT);
}

/**
var KEY_RIGHT: Byte

The value of a right key press
*/
void lily_lcurses_var_KEY_RIGHT(lily_state *s)
{
    lily_push_integer(s, KEY_RIGHT);
}

/**
var KEY_UP: Byte

The value of an up key press
*/
void lily_lcurses_var_KEY_UP(lily_state *s)
{
    lily_push_integer(s, KEY_UP);
}

/**
var KEY_DOWN: Byte

The value of a down key press
*/
void lily_lcurses_var_KEY_DOWN(lily_state *s)
{
    lily_push_integer(s, KEY_DOWN);
}

/**
var COLOR_RED: Integer

The red ncurses value
*/
void lily_lcurses_var_COLOR_RED(lily_state *s)
{
    lily_push_integer(s, COLOR_RED);
}

/**
var COLOR_BLACK: Integer

The black ncurses value
*/
void lily_lcurses_var_COLOR_BLACK(lily_state *s)
{
    lily_push_integer(s, COLOR_BLACK);
}

/**
var COLOR_GREEN: Integer

The green ncurses value
*/
void lily_lcurses_var_COLOR_GREEN(lily_state *s)
{
    lily_push_integer(s, COLOR_GREEN);
}

/**
var COLOR_YELLOW: Integer

The yellow ncurses value
*/
void lily_lcurses_var_COLOR_YELLOW(lily_state *s)
{
    lily_push_integer(s, COLOR_YELLOW);
}

/**
var COLOR_BLUE: Integer

The blue ncurses value
*/
void lily_lcurses_var_COLOR_BLUE(lily_state *s)
{
    lily_push_integer(s, COLOR_BLUE);
}

/**
var COLOR_MAGENTA: Integer

The magenta ncurses value
*/
void lily_lcurses_var_COLOR_MAGENTA(lily_state *s)
{
    lily_push_integer(s, COLOR_MAGENTA);
}

/**
var COLOR_CYAN: Integer

The cyan ncurses value
*/
void lily_lcurses_var_COLOR_CYAN(lily_state *s)
{
    lily_push_integer(s, COLOR_CYAN);
}

/**
var COLOR_WHITE: Integer

The white ncurses value
*/
void lily_lcurses_var_COLOR_WHITE(lily_state *s)
{
    lily_push_integer(s, COLOR_WHITE);
}

//---------Attributes--------------------------

/**
var A_BOLD: Integer

The bold attribute
*/
void lily_lcurses_var_A_BOLD(lily_state *s)
{
    lily_push_integer(s, A_BOLD);
}

/**
var A_UNDERLINE: Integer

The underline attribute
*/
void lily_lcurses_var_A_UNDERLINE(lily_state *s)
{
    lily_push_integer(s, A_UNDERLINE);
}

/**
var A_NORMAL: Integer

The normal attribute
*/
void lily_lcurses_var_A_NORMAL(lily_state *s)
{
    lily_push_integer(s, A_NORMAL);
}

/**
var A_STANDOUT: Integer

The standout attribute: highlights text
*/
void lily_lcurses_var_A_STANDOUT(lily_state *s)
{
    lily_push_integer(s, A_STANDOUT);
}

/**
var A_BLINK: Integer

The blink attribute
*/
void lily_lcurses_var_A_BLINK(lily_state *s)
{
    lily_push_integer(s, A_BLINK);
}

/**
var A_REVERSE: Integer

The reverse attribute
*/
void lily_lcurses_var_A_REVERSE(lily_state *s)
{
    lily_push_integer(s, A_REVERSE);
}


/**
var ERR: Integer

The ncurses error value
*/
void lily_lcurses_var_ERR(lily_state *s)
{
    lily_push_integer(s, ERR);
}

//-------The Window Class---------------------

static void destroy_Window(lily_lcurses_Window *lw)
{
    if (lw->win != stdscr)
        delwin(lw->win);
}

/**
foreign class Window(x: Integer, y: Integer, w: Integer, h: Integer, box: *Boolean=false) {
    layout {
        WINDOW *win;
        int x;
        int y;
        int w;
        int h;
    }
}

The Window class provides an abstraction to the ncurses WINDOW type.
Most functions that operate on a window are member functions.
*/

void lily_lcurses_Window_new(lily_state *s)
{
    if (lily_arg_count(s) != 4 && lily_arg_count(s) != 5)
        lily_RuntimeError(s, "Incorrect number of arguments");

    int x;
    int y;
    int w;
    int h;
    int bx;
    WINDOW *win;

    lily_lcurses_Window *lwin = INIT_Window(s);

    x = lily_arg_integer(s, 0);
    y = lily_arg_integer(s, 1);
    w = lily_arg_integer(s, 2);
    h = lily_arg_integer(s, 3);
    bx = lily_arg_boolean(s, 4);

    win = newwin(h, w, y, x);

    if (bx) {
        box(win, 0, 0);
        wrefresh(win);
    }

    lwin->x = x;
    lwin->y = y;
    lwin->w = w;
    lwin->h = h;
    lwin->win = win;

    lily_return_top(s);
}

//--------------Window Functions----------------------

/**
define Window.refresh: Integer

Refresh the window
*/
void lily_lcurses_Window_refresh(lily_state *s)
{
    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int ret;

    ret = wrefresh(lwin->win);

    lily_return_integer(s, ret);
}

/**
define Window.print(str: String): Integer

Print a string to the window
*/
void lily_lcurses_Window_print(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    char *str = lily_arg_string_raw(s,1);
    int ret;

    ret = wprintw(lwin->win, str);

    lily_return_integer(s, ret);
}

/**
define Window.mvprint(y: Integer, x: Integer, str: String): Integer

Move to an xy coordinate, then print a string to the window
*/
void lily_lcurses_Window_mvprint(lily_state *s)
{
    if (lily_arg_count(s) < 3)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int ret;

    int64_t y = lily_arg_integer(s,1);
    int64_t x = lily_arg_integer(s,2);
    char *str = lily_arg_string_raw(s,3);

    ret = mvwprintw(lwin->win, y, x, str);

    lily_return_integer(s, ret);
}

/**
define Window.addch(ch: Byte): Integer

Print a character to the window
*/
void lily_lcurses_Window_addch(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    uint8_t c = lily_arg_byte(s,1);

    int ret;

    ret = waddch(lwin->win, (char)c);

    lily_return_integer(s, ret);
}

/**
define Window.mvaddch(y: Integer, x: Integer, ch: Byte): Integer

Move to an xy coordinate, then print a character to the window
*/
void lily_lcurses_Window_mvaddch(lily_state *s)
{
    if (lily_arg_count(s) < 3)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);

    int64_t y = lily_arg_integer(s,1);
    int64_t x = lily_arg_integer(s,2);
    uint8_t c = lily_arg_byte(s,3);

    int ret;

    ret = mvwaddch(lwin->win, y, x, (char)c);

    lily_return_integer(s, ret);
}

/**
define Window.getmaxyx: Tuple[Integer, Integer]

Returns a tuple with the number of rows and columns
*/
void lily_lcurses_Window_getmaxyx(lily_state *s)
{
    lily_lcurses_Window *lwin = ARG_Window(s, 0);

    int rows;
    int columns;

    getmaxyx(lwin->win, rows, columns);

    lily_container_val *tpl = lily_push_tuple(s, 2);
    lily_push_integer(s, rows);
    lily_con_set_from_stack(s, tpl, 0);
    lily_push_integer(s, columns);
    lily_con_set_from_stack(s, tpl, 1);

    lily_return_top(s);
}

/**
define Window.border(ls: Integer, rs: Integer, ts: Integer, bs: Integer, tl: Integer, tr: Integer, bl: Integer, br: Integer): Integer

Print a border to the window
*/
void lily_lcurses_Window_border(lily_state *s)
{
    if (lily_arg_count(s) < 8)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int64_t ls = lily_arg_integer(s,1);
    int64_t rs = lily_arg_integer(s,2);
    int64_t ts = lily_arg_integer(s,3);
    int64_t bs = lily_arg_integer(s,4);
    int64_t tl = lily_arg_integer(s,5);
    int64_t tr = lily_arg_integer(s,6);
    int64_t bl = lily_arg_integer(s,7);
    int64_t br = lily_arg_integer(s,8);

    int ret;

    ret = wborder(lwin->win, ls, rs, ts, bs, tl, tr, bl, br);

    lily_return_integer(s, ret);
}

/**
define Window.attron(attrs: Integer): Integer

Changes the definition of a color-pair
*/
void lily_lcurses_Window_attron(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int64_t attrs = lily_arg_integer(s, 1);

    int ret = wattron(lwin->win, attrs);

    lily_return_integer(s, ret);
}

/**
define Window.attroff(attrs: Integer): Integer

turn attribute(s) off
*/
void lily_lcurses_Window_attroff(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int64_t attrs = lily_arg_integer(s, 1);

    int ret = wattroff(lwin->win, attrs);

    lily_return_integer(s, ret);
}

/**
define Window.attrset(attrs: Integer): Integer

set attribute(s)
*/
void lily_lcurses_Window_attrset(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int64_t attrs = lily_arg_integer(s, 1);

    int ret = wattrset(lwin->win, attrs);

    lily_return_integer(s, ret);
}

/**
define getyx: Tuple[Integer, Integer]

return the cursor position in a <[y,x]> tuple
*/
void lily_lcurses_Window_getyx(lily_state *s)
{
    lily_lcurses_Window *lwin = ARG_Window(s, 0);

    int y;
    int x;

    getyx(lwin->win, y, x);

    lily_container_val *tpl = lily_push_tuple(s, 2);
    lily_push_integer(s, y);
    lily_con_set_from_stack(s, tpl, 0);
    lily_push_integer(s, x);
    lily_con_set_from_stack(s, tpl, 1);

    lily_return_top(s);
}

/**
define Window.clear: Integer

Clears a window
*/
void lily_lcurses_Window_clear(lily_state *s)
{
    lily_lcurses_Window *lwin = ARG_Window(s, 0);

    int ret = wclear(lwin->win);

    lily_return_integer(s, ret);
}

/**
define Window.erase: Integer

Copies blanks to the screen, clearing the window
*/
void lily_lcurses_Window_erase(lily_state *s)
{
    lily_lcurses_Window *lwin = ARG_Window(s, 0);

    int ret = werase(lwin->win);

    lily_return_integer(s, ret);
}

/**
define Window.clrtoeol: Integer

Clears the current line to the right of the cursor
*/
void lily_lcurses_Window_clrtoeol(lily_state *s)
{
    lily_lcurses_Window *lwin = ARG_Window(s, 0);

    int ret = wclrtoeol(lwin->win);

    lily_return_integer(s, ret);
}

//----------Input Functions--------------------

/**
define Window.getstr(n: *Integer=-1): String

accept character strings from the curses terminal keyboard
optionally specify max string length
otherwise max string len defaults to 256 characters
*/
void lily_lcurses_Window_getstr(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int64_t n = lily_arg_integer(s,1);

    char *str = NULL;

    if (n == -1) {
        str = malloc(sizeof(char) * 256);
        n = 256;
    }
    else if(n < -1 || n == 0)
        lily_ValueError(s, "Invalid string length.");
    else
        str = malloc(sizeof(char) * n);

    wgetnstr(lwin->win, str, n);

    lily_push_string(s, str);

    free(str);

    lily_return_top(s);
}

/**
define Window.mvgetstr(n: *Integer=-1): String

Moves to an xy coordinate, then accepts a character string
from the curses terminal keyboard
optionally specify max string length
otherwise max string len defaults to 256 characters
*/
void lily_lcurses_Window_mvgetstr(lily_state *s)
{
    if (lily_arg_count(s) < 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int64_t n = lily_arg_integer(s,1);

    char *str = NULL;

    if (n == -1) {
        str = malloc(sizeof(char) * 256);
        n = 256;
    }
    else if(n < -1 || n == 0)
        lily_ValueError(s, "Invalid string length.");
    else
        str = malloc(sizeof(char) * n);

    wgetnstr(lwin->win, str, n);

    lily_push_string(s, str);

    free(str);

    lily_return_top(s);
}

/**
define Window.keypad(mode: Boolean)

Enable or Disable keypad mode. Keypad mode enables the user to
read in things like function keys or arrow keys.
*/
void lily_lcurses_Window_keypad(lily_state *s)
{
    if (lily_arg_count(s) != 1)
        lily_RuntimeError(s, "Incorrect number of arguments");

    lily_lcurses_Window *lwin = ARG_Window(s, 0);
    int mode = lily_arg_boolean(s,1);
    int ret;

    ret = keypad(lwin->win, mode);

    lily_return_integer(s, ret);
}

/**
define Window.getch: Byte

Reads a character from the keyboard
*/
void lily_lcurses_Window_getch(lily_state *s)
{
    lily_lcurses_Window *lwin = ARG_Window(s, 0);

    char c = wgetch(lwin->win);

    lily_return_byte(s, c);
}

/**
define Window.mvgetch: Byte

Moves to an xy coordinate, then reads a character from the keyboard
*/
void lily_lcurses_Window_mvgetch(lily_state *s)
{
    lily_lcurses_Window *lwin = ARG_Window(s, 0);

    int64_t y = lily_arg_integer(s, 1);
    int64_t x = lily_arg_integer(s, 2);

    char c = mvwgetch(lwin->win, y, x);

    lily_return_byte(s, c);
}

/**
define Window.stdscr

Turns an instance of Window to reference the stdscr
(Yes, I know it kinda sucks)
*/
void lily_lcurses_Window_stdscr(lily_state *s)
{
    lily_lcurses_Window *lwin = INIT_Window(s);

    delwin(lwin->win);
    lwin->win = stdscr;
}
