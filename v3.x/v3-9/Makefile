CC=gcc
OPCOES_COMPILADOR= -lglut -lGLU -lGL -lGLEW -lSOIL -lm

TODOS_ARQUIVOS_PONTOH =
TODOS_ARQUIVOS_OBJ = main.o

%.o: ../%.c $(TODOS_ARQUIVOS_PONTOH)
	$(CC) -o $@ -c $< $(OPCOES_COMPILADOR)

all: $(TODOS_ARQUIVOS_OBJ)
	gcc -o main $^ $(OPCOES_COMPILADOR)

run: all
	./main
	rm *.o main
	clear

clean:
	rm *.o main
