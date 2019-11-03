#include <iostream>
#include "Estudiante.cpp"
using namespace std;

main(){
  Estudiante primero("Juan","Ramirez","1");
  Estudiante segundo("Elena","Casas","2");
  cout<<primero.getNombre()<<","<<primero.getApellido()<<","<<primero.getCodigo()<<endl;
  cout<<endl;
  cout<<segundo.getNombre()<<","<<segundo.getApellido()<<","<<segundo.getCodigo()<<endl;
}
