nome = a5ex2

all:
	g++ -o $(nome) src/main.cpp src/TPilha.h src/TPilha.cpp

clean:
	-rm -f *.o *~

run:
	./$(nome)

teste:
	./$(nome) < test/entrada.txt