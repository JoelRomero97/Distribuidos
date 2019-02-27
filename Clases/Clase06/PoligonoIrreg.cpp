#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
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
	v.resize(m);
	for (int i = 0; i < m; i++)
	{
		v[i] = Coordenada((rand() % 100000) / 1000.0 - 100.0, (rand() % 100000) / 1000.0 - 100.0);
		contarvertices++;
	}
}

void PoligonoIrreg::imprimeVertices()
{
	std::vector<Coordenada>::iterator i;
	for (i = v.begin(); i != v.end(); i++)
	{
		cout << "Coordenada "
			 << ": (" << (*i).obtenerX() << "," << (*i).obtenerY() << ")\tMagnitud: " << (*i).obtenerM() << endl;
	}
}

int PoligonoIrreg::getContV()
{
	return contarvertices;
}

bool compareInterval(Coordenada c1, Coordenada c2)
{
	return c1.obtenerM() < c2.obtenerM();
}

void PoligonoIrreg::ordenaA()
{
	std::sort(v.begin(), v.end(), compareInterval);
}