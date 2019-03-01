/**********************************************************************/
/*                                                                    */
/*                        Estrutura de Dados I                        */
/*                      Prática 04 - Exercício 2                      */
/*                                                                    */
/*                               2016-1                               */
/*                                                                    */
/*                        Melina Lopes Ferreira                       */
/*                              15.2.4002                             */
/*                                                                    */
/**********************************************************************/

#include <iostream>
#include "TPilha.h"
using namespace std;

int potencia(int a, int b);
int charInt(char c);

int main(){
	
	TPilha * pilha;
	TItem x, opA, opB;
	char c;
	
	pilha = TPilha_Inicia();
	
	cin >> c;
	
	while (c != ';'){
		
		
		if(c == '+'){
			if(TPilha_EhVazia(pilha) == 0){
				TPilha_Pop(pilha, &opA);
				TPilha_Pop(pilha, &opB);
				x.chave = opA.chave + opB.chave;
				TPilha_Push(pilha, x);
			}			
		}else if(c == '-'){
			if(TPilha_EhVazia(pilha) == 0){
				TPilha_Pop(pilha, &opA);
				TPilha_Pop(pilha, &opB);
				x.chave = opA.chave - opB.chave;
				TPilha_Push(pilha, x);
			}
		}else if(c == '*'){
			if(TPilha_EhVazia(pilha) == 0){
				TPilha_Pop(pilha, &opA);
				TPilha_Pop(pilha, &opB);
				x.chave = opA.chave * opB.chave;
				TPilha_Push(pilha, x);
			}
		}else if(c == '/'){
			if(TPilha_EhVazia(pilha) == 0){
				TPilha_Pop(pilha, &opB);
				TPilha_Pop(pilha, &opA);
				x.chave = opA.chave / opB.chave;
				TPilha_Push(pilha, x);
			}
		}else if(c == '^'){
			if(TPilha_EhVazia(pilha) == 0){
				TPilha_Pop(pilha, &opB);
				TPilha_Pop(pilha, &opA);
				x.chave = potencia(opA.chave, opB.chave);
				TPilha_Push(pilha, x);
			}
		}else if(c == '='){
			
			if(pilha->tamanho == 1){
				TPilha_Pop(pilha, &x);
				cout << x.chave << endl;
			}else{
				cout << "Entrada inconsistente." << endl;
				TPilha_Limpa(pilha);
			}
			
		}else{
			x.chave = charInt(c);
			TPilha_Push(pilha, x);
		}
		
		cin >> c;
		
	}
	
	return 0;
}

int potencia(int a, int b){
	
	int pot = 1;
	for(int i=0; i<b; i++){
		pot *= a;
	}
	return pot;
	
}

int charInt(char c){
	
	switch (c){
		case '0':
			return 0;
		case '1':
			return 1;
		case '2':
			return 2;
		case '3':
			return 3;
		case '4':
			return 4;
		case '5':
			return 5;
		case '6':
			return 6;
		case '7':
			return 7;
		case '8':
			return 8;
		case '9':
			return 9;
		default:
			return -1;
	}
	
}