#include "Pessoa.h"
#include <iostream>

//construtor
Pessoa::Pessoa() {
    this->nome = "";
    this->cpf = "";
    this->telefone = "";
}


void Pessoa::exibirDados() {
    std::cout << "--- Dados ---" << std::endl;
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "CPF: " << cpf << std::endl;
    std::cout << "Telefone: " << telefone << std::endl;
}