#ifndef FECHA_H_
#define FECHA_H_

class Fecha
{
private:
  int dia;
  int mes;
  int anio;

public:
  Fecha(int = 1, int = 1, int = 2019);
  void muestraFecha();
  int convierte();
};

#endif
