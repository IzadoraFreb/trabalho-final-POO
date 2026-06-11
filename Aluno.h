#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

class Aluno : public Pessoa {
    private:
        int matricula;

    public:
        Aluno();

        void setMatricula(int matricula) {
            this->matricula = matricula;
        }
        int getMatricula(){
            return this->matricula;
        };

        void exibirDados() override;

};

#endif