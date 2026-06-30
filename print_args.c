#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for (int n = 0; n < argc; n++) {
        if (argv[n][0] == '-') {
            printf("%s\n", argv[n]);
        }
    }

    return 0;
}
