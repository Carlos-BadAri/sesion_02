#include "Estudiante.h"
#include "Curso.h"

int main() {

    Estudiante e1("Carlos");
    Curso c1("Programacion");

    e1.inscribirse(&c1);
    c1.asignarEstudiante(&e1);

    e1.mostrarCurso();
    c1.mostrarEstudiante();

    return 0;
}