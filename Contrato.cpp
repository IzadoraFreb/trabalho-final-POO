#include "Contrato.h"
#include <iostream>

Contrato::Contrato() {
    numero = 0;
    valorTotal = 0;
    qtdParcelas = 0;
}

double Contrato::calcularValorParcela() {
    if (qtdParcelas > 0) {
        return valorTotal / qtdParcelas; //retorna valor da parcela
    }
    return 0;
}

void Contrato::gerarParcelas() {
    parcelas.clear(); //limpa o vetor de parcelas antes de gerar novas
    double valorParcela = calcularValorParcela();
    for (int i = 1; i <= qtdParcelas; i++) {
        Parcela parcela;
        parcela.setNumero(i);
        parcela.setValor(valorParcela);
        parcelas.push_back(parcela); //adiciona a parcela ao vetor
    }
}

void Contrato::exibirContrato() {
    std::cout << "--- Contrato " << numero << " ---" << std::endl;
    std::cout << "Valor Total: R$ " << valorTotal << std::endl;
    std::cout << "Parcelado em: " << qtdParcelas  << std::endl;
    for (auto parcela : parcelas) {
        std::cout << "Parcela " << parcela.getNumero() << ": R$ " << parcela.getValor();
        if (parcela.estaPaga()) {
            std::cout << " - Pago" << std::endl;
        } else {
            std::cout << " - Aberto" << std::endl;
        }
    }
}
