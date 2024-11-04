#ifndef ISBST_H
#define ISBST_H

pNohArvore minValue(pNohArvore raiz) {

  while (raiz->esquerda != NULL) {
    raiz = raiz->esquerda;
  }

  return raiz->info;
}

pNohArvore maxValue(pNohArvore raiz) {

  while (raiz->direita != NULL) {
    raiz = raiz->direita;
  }

  return raiz->info;
}
// passa como parametros a arvore, a função do valor minimo, a função do valor
// maximo e uma função de comparação.
int isBSTRecursivo(pNohArvore raiz, void *min, void *max, FuncaoComparacao fc) {

  if (raiz == NULL) {
    return 1;
  }

  if (raiz->direita != NULL && fc(max, raiz->info) > 0) {
    return 0;
  }

  if (raiz->esquerda != NULL && fc(min, raiz->info) < 0) {
    return 0;
  }

  return isBSTRecursivo(raiz->direita, min, max, fc) +
         isBSTRecursivo(raiz->esquerda, min, max, fc);
}

int isBST(pDArvore arvore, FuncaoComparacao fc) {

  if (isBSTRecursivo(arvore->raiz, minValue(arvore->raiz),
                     maxValue(arvore->raiz), fc) >= 1) {
    return 1;
  } else {
    return 0;
    
  }
}

#endif