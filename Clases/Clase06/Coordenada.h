#ifndef COORDENADA_H
#define COORDENADA_H

class Coordenada
{
private:
  double x;
  double y;
  double m;

public:
  Coordenada(double = 0, double = 0, bool polar = false);
  double obtenerX();
  double obtenerY();
  double obtenerM();
};

#endif