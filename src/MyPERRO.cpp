#include"MyPERRO.h"

PERRO::PERRO(string nom, int id, string ra):ANIMAL(nom, id){
  this->raza=ra;
}
void PERRO::set_raza(string ra){
  this->raza=ra;
}
string PERRO::get_raza(){
  return this->raza;
}
string PERRO::imprimir_prro(){
  stringstream s;
  s<<ANIMAL::imprimir_animal()<<endl;
  s<<"Raza: "<<this->raza<<endl;
  return s.str();
}
PERRO::~PERRO(){

}
