/**
 * @file termcolor.c
 * Test for termcolor.h.
 *
 * @author Chen Junshi
 * @version 0.0.1
 * @date 2014-07-01
 */

#include <stdio.h>

#include <termcolor.h>

int main( int argc, char **argv )
{
    SET_TERM_COLOR(FMT_NORMAL, FG_RED, BG_DEFAULT);
    printf("Hello world! in RED\n");
    CLEAN_TERM_COLOR();

    printf(TERM_CLR_STR(FG_GREEN)"Hello world! in GREEN\n"TERM_CLEAN_CLR);

    printf(RICH_TERM_CLR_STR(FMT_BOLD, FG_GREEN, BG_CYAN)"Hello world\n"TERM_CLEAN_CLR);

    return 0;
}
