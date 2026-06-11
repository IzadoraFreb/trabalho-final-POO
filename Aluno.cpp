#include "Aluno.h"
#include <iostream>

Aluno::Aluno() {
    matricula = 0;
}

void Aluno::exibirDados() {
    Pessoa::exibirDados(); //chama o método da classe pai(pessoa) para exibir os dados comuns
    std::cout << "Matricula: " << matricula << std::endl;
}