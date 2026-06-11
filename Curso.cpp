#include "Curso.h"
#include <iostream>

Curso::Curso() {
    codigo = 0;
    nome = "";
    valor = 0.0;
}

void Curso::exibirCursos() {
    std::cout << "--- Curso ---" << std::endl;
    std::cout << "Código: " << codigo << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Valor: R$ " << valor << std::endl;
}