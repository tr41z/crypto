#include "../include/alg/xor.h"
#include "../include/file.h"
#include <stdlib.h>

void xor_encrypt(char* inputFile, char* encryptedFile, char* key) {
    
    FILE *finp = fopen(inputFile, "r");
    if (finp == NULL) {
        printf("Error opening input file!");
        exit(0);
    }

    FILE *fenc = fopen(encryptedFile, "w");
    if (fenc == NULL) {
        printf("Error opening encrypted file!");
        exit(0);
    }

    char* pBuff = preprocess(finp);
    size_t size = fileSize(finp);
	
    for (int i = 0; i < size; i++) {
		pBuff[i] ^= key[i];
		fprintf(fenc, "%c", pBuff[i]);
	}

    free(pBuff);
}

void xor_decrypt(FILE *fenc, FILE* fout, char key) {
	char* pBuff = preprocess(fenc);
    size_t size = fileSize(fenc);
    
	for (int i = 0; i < size - 1; i++) {
		pBuff[i] ^= key;
		fprintf(fout, "%c", pBuff[i]);
	}

    free(pBuff);
}
