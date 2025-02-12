#include "../include/alg/xor.h"
#include "../include/file.h"
#include <stdlib.h>

void xor_encrypt(char* inputFile, char* encryptedFile, char* key) { 
    FILE* finp = fopen(inputFile, "r");
    if (finp == NULL) {
        printf("Error opening input file!\n");
        exit(0);
    }

    FILE* fenc = fopen(encryptedFile, "w");
    if (fenc == NULL) {
        printf("Error opening encrypted file!\n");
        exit(0);
    }

    char* pBuff = preprocess(finp);
    size_t size = fileSize(finp);
	
    for (int i = 0; i < size; i++) {
		pBuff[i] ^= *key;
		fprintf(fenc, "%c", pBuff[i]);
	}

    printf("File Encrypted Successfully!\n");

    fclose(finp);
    fclose(fenc);
    free(pBuff);
}

void xor_decrypt(char* encryptedFile, char* outputFile, char* key) {
    FILE* fenc = fopen(encryptedFile, "r");
    if (fenc == NULL) {
        printf("Error opening encrypted file!\n");
        exit(0);
    }

    FILE* fout = fopen(outputFile, "w");
    if (fout == NULL) {
        printf("Error opening output file!\n");
        exit(0);
    }

    char* pBuff = preprocess(fenc);
    size_t size = fileSize(fenc);

    for (int i = 0; i < size; i++) {
        pBuff[i] ^= *key;
        fprintf(fout, "%c", pBuff[i]);
    }

    printf("File Decrypted Successfully!\n");

    fclose(fenc);
    fclose(fout);
    free(pBuff);
}
