#include "Funcionario.h"
#include <iostream> 

Funcionario::Funcionario() {
    cargo = "";
}

void Funcionario::exibirDados() {
    Pessoa::exibirDados(); //chama o método da classe pai(pessoa) para exibir os dados comuns
    std::cout << "Cargo: " << cargo << std::endl;
}