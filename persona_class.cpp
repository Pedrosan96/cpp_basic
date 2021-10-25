#include<iostream>
#include<string>
#include<sstream>

using namespace std;
class PERSONA{
  public:
    PERSONA(){
      nombre = "";
      apellido = "";
      edad = 0;
    }
    PERSONA(string nombre, string apellido, int edad){
      this->nombre = nombre;
      this->apellido = apellido;
      this->edad = edad;
    }
    string get_nombre(){
    return nombre;
    }
    string get_apellido(){
      return apellido;
    }
    int get_edad(){
      return edad;
    }
    string imprimir_datos(){
      stringstream s;
      s<<"Nombre: "<<nombre<<endl;
      s<<"Apellido: "<<apellido<<endl;
      s<<"Edad: "<<edad<<endl;
      return s.str();
    }

    ~PERSONA(){

    }

  private:
    string nombre;
    string apellido;
    int edad;
};

class CONTENEDOR{
public:
  CONTENEDOR(){
    this->cantidad = 0;
    this->tamanio = 10;
  }
  void ingresar_per(PERSONA per){
    if (this->cantidad<this->tamanio) {
      vector[this->cantidad++]=per;
    }
    else{
      cout<<"No hay campo"<<endl;
    }
  }
  string imprimir_conte(){
    stringstream s;
    for (size_t i = 0; i < this->cantidad; i++) {
      s<<vector[i].imprimir_datos()<<endl;
    }
    return s.str();
  }

private:
  PERSONA vector[10];
  int cantidad;
  int tamanio;
};

int main(void){
  CONTENEDOR Cont1;
  PERSONA Per1("Miguel", "Arrollo", 25);
  PERSONA Per2("Alonso", "Camargo", 38);

  Cont1.ingresar_per(Per1);
  Cont1.ingresar_per(Per2);
  //cout<<Per1.imprimir_datos()<<endl;
  //cout<<Per2.imprimir_datos()<<endl;
  cout<<Cont1.imprimir_conte()<<endl;
  
  return 0;
}
