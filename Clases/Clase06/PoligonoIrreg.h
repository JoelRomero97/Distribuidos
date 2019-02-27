#ifndef POLIGONOIRREG_H
#define POLIGONOIRREG_H
#include <vector>
#include <iostream>
#include "Coordenada.h"
using namespace std;

class PoligonoIrreg
{
private:
	vector<Coordenada> v;
	static int contarvertices;

public:
	PoligonoIrreg(vector<Coordenada> = {});
	~PoligonoIrreg();
	void anadeVertice(Coordenada = Coordenada(0, 0));
	void anadeVertices(int = 0);
	void imprimeVertices();
	static int getContV();
	void ordenaA();
};

#endif