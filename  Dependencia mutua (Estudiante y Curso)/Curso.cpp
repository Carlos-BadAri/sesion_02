#include <iostream>
#include "Curso.h"
#include "Estudiante.h"

Curso::Curso(string nombre)
    : nombreCurso(nombre), estudiante(nullptr) {}

void Curso::asignarEstudiante(Estudiante* e) {
    estudiante = e;
}

void Curso::mostrarEstudiante(){
    if (estudiante != nullptr) {
        cout << "El curso " << nombreCurso << " tiene un estudiante asignado."<<endl;
    } else {
        cout << "El curso " << nombreCurso<< " no tiene estudiante asignado."<< endl;
    }
}

std::string Curso::getNombre() {
    return nombreCurso;
}