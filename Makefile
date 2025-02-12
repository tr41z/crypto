COMPILER = gcc
SOURCES = alg/xor.c file.c
CRY_EXEC = crypto
DCRY_EXEC = decrypto
ARGS = -Wall

crypto:
	$(COMPILER) $(ARGS) crypto.c $(SOURCES) -o $(CRY_EXEC)

decrypto:
	$(COMPILER) $(ARGS) decrypto.c $(SOURCES) -o $(DCRY_EXEC)

all:
	$(COMPILER) $(ARGS) crypto.c $(SOURCES) -o $(CRY_EXEC)
	$(COMPILER) $(ARGS) decrypto.c $(SOURCES) -o $(DCRY_EXEC)

clean:
	del $(CRY_EXEC).exe $(DCRY_EXEC).exe
