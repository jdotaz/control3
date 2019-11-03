#include <iostream>
#include "Curso.cpp"
using namespace std;

int main(){
  Estudiante Juan("Juan","Ramirez","1");
  Estudiante Elena("Elena","Casas","2");

  Curso primero;
  cout<<primero.getNombreCurso()<<","<<primero.getCodigoCurso()<<","<<primero.getCantidaAlumnos()<<endl;
  primero.editNombreCurso("Matematica");
  primero.editCodigoCurso("122");
  primero.addAlumno(Juan);
  cout<<primero.getNombreCurso()<<","<<primero.getCodigoCurso()<<","<<primero.getCantidaAlumnos()<<endl;

  Curso segundo("Ingles","123");
  segundo.addAlumno(Juan);
  segundo.addAlumno(Elena);
  cout<<(segundo.getAlumno(0)).getNombre()<<","<<(segundo.getAlumno(0)).getCodigo()<<endl;
  segundo.deleteAlumno(0);
  cout<<(segundo.getAlumno(0)).getNombre()<<","<<(segundo.getAlumno(0)).getCodigo()<<endl;
  segundo.chanceAlumno(Juan,0);
  cout<<(segundo.getAlumno(0)).getNombre()<<","<<(segundo.getAlumno(0)).getCodigo()<<endl;
}
