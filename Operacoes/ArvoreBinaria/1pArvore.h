#ifndef SOMAINFO_ARVORE_BINARIA_H
#define SOMAINFO_ARVORE_BINARIA_H

/* -------------------------------------------*/
int somaRecursiva(pNohArvore raiz, FuncaoMapeamento fm) {

  if (raiz == NULL)
    return 0;

  printf("\n %d + ", fm(raiz->info));

  return fm(raiz->info) + somaRecursiva(raiz->esquerda, fm) +
         somaRecursiva(raiz->direita, fm);
}

int soma(pDArvore arvore, FuncaoMapeamento fm) {
  return somaRecursiva(arvore->raiz, fm);
}

#endif