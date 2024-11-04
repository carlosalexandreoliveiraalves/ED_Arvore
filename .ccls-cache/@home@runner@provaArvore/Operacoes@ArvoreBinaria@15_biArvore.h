#ifndef BI_ARVORE_BINARIA_H
#define BI_ARVORE_BINARIA_H

/* -------------------------------------------*/
int estritamenteBinariaRecursiva(pNohArvore raiz) {

  if (raiz == NULL) {
    return 1;
  } else {

    if ((raiz->esquerda == NULL && raiz->direita != NULL) ||
        (raiz->esquerda != NULL && raiz->direita == NULL)) {
      return 0;
    } else {
      return estritamenteBinariaRecursiva(raiz->direita) &&
             estritamenteBinariaRecursiva(raiz->esquerda);
    }
  }
}

int estritamenteBinaria(pDArvore arv) {
  int i = estritamenteBinariaRecursiva(arv->raiz);
  printf("%d", i);
  return i;
}
#endif
