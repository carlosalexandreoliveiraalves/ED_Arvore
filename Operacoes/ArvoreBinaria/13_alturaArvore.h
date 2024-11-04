#ifndef ALTURA_ARVORE_BINARIA_H
#define ALTURA_ARVORE_BINARIA_H

/* -------------------------------------------*/
int alturaArvoreRecursiva(pNohArvore raiz){

   if (raiz == NULL) {
     return -1; 
   } else {
     int esq = alturaArvoreRecursiva(raiz->esquerda);
     int dir = alturaArvoreRecursiva(raiz->direita);
     if (esq > dir) {
       return esq + 1;
     } else {
       return dir + 1;
     }
   }
  
}

int alturaArvore(pDArvore arvore){
    return alturaArvoreRecursiva(arvore->raiz);
}
#endif