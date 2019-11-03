#ifndef Estudiante_hpp
#define Estudiante_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Estudiante {
private:
  string nombre;
  string apellido;
  string codigo;
public:
  Estudiante();
  Estudiante(string nombre_,string apellido_,string codigo_);
  Estudiante(const Estudiante &otro);
  ~Estudiante();
  string getNombre();
  string getApellido();
  string getCodigo();
  void editNombre(string nombre_);
  void editApellido(string apellido_);
  void editCodigo(string codigo_);
};

#endif
