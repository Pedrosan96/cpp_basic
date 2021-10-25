#include"MyANIMAL.h"

ANIMAL::ANIMAL(string nom, int id){
  this->name=nom;
  this->id=id;
}

void ANIMAL::set_nombre(string nom){
  this->name=nom;
}

string ANIMAL::get_nombre(){
  return thi->name;
}

void ANIMAL::set_id(int id){
  this->id=id;
}

int ANIMAL::get_id(){
  return this->id;
}

string ANIMAL::imprimir_animal(){
  stringstream s;
  s<<"Nombre: "<<this->name<<endl;
  s<<"ID: "<<this->id<<endl;
  return s.str();
}

ANIMAL::~ANIMAL(){

}
