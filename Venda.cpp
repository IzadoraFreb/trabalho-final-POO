#include "Venda.h"

Venda::Venda() {
    numero = 0;
    data = "";
}

Contrato Venda::realizarVenda(Aluno aluno, Curso curso, Funcionario funcionario, int qtdParcelas) {
    Contrato contrato;
    contrato.setNumero(numero);
    contrato.setValorTotal(curso.getValor());
    contrato.setQtdParcelas(qtdParcelas);
    contrato.gerarParcelas();
    return contrato;
}