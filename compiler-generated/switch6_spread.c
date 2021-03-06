/*
Spread out case numbers exponentially to see if the jump table table is still used.

GCC 4.8 -O0: creates 32 entries on the jump table,
such that each entry that does not have a case jumps to the end of the switch.
*/

#include <stdio.h>
#include <time.h>

int main() {
    int i, j;
    i = time(NULL) % 6;
    j = -1;
    switch (i) {
        case 1:
            j = 0;
        break;
        case 2:
            j = 1;
        break;
        case 4:
            j = 2;
        break;
        case 8:
            j = 3;
        break;
        case 16:
            j = 4;
        break;
        case 32:
            j = 5;
        break;
    };
    printf("%d\n", j);
    return 0;
}
