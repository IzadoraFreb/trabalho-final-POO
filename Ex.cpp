// O Run Code do vscode compila só o arquivo aberto e causa erros com múltiplos .cpp/.h
//  Settings (Ctrl+,) em "code-runner.executorMap" em "Edit in settings.json"
// Adicionar: "cpp": "cd $dir && g++ *.cpp -o programa && ./programa" para compilar todos

#include <iostream>
#include <vector>
#include "Aluno.h"
#include "Funcionario.h"
#include "Curso.h"
#include "Venda.h"
#include "Contrato.h"
using namespace std;

int main(){

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
        cout << "5 - Listar alunos\n";
        cout << "6 - Listar cursos\n";
        cout << "7 - Listar contratos\n";
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
            case 4:{
                if(alunos.empty() || funcionarios.empty() || cursos.empty()) {
                    std::cout << "\nCadastre pelo menos um aluno, funcionario e curso antes da venda.\n";
                    break;
                }

                int indiceAluno;
                int indiceFuncionario;
                int indiceCurso;
                int qtdParcelas;

                std::cout << "\n=== ALUNOS ===\n";
                for(size_t i = 0; i < alunos.size(); i++) {
                    std::cout << i + 1 << " - " << alunos[i].getNome() << std::endl;
                }
                std::cout << "Escolha o aluno: ";
                std::cin >> indiceAluno;
                indiceAluno--; //busca pelo indice correto do aluno escolhido
                if (indiceAluno <=0 || indiceAluno >= alunos.size()){
                    std::cout << "\nAluno invalido, tente novamente.\n";
                    break;
                }

                std::cout << "\n=== FUNCIONARIOS ===\n";
                for(size_t i = 0; i < funcionarios.size(); i++) {
                    std::cout << i + 1 << " - " << funcionarios[i].getNome() << std::endl;
                }
                std::cout << "Escolha o funcionario: ";
                std::cin >> indiceFuncionario;
                indiceFuncionario--;
                if (indiceFuncionario <=0 || indiceFuncionario >= funcionarios.size()){
                    std::cout << "\nFuncionario invalido, tente novamente.\n";
                    break;
                }

                std::cout << "\n=== CURSOS ===\n";
                for(size_t i = 0; i < cursos.size(); i++) {
                    std::cout << i + 1 << " - " << cursos[i].getNome() << " (R$ " << cursos[i].getValor() << ")" << std::endl;
                }
                std::cout << "Escolha o curso: ";
                std::cin >> indiceCurso;
                indiceCurso--;
                if (indiceCurso <=0 || indiceCurso >= cursos.size()){
                    std::cout << "\nCurso invalido, tente novamente.\n";
                    break;
                }

                std::cout << "Quantidade de parcelas:";
                std::cin >> qtdParcelas;

                Venda venda;
                venda.setNumero(contratos.size() + 1);

                Contrato contrato = venda.realizarVenda(alunos[indiceAluno], cursos[indiceCurso], 
                                    funcionarios[indiceFuncionario], qtdParcelas);
                contratos.push_back(contrato);

                std::cout << "\nVenda realizada com sucesso!\n";
                contrato.exibirContrato();
                break;
            }
            case 5: {
                cout << "\n===== ALUNOS =====\n";
                for(size_t i = 0; i < alunos.size(); i++) {
                    cout << "\nAluno " << i + 1 << endl;
                    alunos[i].exibirDados();
                }
                break;
            }
            case 6: {
                cout << "\n===== CURSOS =====\n";
                for(size_t i = 0; i < cursos.size(); i++) {
                    cout << "\nCurso " << i + 1 << endl;
                    cursos[i].exibirCursos();
                }
                break;
            }
            case 7: {
                cout << "\n===== LISTA DE CONTRATOS =====\n";
                for(size_t i = 0; i < contratos.size(); i++) {
                    cout << "\nContrato " << i + 1 << endl;
                    contratos[i].exibirContrato();
                }
                break;
            }
        } 
    } while(opcao != 0);

    return 0;
}