#ifndef MyGATO_H
#define MyGATO_H
#include"MyANIMAL.h"

class GATO{
public:
  GATO(string nom, int id, int ed);
  void set_edad(int ed);
  int get_edad();
  string imprimir_gato();
  ~GATO();

private:
  int edad;
};

#endif
