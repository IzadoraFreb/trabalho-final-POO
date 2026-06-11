# Sistema de Matrículas para Escola de Cursos

Projeto desenvolvido para a disciplina de Programação Orientada a Objetos utilizando C++.

O sistema permite:
- Cadastrar alunos
- Cadastrar funcionários
- Cadastrar cursos
- Realizar vendas
- Gerar contratos
- Gerar parcelas automaticamente
- Listar informações cadastradas

## Conceitos Aplicados

- Encapsulamento
- Herança
- Composição
- Polimorfismo (override)
- Construtores
- Manipulação de objetos em memória

## Compilação

### Terminal

```bash
g++ *.cpp -o programa
./programa
```

### Code Runner no VS Code

Adicionar no `settings.json`:

```json
"code-runner.executorMap": {
    "cpp": "cd $dir && g++ *.cpp -o programa && ./programa"
}
```