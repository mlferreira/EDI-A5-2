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

/* inicia uma pilha vazia */
TPilha* TPilha_Inicia(){
	TPilha * pPilha = new TPilha;
	(*pPilha).topo.prox = NULL;
	(*pPilha).fundo = &pPilha->topo;
	(*pPilha).tamanho = 0;
	return pPilha;
}

/* retorna 1 se a pilha for vazia e 0 caso contrario */
int TPilha_EhVazia(TPilha *pPilha){
	if(pPilha->tamanho == 0){
		return 1;
	}else{
		return 0;
	}
}

/* insere o elemento x no topo da pilha */
void TPilha_Push(TPilha *pPilha, TItem x){
	TCelula * temp = new TCelula;
	(*temp).item = x;
	temp->prox = pPilha->topo.prox;
	pPilha->topo.prox = temp;
	if(TPilha_EhVazia(pPilha) == 1){
		pPilha->fundo = temp;
	}
	pPilha->tamanho++;
}

/* retira o elemento do topo da pilha e o retorna pelo parametro pX
* a funcao retorna 0 caso nao haja nenhum elemento na pilha e 1 caso contrario */
int TPilha_Pop(TPilha *pPilha, TItem *pX){
	if(pPilha->tamanho == 0){
		return 1;
	}else{
		TItem temp;
		temp = pPilha->topo.prox->item;
		*pX = temp;
		pPilha->topo.prox = pPilha->topo.prox->prox;
		pPilha->tamanho--;
		if(TPilha_EhVazia(pPilha) == 1){
			pPilha->topo.prox = NULL;
			pPilha->fundo = &pPilha->topo;
		}
		return 0;
	}
}

/* retorna o tamanho da pilha */
int TPilha_Tamanho(TPilha *pPilha){
	return pPilha->tamanho;
}

/* limpa uma pilha, ou seja, remove todos os elementos de uma pilha */
void TPilha_Limpa(TPilha *pPilha){
	TItem * temp = new TItem;
	int t = pPilha->tamanho;
	
	for(int i=0; i<t; i++){
		TPilha_Pop(pPilha, temp);
	}
	
}