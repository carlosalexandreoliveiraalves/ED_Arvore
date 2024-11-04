#ifndef FILHO_ARVORE_BINARIA_H
#define FILHO_ARVORE_BINARIA_H

/* -------------------------------------------*/
int filhoUnicoRecursiva(pNohArvore raiz) {

  if (raiz == NULL)
    return 0;

  if ((raiz->esquerda == NULL && raiz->direita != NULL) ||
      (raiz->esquerda != NULL && raiz->direita == NULL)) {

    return 1 + filhoUnicoRecursiva(raiz->esquerda) +
           filhoUnicoRecursiva(raiz->direita);
  } else {
    return filhoUnicoRecursiva(raiz->esquerda) +
           filhoUnicoRecursiva(raiz->direita);
  }
}

int filhoUnico(pDArvore arv) {
  int i = filhoUnicoRecursiva(arv->raiz);
  return i;
}
#endif