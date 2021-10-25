#ifndef MyPERRO_H
#define MyPERRO_H

#include"MyANIMAL.h"


class PERRO:public ANIMAL{
public:
  PERRO(string nom, int id, string ra);
  void set_raza(string ra);
  string get_raza();
  string imprimir_prro();
  ~PERRO();

private:
  string raza;
};


#endif
