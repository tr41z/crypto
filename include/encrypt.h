#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <stdio.h>

char* preprocess(FILE* file);
void encrypt(FILE* finp, FILE* fenc, char key);
void decrypt(FILE* fenc, FILE* fout, char key);

#endif
