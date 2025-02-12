#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <stdio.h>

void xor_encrypt(char* finp, char* fenc, char *key);
void xor_decrypt(FILE* fenc, FILE* fout, char key);

#endif
