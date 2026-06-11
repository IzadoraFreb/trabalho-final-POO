#ifndef VENDA_H
#define VENDA_H

#include <string>
#include "Aluno.h"
#include "Funcionario.h"
#include "Curso.h"
#include "Contrato.h"

class Venda {
    private:
        int numero;
        std::string data;

    public:
        Venda();

        void setNumero(int numero){
            this->numero = numero;
        }
        int getNumero(){
            return this->numero;
        }

        void setData(std::string data){
            this->data = data;
        }
        std::string getData(){
            return this->data;
        };

        Contrato realizarVenda(Aluno aluno, Curso curso, Funcionario funcionario, int qtdParcelas);
};
#endif