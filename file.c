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

size_t fileSize(FILE* file) {
    // Get size of  file
    fseek(file, 0, SEEK_END);
    size_t size = ftell(file);
    fseek(file, 0, SEEK_SET);

    return size;
}

