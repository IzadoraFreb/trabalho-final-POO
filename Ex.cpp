// O Run Code compila só o arquivo aberto, causando erros com múltiplos .cpp/.h
// Solução: Settings (Ctrl+,) em "code-runner.executorMap" em "Edit in settings.json"
// Adicionar: "cpp": "cd $dir && g++ *.cpp -o programa && ./programa" para compilar todos

#include <iostream>
#include <vector>
#include "Aluno.h"
#include "Funcionario.h"
#include "Curso.h"
#include "Venda.h"
#include "Contrato.h"
using namespace std;

int main() {

    vector<Aluno> alunos;
    vector<Funcionario> funcionarios;
    vector<Curso> cursos;
    vector<Contrato> contratos;
    int opcao;

    do {
        cout << "\n===== SISTEMA DE MATRICULAS =====\n";
        cout << "1 - Cadastrar aluno\n";
        cout << "2 - Cadastrar funcionario\n";
        cout << "3 - Cadastrar curso\n";
        cout << "4 - Realizar venda\n";
        cout << "5 - Listar contratos\n";
        cout << "0 - Sair\n";

        cout << "\nEscolha uma opcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1: {
                Aluno aluno;
                string nome;
                string cpf;
                string telefone;
                int matricula;

                cout << "\n--- Cadastrando Aluno ---";
                cin.ignore();
                cout << "\nNome: ";
                getline(cin, nome);

                cout << "CPF: ";
                getline(cin, cpf);

                cout << "Telefone: ";
                getline(cin, telefone);

                cout << "Matricula: ";
                cin >> matricula;

                aluno.setNome(nome);
                aluno.setCpf(cpf);
                aluno.setTelefone(telefone);
                aluno.setMatricula(matricula);
                alunos.push_back(aluno);

                cout << "\n---Aluno cadastrado com sucesso!---\n";
                break;
            }
            case 2:{
                Funcionario funcionario;
                string nome;
                string cpf;
                string telefone;
                string cargo;

                cin.ignore();
                cout << "\n--- Cadastrando Funcionario ---";
                cout << "\nNome: ";
                getline(cin, nome);

                cout << "CPF: ";
                getline(cin, cpf);

                cout << "Telefone: ";
                getline(cin, telefone);

                cout << "Cargo: ";
                getline(cin, cargo);

                funcionario.setNome(nome);
                funcionario.setCpf(cpf);
                funcionario.setTelefone(telefone);
                funcionario.setCargo(cargo);
                funcionarios.push_back(funcionario);

                cout << "\n---Funcionario cadastrado com sucesso!---\n";
                break;
            }
            case 3: {
                Curso curso;
                int codigo;
                string nome;
                double valor;

                cout << "\n--- Cadastrando Curso ---";
                cout << "\nCodigo: ";
                cin >> codigo;
                cin.ignore();

                cout << "Nome: ";
                getline(cin, nome);

                cout << "Valor: ";
                cin >> valor;

                curso.setCodigo(codigo);
                curso.setNome(nome);
                curso.setValor(valor);
                cursos.push_back(curso);

                cout << "\n---Curso cadastrado com sucesso!---\n";
                break;
            }
            case 4:
                break;
            case 5:
                break;
        }
    } while(opcao != 0);

    return 0;

}