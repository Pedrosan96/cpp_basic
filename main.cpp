#include<iostream>
#include<string>
#include<sstream>
#include"include/MyPERRO.h"
#include"include/MyGATO.h"

using namespace std;

int main(void){
  PERRO *prr = new PERRO ("Canelo", 123, "Dalmata");
  GATO *gto = new GATO("Minina", 321, 3);

  cout<<"Perro: "<<endl;
  cout<<prr->imprimir_prro()<<endl;
  cout<<"Gato: "<<endl;
  cout<<gto->imprimir_gato()<<endl;
}
