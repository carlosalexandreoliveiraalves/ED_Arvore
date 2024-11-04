#ifndef BALANCEADA_ARVORE_BINARIA_H
#define BALANCEADA_ARVORE_BINARIA_H

/* --------------------------*/

char balanceada(pDArvore arv) {

  int sub1 = comprimentoRecursiva(arv->raiz->direita);
  int sub2 = comprimentoRecursiva(arv->raiz->esquerda);

  if (sub1 > sub2 + 1 || sub1 < sub2 - 1) {
    return 'n';
  } else {
    return 's';
  }
}

#endif