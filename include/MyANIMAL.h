#ifndef MyANIMAL_H
#define MyANIMAL_H
#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class ANIMAL{
  public:
    ANIMAL(string nom, int id);
    void set_nombre(string nom);
    string get_nombre();
    void set_id(int id);
    int get_id();
    string imprimir_animal();
    ~ANIMAL();

  protected:
    string name;
    int id;
};

#endif
