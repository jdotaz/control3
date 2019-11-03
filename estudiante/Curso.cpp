#include "Curso.hpp"

void Curso::copiarArr(Estudiante a[],Estudiante b[],int tam){
  for(int i=0;i<tam;i++){
    a[i]=b[i];
  }
}
void Curso::addCantidad(){
  Estudiante *guar=new Estudiante[cantidaAlumnos];
  copiarArr(guar,alumno,cantidaAlumnos);
  delete[] alumno;
  alumno=new Estudiante[cantidaAlumnos+1];
  copiarArr(alumno,guar,cantidaAlumnos);
  cantidaAlumnos++;
  delete[] guar;
}
void Curso::deleteCantidad(){
  Estudiante *guar=new Estudiante[cantidaAlumnos];
  copiarArr(guar,alumno,cantidaAlumnos);
  delete[] alumno;
  alumno=new Estudiante[cantidaAlumnos-1];
  copiarArr(alumno,guar,cantidaAlumnos-1);
  cantidaAlumnos--;
  delete[] guar;
}
Curso::Curso(){
  nombre="";
  codigo="";
  cantidaAlumnos=0;
  alumno=new Estudiante[cantidaAlumnos];
}
Curso::Curso(string nombre_,string codigo_, int tam=0){
  nombre=nombre_;
  codigo=codigo_;
  cantidaAlumnos=tam;
  alumno=new Estudiante[cantidaAlumnos];
}
Curso::Curso(const Curso &otro){
  nombre=otro.nombre;
  codigo=otro.codigo;
  cantidaAlumnos=otro.cantidaAlumnos;
  copiarArr(alumno,otro.alumno,cantidaAlumnos);
}
Curso::~Curso(){
  delete[] alumno;
}
void Curso::addAlumno(Estudiante nuevo){
  addCantidad();
  alumno[cantidaAlumnos-1]=nuevo;
}
void Curso::addAlumno(Estudiante nuevo,int pos){
  addCantidad();
  for(int i=cantidaAlumnos-1;i>pos;i--){
    alumno[i]=alumno[i-1];
  }
  alumno[pos]=nuevo;
}
void Curso::deleteAlumno(int pos){
  alumno[pos].~Estudiante();
  for(int i=pos;i<cantidaAlumnos-1;i++){
    alumno[i]=alumno[i+1];
  }
  deleteCantidad();
}
void Curso::chanceAlumno(Estudiante nuevo,int pos){
  alumno[pos].~Estudiante();
  alumno[pos]=nuevo;
}

void Curso::editAlumnoNombre(int pos,string nombre_){
  alumno[pos].editNombre(nombre_);
}
void Curso::editAlumnoApellido(int pos,string apellido_){
  alumno[pos].editApellido(apellido_);
}
void Curso::editAlumnoCodigo(int pos,string codigo_){
  alumno[pos].editCodigo(codigo_);
}

string Curso::getNombreCurso(){
  return nombre;
}
string Curso::getCodigoCurso(){
  return codigo;
}
int Curso::getCantidaAlumnos(){
  return cantidaAlumnos;
}

Estudiante Curso::getAlumno(int posicion){
  return alumno[posicion];
}
void Curso::editNombreCurso(string nombre_){
  nombre=nombre_;
}
void Curso::editCodigoCurso(string codigo_){
  codigo=codigo_;
}
