#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "Pessoa.h"
#include <string>

class Funcionario : public Pessoa {
    private:
        std::string cargo;

    public:
        Funcionario();

        void setCargo(std::string cargo){
            this->cargo = cargo;
        }
        std::string getCargo(){
            return this->cargo;
        };

        void exibirDados() override;

};
#endif