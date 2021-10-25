#include"MyGATO.h"

GATO::GATO(string nom, int id, int ed):ANIMAL(nom, id){
  this->edad=ed;
}
void GATO::set_edad(int ed){
  this->edad=ed;
}
int GATO::get_edad(){
  return this->edad;
}
string GATO::imprimir_gato(){
  stringstream s;
  s<<ANIMAL::imprimir_animal()endl;
  s<<"Edad: "<<this->edad<<endl;

  return s.str();
}
GATO::~GATO(){

}
