#ifndef LISTA__TAD_H
#define LISTA__TAD_H
/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
typedef struct noh Noh;
typedef Noh *pNoh;

/* descritor da lista */
typedef struct dLista DLista;
typedef DLista *pDLista;

/* 3 tipos que representam ponteiros para fun�o */

typedef void (*FuncaoLiberarInfo)(void *);
typedef void *(*FuncaoAlocacao)(void *);

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDLista criarLista();
void incluirInfolista(pDLista, void *);
void imprimirLista(pDLista, FuncaoImpressao);
/* o parametro int estabelece a posicao da lista onde a divisao deve acontecer
 */

#endif
