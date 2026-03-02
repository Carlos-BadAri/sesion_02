#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Curso;  // Forward declaration, recordar que sin esto se hace una dependencia circular

class Estudiante {
private:
    string nombre;
    Curso* curso;

public:
    Estudiante(string);

    void inscribirse(Curso* );
    void mostrarCurso();
};

#endif