#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/algo/xor.h"
#include "include/file.h"
#include "include/helpers.h"

int main(int argc, char* argv[]) { 
    if (strcmp(argv[1], "--h") == 0) {
        helpMessage();
        exit(0);
    }

    if (argc != 5) {
        argumentMissingMessage();
        exit(0);
    }

    if (strcmp(argv[1], "xor") == 0) {
        xor_encrypt(argv[2], argv[3], argv[4]);
    }

	return 0;
}

