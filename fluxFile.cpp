#include<iostream>
#include<fstream>
#include<vector>

#define FILE_NAME "archivo_pruebas.txt"

using namespace std;

class Animal{
public:
  Animal(string nombre, int edad){
    this->nombre=nombre;
    this->edad=edad;
  }

  friend ostream& operator << (ostream &os, Animal &a){
    os << "Nombre: " << a.nombre << endl;
    os << "Edad: " << a.edad << endl;

  }
  char nombre[MAX_CHAR];
  int edad;
};

void ejemplo1();
void ejemplo2();

int main(void){
  vector<Animal*> animales;
  vector<Animal*>animalito;
  ofstream animalitosFile(ANIMALITOS_FILE, ios::binary);
  ifstream leeAnimales;

  animales.push_back(new Animal("Firulais", 8));
  animales.push_back(new Animal("Doggo", 7));
  animales.push_back(new Animal("Silvestre", 10));

  animalitosFile.open(ios::binary);
  if (!animalitosFile.is_open()) {
    cerr<<"No se pudo abrir el archivo"<<FILE_NAME<<endl;
    return 0;
  }
  //FILE * archivito=fopen("Nombre:",)

  for (size_t i = 0; i < animales.size(); i++) {
    //cout<< *(animales[i])<<endl;
    animalitosFile.write((char*) animales[i], sizeof(Animal));
  }

  animalitosFile.close();

  leeAnimales.open(ANIMALITOS_FILE, ios::binary);
  if (!animalitosFile.is_open()) {
    cerr<<"No se pudo abrir el archivo"<<FILE_NAME<<endl;
    return 0;
  }

  do {
    Animal * animalito=new Animal;
    leeAnimales.read((char*) animalito, sizeof(Animal));
    animalesLeidos.push_back(animalito);
  } while(!leeAnimales.eof());

  for (size_t i = 0; i < animalesLeidos.sizeof(); i++) {
    cout<< *(animalito[i])<<endl;
  }

  return 0;
}

void ejemplo1(){
  oftream archivito(FILE_NAME);
  if(!archivito.is_open()){
    cerr<<"No se pudo abrir el archivo"<<FILE_NAME<<endl;
    return;
  }
  else{
    archivito<<"Mira estoy escribiendo :D"<<endl;

    archivito.close();
  }
}

vois ejemplo2(){
  ifstream archivito(FILE_NAME);

  if (!archivito.is_open()) {
    cerr<<"No se pudo abrir el archivo"<<FILE_NAME<<endl;
    return;
  }
  else{
    string buffer;

    do {
      getline(archivito, buffer);
      cout<<buffer<<endl;
    } while(!archivito.eof());
    archivito.close();
  }
}
