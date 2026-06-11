#ifndef CONTRATO_H
#define CONTRATO_H

#include "Parcela.h"
#include <vector>

class Contrato {
    private:
        int numero;
        double valorTotal;
        int qtdParcelas;
        std::vector<Parcela> parcelas;

    public:
        Contrato();

        std::vector<Parcela> getParcelas() {
            return parcelas;
        }

        void setNumero(int numero){
            this->numero = numero;
        } 
        int getNumero(){
            return this->numero;
        };

        void setValorTotal(double valorTotal){
            this->valorTotal = valorTotal;
        }
        double getValorTotal(){
            return this->valorTotal;
        };

        void setQtdParcelas(int qtdParcelas){
            this->qtdParcelas = qtdParcelas;
        }
        int getQtdParcelas(){
            return this->qtdParcelas;
        };


        double calcularValorParcela();
        void gerarParcelas();

        void exibirContrato();
};
#endif 