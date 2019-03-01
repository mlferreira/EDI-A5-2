# Calculadora com Operações Pós-Fixadas

Atividade prática de Estrutura de Dados I, com o objetivo principal de fundamentar os conceitos de listas encadeadas, filas e pilhas promovendo a utilização correta dos espaços de memória.

## Definição do Problema

Implementação de uma calculadora com operações pós-fixadas. 
A notação pós-fixada consiste em primeiro inserir os operandos para apenas depois inserir os operadores (`+`, `-`, `*`, `/` e `ˆ`). 

Seu programa deverá imprimir o resultado atual da operação quando encontrar o `=` e terminar quando encontrar `;`. 

Ao encontrar o `=`, caso a pilha não tenha um único valor (tamanho 1), o programa deverá imprimir o texto `Entrada inconsistente.` na saída, limpar a pilha e iniciar um novo cálculo. 

### Exemplo

Entrada: 

> 1 
> 2 
> 4
> 5
> +
> *
> =
> ;


Saída: 
```
-9
```


Entrada: 

> 1
> 2
> 3
> +
> =
> ;


Saída: 
```
Entrada inconsistente.
```


### Entrada

Cada linha da entrada contém um número, um operador, ou igual. 
Há um exemplo de entrada no arquivo `test/entrada.txt`.


## Instalação e Execução


### Linux

```
make all
```

```
make run
```
ou (para rodar o exemplo)
```
make teste
```

### Windows

```
g++ -o a5ex2 src/main.cpp src/TPilha.h src/TPilha.cpp
```

```
a5ex2
```
ou (para rodar o exemplo)
```
a5ex2 < test/entrada.txt
```