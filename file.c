#include "include/file.h"

size_t fileSize(FILE* file) {
    // Get size of  file
    fseek(file, 0, SEEK_END);
    size_t size = ftell(file);
    fseek(file, 0, SEEK_SET);

    return size;
}

