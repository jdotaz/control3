#ifndef Empleado_hpp
#define Empleado_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

class Empleado {
private:
  string nombre;
  string apellido;
  double salario;
public:
  Empleado();
  Empleado(string nombre_,string apellido_,double salario_);
  Empleado(const Empleado &otro);
  ~Empleado();
  string getNombre();
  string getApellido();
  double getSalario();
  void editNombre(string nombre_);
  void editApellido(string apellido_);
  void editSalario(double salario_);
  void reducirSalarioPorcentaje(double porcentaje);
};


#endif /* Empleado_hpp */
