#ifndef QTDEFOLHAS_BINARIA_H
#define QTDEFOLHAS_BINARIA_H

/* -------------------------------------------*/
int quantidadeNohsRecursiva(pNohArvore raiz){

   if (raiz == NULL)
    return 0;

    return 1 + quantidadeNohsRecursiva(raiz->esquerda) +
               quantidadeNohsRecursiva(raiz->direita);

}

int quantidadeNohs(pDArvore arvore){
    return quantidadeNohsRecursiva(arvore->raiz);
}
#endif