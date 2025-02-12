COMPILER = gcc
SOURCES = encrypt.c file.c
EXEC = crypto
INPUT = main.c
ARGS = -Wall

run:
	$(COMPILER) $(ARGS) $(INPUT) $(SOURCES) -o $(EXEC)
