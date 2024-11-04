#ifndef ESPELHO_ARVORE_BINARIA_H
#define ESPELHO_ARVORE_BINARIA_H

/* --------------------------*/
pNohArvore espelhoRecursivo(pNohArvore noh) {

  if (noh == NULL) {
    return NULL;
  }

  pNohArvore novo = malloc(sizeof(NohArvore));
  novo->info = noh->info;
  novo->esquerda = espelhoRecursivo(noh->direita);
  novo->direita = espelhoRecursivo(noh->esquerda);
  return novo;
}

pDArvore espelho(pDArvore arv) {

  pDArvore novaArvore = malloc(sizeof(DArvore));
  novaArvore->quantidadeNohs = arv->quantidadeNohs;
  novaArvore->grau = arv->grau;
  novaArvore->raiz = espelhoRecursivo(arv->raiz);

  return novaArvore;
}

#endif