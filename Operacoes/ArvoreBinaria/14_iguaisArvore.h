#ifndef IGUAIS_ARVORE_BINARIA_H
#define IGUAIS_ARVORE_BINARIA_H

/* -------------------------------------------*/
int iguaisArvoreRecursiva(pNohArvore raiz1, pNohArvore raiz2,
                          FuncaoComparacao fc) {
  
  if (raiz1 == NULL && raiz2 == NULL) {
    return 0;
    
  } else if (raiz1 != NULL && raiz2 != NULL &&
             fc(raiz1->info, raiz2->info) == 0) {

    int esq = iguaisArvoreRecursiva(raiz1->esquerda, raiz2->esquerda, fc);
    int dir = iguaisArvoreRecursiva(raiz1->direita, raiz2->direita, fc);

    if (esq == 0 && dir == 0) {
      return 0;
    } else {
      return -1;
    }
    
  } else {
    
    return -1;
  }
}

int iguaisArvore(pDArvore arvore1, pDArvore arvore2, FuncaoComparacao fc) {
  return iguaisArvoreRecursiva(arvore1->raiz, arvore2->raiz, fc);
}
#endif