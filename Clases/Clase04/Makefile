ex4: ex4.cpp Rectangulo.o
	g++ ex4.cpp Rectangulo.o Coordenada -o ex4
ex3: ex3.cpp Rectangulo.o
	g++ ex1.cpp Rectangulo.o Coordenada -o ex3
ex2: ex2.cpp Rectangulo.o
	g++ ex1.cpp Rectangulo.o Coordenada -o ex2
ex1: ex1.cpp Rectangulo.o
	g++ ex1.cpp Rectangulo.o Coordenada -o ex1
Rectangulo.o: Rectangulo.cpp Coordenada.o Rectangulo.h
	g++ Rectangulo.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c