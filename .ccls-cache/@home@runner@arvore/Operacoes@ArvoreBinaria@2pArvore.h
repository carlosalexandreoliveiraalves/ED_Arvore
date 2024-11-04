#ifndef SIMILARES_ARVORE_BINARIA_H
#define SIMILARES_ARVORE_BINARIA_H

/* -------------------------------------------*/
int similaresRecursivo(pNohArvore raiz1, pNohArvore raiz2) {

  if (raiz1 == NULL && raiz2 == NULL) {
    return 0;

  } else if (raiz1 != NULL && raiz2 != NULL) {
    int esq = similaresRecursivo(raiz1->esquerda, raiz2->esquerda);
    int dir = similaresRecursivo(raiz1->direita, raiz2->direita);

    if (esq == 0 && dir == 0) {
      return 0;
    } else {
      return -1;
    }

  } else {
    return -1;
  }
}

int similares(pDArvore arvore1, pDArvore arvore2) {
  return similaresRecursivo(arvore1->raiz, arvore2->raiz);
}
#endif