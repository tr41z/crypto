#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/alg/xor.h"
#include "include/file.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        printf("User must provide 4 arguments\n");
        printf("--------------------------\n");
        printf("1. Algorithm to be used\n");
        printf("2. File to be decrypted\n");
        printf("3. Output file directory\n");
        printf("4. Key to decrypt file\n");
        printf("Type `crypto --h` for more\n");
        printf("--------------------------\n");
        exit(0);
    }

    if (strcmp(argv[1], "xor") == 0) {
        xor_decrypt(argv[2], argv[3], argv[4]);
    }

	return 0;
}

