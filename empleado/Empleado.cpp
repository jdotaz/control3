#include "Empleado.hpp"

Empleado::Empleado(){
  nombre="";
  apellido="";
  salario=0;
}
Empleado::Empleado(string nombre_,string apellido_,double salario_){
  nombre=nombre_;
  apellido=apellido_;
  if (salario_>0){
    salario=salario_;
  }else{
    salario=0;
  }
}
Empleado::Empleado(const Empleado &otro){
  nombre=otro.nombre;
  apellido=otro.apellido;
  salario=otro.salario;
}
Empleado::~Empleado(){
}
string Empleado::getNombre(){
  return nombre;
}
string Empleado::getApellido(){
  return apellido;
}
double Empleado::getSalario(){
  return salario;
}
void Empleado::editNombre(string nombre_){
  nombre=nombre_;
}
void Empleado::editApellido(string apellido_){
  apellido=apellido_;
}
void Empleado::editSalario(double salario_){
  salario=salario_;
}
void Empleado::reducirSalarioPorcentaje(double porcentaje){
  salario=salario-(salario*(porcentaje/100));
}
