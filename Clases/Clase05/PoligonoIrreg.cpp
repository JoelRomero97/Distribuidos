#include <vector>
#include <iostream>
#include "PoligonoIrreg.h"
using namespace std;

int PoligonoIrreg::contarvertices = 0;
PoligonoIrreg::PoligonoIrreg(vector<Coordenada> vv)
{
	v = vv;
}

PoligonoIrreg::~PoligonoIrreg()
{
	v.clear();
}

void PoligonoIrreg::anadeVertice(Coordenada c)
{
	contarvertices++;
	v.push_back(c);
}

void PoligonoIrreg::anadeVertices(int m)
{
	v.reserve(m);
	for (int i = 0; i < m; i++)
	{
		v[i] = Coordenada(rand(), rand());
		contarvertices++;
	}
}

void PoligonoIrreg::imprimeVertices()
{
	for (int i = 0; i < v.size(); i++)
		cout << "Coordenada " << i << ": (" << v[i].obtenerX() << "," << v[i].obtenerY() << ")" << endl;
}

int PoligonoIrreg::getContV()
{
	return contarvertices;
}