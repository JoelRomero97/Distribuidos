ex3: ex3.cpp PoligonoIrreg.o
	g++ ex3.cpp PoligonoIrreg.o Coordenada.o -o ex3
ex2: ex2.cpp PoligonoIrreg.o
	g++ ex2.cpp PoligonoIrreg.o Coordenada.o -o ex2
PoligonoIrreg.o: PoligonoIrreg.cpp Coordenada.o PoligonoIrreg.h
	g++ PoligonoIrreg.cpp -c
Coordenada.o: Coordenada.cpp Coordenada.h
	g++ Coordenada.cpp -c