COMPILER = gcc
ifeq ($(OS),Windows_NT)
	SOURCES := algo\xor.c file.c
	CRY_EXEC := bin\crypto
	DCRY_EXEC := bin\decrypto
else
	SOURCES := algo/xor.c file.c
	CRY_EXEC := bin/crypto
	DCRY_EXEC := bin/decrypto
endif
ARGS = -Wall
DOCS_DIR = docs

crypto:
	$(CRY_EXEC).exe xor C:\Users\tr41z\source\repos\crypto\docs\filename.txt C:\Users\tr41z\source\repos\crypto\docs\enc.txt secret

decrypto:
	$(DCRY_EXEC).exe xor C:\Users\tr41z\source\repos\crypto\docs\enc.txt C:\Users\tr41z\source\repos\crypto\docs\out.txt secret

all:
	$(COMPILER) $(ARGS) crypto.c $(SOURCES) -o $(CRY_EXEC)
	$(COMPILER) $(ARGS) decrypto.c $(SOURCES) -o $(DCRY_EXEC)

clean:
	del $(CRY_EXEC).exe $(DCRY_EXEC).exe docs\out.txt docs\enc.txt
