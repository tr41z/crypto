#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "include/encrypt.h"
#include "include/file.h"

int main() {
	FILE *finp;
	FILE *fenc;
	//FILE *fout;
	char key = 'K';
    char filePath[1024];
    char choice[8];
    bool validOption = false;

    while (!validOption) {
        printf("Please choose option:\n");
        printf("1. Encrypt File.\n");
        printf("2. Decrypt File.\n");
        fgets(choice, sizeof(choice), stdin);
        choice[strcspn(choice, "\n")] = '\0';
        if (strcmp(choice, "1") == 0 || strcmp(choice, "2") == 0) {
            validOption = true;
        } else {
            printf("Wrong option! Select from above.\n");
        }
    }

    if (strcmp(choice, "1") == 0) {
        printf("Please provide file to encrypt (File Path): ");
        fgets(filePath, sizeof(filePath), stdin);
        filePath[strcspn(filePath, "\n")] = '\0';

        finp = fopen(filePath, "r");
        if (finp == NULL) {
            printf("Error opening input file!");
            exit(0);
        }

        fenc = fopen("encrypted.txt", "w");
        if (fenc == NULL) {
            printf("Error opening encrypted file!");
            exit(0);
        }

        encrypt(finp, fenc, key);
        printf("File encrypted successfully! Check encrypted.txt file\n");

        fclose(finp);
        fclose(fenc);
    } else {
        // Decrypt
    }

	return 0;
}

