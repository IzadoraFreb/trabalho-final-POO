#ifndef CURSO_H
#define CURSO_H

#include <string>

class Curso {
    private:
        int codigo;
        std::string nome;
        double valor;

    public:
        Curso();

        void setCodigo(int codigo){
            this->codigo = codigo;
        }
        int getCodigo(){
            return this->codigo;
        };

        void setNome(std::string nome){
            this->nome = nome;
        }
        std::string getNome(){
            return this->nome;
        };

        void setValor(double valor){
            this->valor = valor;
        }
        double getValor(){
            return this->valor;
        };

        void exibirCursos();

};
#endif