#include <iostream>
#include <termcolor.h>

using namespace std;

int main( int argc, char **argv ) {
    cout << TERM_CLR_STR(FG_RED) << "Hello world in RED" << TERM_CLEAN_CLR << endl;
    cout << TERM_CLR_STR(FG_GREEN) << "Hello " << TERM_FMT_STR(FMT_BLINK)
        << "world" << TERM_END_BLINK << "!" << TERM_CLEAN_CLR << endl;

    return 0;
}
