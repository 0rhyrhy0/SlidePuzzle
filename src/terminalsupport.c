#include "../headers/terminalsupport.h"
#include <stdio.h>

void clearTerminal() {
    printf("\033[2J\033[H");
    fflush(stdout);
}