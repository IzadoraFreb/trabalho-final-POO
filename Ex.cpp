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
                do{
                    cout << "\nNome: ";
                    getline(cin, nome);
                    if(nome.empty()) {
                        cout << "\nNome invalido, tente novamente.\n";
                    }
                } while(nome.empty());

                do{
                    cout << "CPF: ";
                    getline(cin, cpf);
                    if(cpf.empty()) {
                        cout << "\nCPF invalido, tente novamente.\n";
                    }
                } while(cpf.empty());

                 do{
                    cout << "Telefone: ";
                    getline(cin, telefone);
                    if(telefone.empty()) {
                        cout << "\nTelefone invalido, tente novamente.\n";
                    } 
                } while(telefone.empty());

                 do{
                    cout << "Matricula: ";
                    cin >> matricula;
                    if(matricula <= 0) {
                        cout << "\nMatricula invalida, tente novamente.\n";
                    }
                 }while(matricula <= 0);

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
                do{
                    cout << "\nNome: ";
                    getline(cin, nome);
                    if(nome.empty()) {
                        cout << "\nNome invalido, tente novamente.\n";
                    }
                } while(nome.empty());

                do{
                    cout << "CPF: ";
                    getline(cin, cpf);
                    if(cpf.empty()) {
                        cout << "\nCPF invalido, tente novamente.\n";
                    }
                } while(cpf.empty());

                do{
                    cout << "Telefone: ";
                    getline(cin, telefone);
                    if(telefone.empty()) {
                        cout << "\nTelefone invalido, tente novamente.\n";
                    }
                } while(telefone.empty());

                do{
                    cout << "Cargo: ";
                    getline(cin, cargo);
                    if(cargo.empty()) {
                        cout << "\nCargo invalido, tente novamente.\n";
                    }
                } while(cargo.empty());

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
                do{
                    cout << "\nCodigo: ";
                    cin >> codigo;
                    cin.ignore();
                    if(codigo <= 0) {
                        cout << "\nCodigo invalido, tente novamente.\n";
                    }
                } while(codigo <= 0);

                do{
                    cout << "Nome: ";
                    getline(cin, nome);
                    if(nome.empty()) {
                        cout << "\nNome invalido, tente novamente.\n";
                    }
                } while(nome.empty());

                do{
                    cout << "Valor: ";
                    cin >> valor;
                    if(valor < 0) {
                        cout << "\nValor invalido, tente novamente.\n";
                    }
                } while(valor < 0);

                curso.setCodigo(codigo);
                curso.setNome(nome);
                curso.setValor(valor);
                cursos.push_back(curso);

                cout << "\n---Curso cadastrado com sucesso!---\n";
                break;
            }
            case 4:{
                if(alunos.empty() || funcionarios.empty() || cursos.empty()) {
                    cout << "\nCadastre pelo menos um aluno, funcionario e curso antes da venda.\n";
                    break;
                }

                int indiceAluno;
                int indiceFuncionario;
                int indiceCurso;
                int qtdParcelas;

                cout << "\n=== ALUNOS ===\n";
                for(size_t i = 0; i < alunos.size(); i++) {
                    cout << i + 1 << " - " << alunos[i].getNome() << std::endl;
                }
                do{
                    cout << "Escolha o aluno: ";
                    cin >> indiceAluno;
                    indiceAluno--; //busca pelo indice correto do aluno escolhido
                    if (indiceAluno < 0 || indiceAluno >= alunos.size()){
                        cout << "\nAluno invalido, tente novamente.\n";
                    }
                } while(indiceAluno < 0 || indiceAluno >= alunos.size());


                cout << "\n=== FUNCIONARIOS ===\n";
                for(size_t i = 0; i < funcionarios.size(); i++) {
                    cout << i + 1 << " - " << funcionarios[i].getNome() << std::endl;
                }
                do{
                    cout << "Escolha o funcionario: ";
                    cin >> indiceFuncionario;
                    indiceFuncionario--;
                    if (indiceFuncionario < 0 || indiceFuncionario >= funcionarios.size()){
                        cout << "\nFuncionario invalido, tente novamente.\n";
                    }
                }while(indiceFuncionario < 0 || indiceFuncionario >= funcionarios.size());

                cout << "\n=== CURSOS DISPONIVEIS ===\n";
                for(size_t i = 0; i < cursos.size(); i++) {
                    cout << i + 1 << " - " << cursos[i].getNome() << " (R$ " << cursos[i].getValor() << ")" << std::endl;
                }
                do{
                cout << "Escolha o curso: ";
                    cin >> indiceCurso;
                    indiceCurso--;
                    if (indiceCurso < 0 || indiceCurso >= cursos.size()){
                        cout << "\nCurso invalido, tente novamente.\n";
                    }
                } while(indiceCurso < 0 || indiceCurso >= cursos.size());

                cout << "Quantidade de parcelas:";
                cin >> qtdParcelas;

                Venda venda;
                venda.setNumero(contratos.size() + 1);

                Contrato contrato = venda.realizarVenda(alunos[indiceAluno], cursos[indiceCurso], 
                                    funcionarios[indiceFuncionario], qtdParcelas);
                contratos.push_back(contrato);

                cout << "\nVenda realizada com sucesso!\n";

                break;
            }
            case 5: {
                cout << "\n=====LISTA DE ALUNOS =====\n";
                for(size_t i = 0; i < alunos.size(); i++) {
                    cout << "\nAluno " << i + 1 << endl;
                    alunos[i].exibirDados();
                }
                break;
            }
            case 6: {
                cout << "\n===== LISTA DE CURSOS =====\n";
                for(size_t i = 0; i < cursos.size(); i++) {
                    cout << "\nCurso " << i + 1 << endl;
                    cursos[i].exibirCursos();
                }
                break;
            }
            case 7: {
                cout << "\n===== LISTA DE CONTRATOS =====\n";
                for(size_t i = 0; i < contratos.size(); i++) {
                    contratos[i].exibirContrato();
                }
                break;
            }
        } 
    } while(opcao != 0);

    return 0;
}