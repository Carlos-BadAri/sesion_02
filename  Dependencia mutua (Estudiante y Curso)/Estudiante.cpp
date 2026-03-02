#include <iostream>
#include "Estudiante.h"
#include "Curso.h"

Estudiante::Estudiante(string nombre)
    : nombre(nombre), curso(nullptr) {}

void Estudiante::inscribirse(Curso* c) {
    curso = c;
}

void Estudiante::mostrarCurso(){
    if (curso != nullptr) {
        cout << "Estudiante: " << nombre<< " esta inscrito en el curso: "<< curso->getNombre() << std::endl;
    } else {
        cout << "Estudiante: " << nombre<< " no esta inscrito en ningun curso."<< endl;
    }
}