#include <iostream>
#include "Empleado.cpp"
using namespace std;


void sawp(Empleado arr[],int x,int y)
{
  Empleado c=arr[x];
  arr[x]=arr[y];
  arr[y]=c;
}
void burbuja(Empleado arr[],int tam){
  bool cambio=true;
  while (cambio){
    cambio=false;
    for(int i=0;i<tam-1;i++){
      if (static_cast<int>(arr[i].getNombre()[0])>static_cast<int>(arr[i+1].getNombre()[0])){
        sawp(arr,i,i+1);
        cambio=true;
      }
    }
    tam--;
  }
}

main(){
  int tam;
  cin>>tam;
  Empleado *array=new Empleado[tam];
  for(int i=0;i<tam;i++){
    string nombre;
    cin>>nombre;
    array[i].editNombre(nombre);
  }
  burbuja(array,tam);
  for(int i=0;i<tam;i++){
    cout<<array[i].getNombre()<<endl;
  }

}
