#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    for (int n = 0; n < argc; n++)
        if (strncmp(argv[n], "-", 1) == 0) {
            printf("%s\n\n", argv[n]);
    }
    return 0;
}
