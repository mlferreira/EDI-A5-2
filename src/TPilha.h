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

#ifndef TPilha_h
#define TPilha_h


typedef struct{
	int chave;
}TItem;

typedef struct celula{
	TItem item;
	struct celula * prox;
}TCelula;

typedef struct{
	TCelula topo;
	TCelula* fundo;
	int tamanho;
}TPilha;


/* inicia uma pilha vazia */
TPilha* TPilha_Inicia();

/* retorna 1 se a pilha for vazia e 0 caso contrario */
int TPilha_EhVazia(TPilha *pPilha);

/* insere o elemento x no topo da pilha */
void TPilha_Push(TPilha *pPilha, TItem x);

/* retira o elemento do topo da pilha e o retorna pelo parametro pX
* a funcao retorna 0 caso nao haja nenhum elemento na pilha e 1 caso contrario */
int TPilha_Pop(TPilha *pPilha, TItem *pX);

/* retorna o tamanho da pilha */
int TPilha_Tamanho(TPilha *pPilha);

/* limpa uma pilha, ou seja, remove todos os elementos de uma pilha */
void TPilha_Limpa(TPilha *pPilha);


#endif /* TPilha_h */