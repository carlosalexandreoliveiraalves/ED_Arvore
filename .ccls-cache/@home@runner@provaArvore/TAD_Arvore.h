#ifndef ARVORE_TAD_H
#define ARVORE_TAD_H
/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
/* estrutura do noh da arvore */

typedef struct nohArvore NohArvore;
typedef NohArvore *pNohArvore;

/* descritor da arvore */
typedef struct dArvore DArvore;
typedef DArvore *pDArvore;

/* tipos referentes aos ponteiros para funcao */
typedef int (*FuncaoComparacao)(void *, void *);
typedef void (*FuncaoImpressao)(void *);
typedef int (*FuncaoMapeamento)(void *);

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDArvore criarArvore(int);

void incluirInfo(pDArvore, void *, FuncaoComparacao);
int excluirInfo(pDArvore, void *, FuncaoComparacao);
pNohArvore buscarInfo(pDArvore, void *, FuncaoComparacao);
int quantidadeNohs(pDArvore);

/* percursos */
void emOrdem(pNohArvore, FuncaoImpressao);
void preOrdem(pNohArvore, FuncaoImpressao);
void posOrdem(pNohArvore, FuncaoImpressao);

int grau(pDArvore);
int nivel(pDArvore, void *, FuncaoComparacao);
int quantidadeFolhas(pDArvore);
int quantidadeNohs(pDArvore);
int ehFolha(pDArvore, void *, FuncaoComparacao);
int arvoreVazia(pDArvore);

// Da prova  ------------------------------------
int somaRecursiva(pNohArvore, FuncaoMapeamento);
int similaresRecursivo(pNohArvore, pNohArvore);
int filhoUnicoRecursiva(pNohArvore);
int qtdeMaioresRecursiva(pNohArvore, void *, FuncaoComparacao);

void desenhaArvore(pDArvore, FuncaoImpressao);

#endif
