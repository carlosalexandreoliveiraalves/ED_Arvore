#ifndef QTDMAIORES_ARVORE_BINARIA_H
#define QTDMAIORES_ARVORE_BINARIA_H

/* -------------------------------------------*/
int qtdeMaioresRecursiva(pNohArvore raiz, void *valor, FuncaoComparacao fc) {

  if (raiz == NULL)
    return 0;

  if (fc(raiz->info, valor) < 0) {
    return 1 + qtdeMaioresRecursiva(raiz->esquerda, valor, fc) +
           qtdeMaioresRecursiva(raiz->direita, valor, fc);
  } else {
    return qtdeMaioresRecursiva(raiz->esquerda, valor, fc) +
           qtdeMaioresRecursiva(raiz->direita, valor, fc);
  }
}

int qtdeMaiores(pDArvore arv, void *valor, FuncaoComparacao fc) {
  int i = qtdeMaioresRecursiva(arv->raiz, valor, fc);
  return i;
}
#endif
