#include "Estudiante.hpp"

Estudiante::Estudiante(){
  nombre="";
  apellido="";
  codigo="";
}
Estudiante::Estudiante(string nombre_,string apellido_,string codigo_){
  nombre=nombre_;
  apellido=apellido_;
  codigo=codigo_;
}
Estudiante::Estudiante(const Estudiante &otro){
  nombre=otro.nombre;
  apellido=otro.apellido;
  codigo=otro.codigo;
}
Estudiante::~Estudiante(){
}
string Estudiante::getNombre(){
  return nombre;
}
string Estudiante::getApellido(){
  return apellido;
}
string Estudiante::getCodigo(){
  return codigo;
}
void Estudiante::editNombre(string nombre_){
  nombre=nombre_;
}
void Estudiante::editApellido(string apellido_){
  apellido=apellido_;
}
void Estudiante::editCodigo(string codigo_){
  codigo=codigo_;
}
