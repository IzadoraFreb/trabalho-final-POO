#ifndef PARCELA_H
#define PARCELA_H

class Parcela{
    private:
        int numero;
        double valor;
        bool paga;

    public:
        Parcela();

        void setNumero(int numero){
            this->numero = numero;
        }
        int getNumero(){
            return this->numero;
        };

        void setValor(double valor){
            this->valor = valor;
        }
        double getValor(){
            return this->valor;
        };

        bool estaPaga();

        void registrarPagamento();
};

#endif