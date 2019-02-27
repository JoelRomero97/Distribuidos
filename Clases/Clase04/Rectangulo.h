#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Coordenada.h"

class Rectangulo
{
private:
  Coordenada superiorIzq;
  Coordenada inferiorDer;

public:
  Rectangulo();
  Rectangulo(double xSupIzq, double ySupIzq, double xInfDer, double yInfDer);
  Rectangulo(Coordenada coord2, Coordenada coord1);
  void imprimeEsq();
  Coordenada obtieneSupIzq();
  Coordenada obtieneInfDer();
  double obtieneArea();
};

#endif