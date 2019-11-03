#include <iostream>
#include "Empleado.cpp"
using namespace std;

main(){
  Empleado Jose("Jose","Paz",3020);
  Empleado Luis("Luis","Valencia",2980);
  cout<<"Salarios:"<<endl;
  cout<<Jose.getSalario()<<endl;
  cout<<Luis.getSalario()<<endl;
  Jose.reducirSalarioPorcentaje(10);
  Luis.reducirSalarioPorcentaje(10);
  cout<<endl;
  cout<<"Nuevos salarios:"<<endl;
  cout<<Jose.getSalario()<<endl;
  cout<<Luis.getSalario()<<endl;
}
