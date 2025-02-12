COMPILER = gcc
SOURCES = algo/xor.c file.c
CRY_EXEC = crypto
DCRY_EXEC = decrypto
ARGS = -Wall

crypto:
	$(CRY_EXEC).exe xor C:\Users\tr41z\source\repos\crypto\filename.txt C:\Users\tr41z\source\repos\crypto\enc.txt secret

decrypto:
	$(DCRY_EXEC).exe xor C:\Users\tr41z\source\repos\crypto\enc.txt C:\Users\tr41z\source\repos\crypto\out.txt secret

all:
	$(COMPILER) $(ARGS) crypto.c $(SOURCES) -o $(CRY_EXEC)
	$(COMPILER) $(ARGS) decrypto.c $(SOURCES) -o $(DCRY_EXEC)

clean:
	del $(CRY_EXEC).exe $(DCRY_EXEC).exe out.txt enc.txt
