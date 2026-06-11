#include "Parcela.h"

Parcela::Parcela() {
    numero = 0;
    valor = 0.0;
    paga = false;
}

void Parcela::registrarPagamento() {
    paga = true;
}

bool Parcela::estaPaga() {
    return paga;
}