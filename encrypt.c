#include "include/encrypt.h"
#include "include/file.h"
#include <stdlib.h>

char* preprocess(FILE* file) { 
    size_t size = fileSize(file);

    // Allocate memory dynamically for buffer
    char* inpBuff = (char*)malloc(size*sizeof(char));

    fread(inpBuff, 1, size, file);
    inpBuff[size] = '\0';

    return inpBuff;

    free(inpBuff);
}

void encrypt(FILE* finp, FILE* fenc, char key) {
    char* pBuff = preprocess(finp);
    size_t size = fileSize(finp);

	for (int i = 0; i < size; i++) {
		pBuff[i] ^= key;
		fprintf(fenc, "%c", pBuff[i]);
	}

    free(pBuff);
}

void decrypt(FILE *fenc, FILE* fout, char key) {
	char* pBuff = preprocess(fenc);
    size_t size = fileSize(fenc);
    
	for (int i = 0; i < size - 1; i++) {
		pBuff[i] ^= key;
		fprintf(fout, "%c", pBuff[i]);
	}

    free(pBuff);
}
