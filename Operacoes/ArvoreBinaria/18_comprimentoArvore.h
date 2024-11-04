#ifndef COMPRIMENTO_ARVORE_BINARIA_H
#define COMPRIMENTO_ARVORE_BINARIA_H

/* --------------------------*/

int comprimentoRecursiva(pNohArvore raiz) {

  if (raiz == NULL) {
    return -1;
  } else {
    int esq = 1 + comprimentoRecursiva(raiz->esquerda);
    int dir = 1 + comprimentoRecursiva(raiz->direita);

    int cont = esq + dir;
    return esq + dir;
  }
}

int comprimento(pDArvore arvore) { return comprimentoRecursiva(arvore->raiz); }

#endif