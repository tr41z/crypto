#ifndef HELPER_H
#define HELPER_H

static inline void argumentMissingMessage() {
    printf("User must provide 4 arguments\n");
    printf("--------------------------\n");
    printf("1. Algorithm to be used\n");
    printf("2. File to be encrypted\n");
    printf("3. Output file directory\n");
    printf("4. Key to encrypt file\n");
    printf("Type `crypto --h` for more\n");
    printf("--------------------------\n");
}

static inline void helpMessage() {
    printf("-----------------------------------------------------------------\n");
    printf("1. Encryption algorithms available: xor, \n");
    printf("2. Provide path to file eg. C:/Users/username/source/repos/crypto/filename.txt\n");
    printf("3. Provide path to file (format as in point 2)\n");
    printf("4. Key to encrypt file (one word, no spaces), eg. secret`\n");
    printf("FULL EXAMPLE OF USAGE:\n");
    printf("./crypto.exe xor C:/Users/username/source/repos/crypto/filename.txt C:/Users/username/source/repos/crypto/enc.txt secret");
    printf("-----------------------------------------------------------------\n");
}

#endif /* HELPER_H */
