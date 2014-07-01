#ifndef _TEERM_COLOR_H_

#define CLR_TO_STR(x) #x

/* Foreground Color Code */
#define FG_BLACK        CLR_TO_STR(30)
#define FG_RED          CLR_TO_STR(31)
#define FG_GREEN        CLR_TO_STR(32)
#define FG_YELLOW       CLR_TO_STR(33)
#define FG_BLUE         CLR_TO_STR(34)
#define FG_MAGENTA      CLR_TO_STR(35)
#define FG_CYAN         CLR_TO_STR(36)
#define FG_LIGHT_GRAY   CLR_TO_STR(37)
#define FG_DEFAULT      CLR_TO_STR(39)

/* Background Color Code */
#define BG_BLACK        CLR_TO_STR(40)
#define BG_RED          CLR_TO_STR(41)
#define BG_GREEN        CLR_TO_STR(42)
#define BG_YELLOW       CLR_TO_STR(43)
#define BG_BLUE         CLR_TO_STR(44)
#define BG_MAGENTA      CLR_TO_STR(45)
#define BG_CYAN         CLR_TO_STR(46)
#define BG_LIGHT_GRAY   CLR_TO_STR(47)
#define BG_DEFAULT      CLR_TO_STR(49)

#define FMT_NORMAL       "0"
#define FMT_BOLD         "1"
#define FMT_DIM          "2"
#define FMT_UNDERLINED   "4"
#define FMT_BLINK        "5"
#define FMT_INVERT       "7"
#define FMT_HIDDEN       "8"

#define RICH_TERM_CLR_STR(fmt, fore, back) \
            "\e["fmt";"fore";"back"m"
#define TERM_CLR_STR(clr) "\e["clr"m"
#define TERM_FMT_STR(fmt)  "\e["fmt"m"
#define TERM_CLEAN_CLR        "\e[0m"

#define TERM_END_BOLD         "\e[22m"
#define TERM_END_DIM          "\e[22m"
#define TERM_END_UNDERLINED   "\e[24m"
#define TERM_END_BLINK        "\e[25m"
#define TERM_END_INVERT       "\e[27m"
#define TERM_END_HIDDEN       "\e[28m"

#ifdef __cplusplus
#include <iostream>
#define SET_TERM_COLOR(format, fore, back) \
    std::cout << RICH_TERM_CLR_STR(format, fore, back);
#define CLEAN_TERM_COLOR() \
    cout << TERM_CLEAN_CLR;
#else
#include <stdio.h>
#define SET_TERM_COLOR(format, fore, back) \
    printf(RICH_TERM_CLR_STR(format, fore, back));
#define CLEAN_TERM_COLOR() \
    printf(TERM_CLEAN_CLR);
#endif /* __cplusplus */

#endif /* _TEERM_COLOR_H_ */
