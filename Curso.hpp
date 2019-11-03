#ifndef Curso_hpp
#define Curso_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
#include "Estudiante.cpp"

class Curso {
private:
    string nombre;
    string codigo;
    Estudiante *alumno;
    int cantidaAlumnos;
    void copiarArr(Estudiante a[],Estudiante b[],int tam);
    void addCantidad();
    void deleteCantidad();
public:
    Curso();
    Curso(string nombre_,string codigo_, int tam);
    Curso(const Curso &otro);
    ~Curso();
    void addAlumno(Estudiante nuevo);
    void addAlumno(Estudiante nuevo,int pos);
    void deleteAlumno(int pos);
    void chanceAlumno(Estudiante nuevo,int pos);
    void editAlumnoNombre(int pos,string nombre_);
    void editAlumnoApellido(int pos,string apellido_);
    void editAlumnoCodigo(int pos,string codigo_);
    string getNombreCurso();
    string getCodigoCurso();
    int getCantidaAlumnos();
    Estudiante getAlumno(int posicion);
    void editNombreCurso(string nombre_);
    void editCodigoCurso(string codigo_);
};


#endif
