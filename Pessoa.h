#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

class Pessoa {
    private:
        std::string nome;
        std::string cpf;
        std::string telefone;

    public:
        Pessoa();

        void setNome(std::string nome) {
            this->nome = nome;
        }
        std::string getNome() {
            return nome;
        }

        void setCpf(std::string cpf) {
            this->cpf = cpf;
        }
        std::string getCpf() {
            return cpf;
        }

        void setTelefone(std::string telefone) {
            this->telefone = telefone;
        }
        std::string getTelefone() {
            return telefone;
        }

        virtual void exibirDados() const {
            std::cout << "--- Dados da Pessoa ---" << std::endl;
            std::cout << "Nome: " << this->nome << std::endl;
            std::cout << "CPF: " << this->cpf << std::endl;
            std::cout << "Telefone: " << this->telefone << std::endl;
        }
};
#endif