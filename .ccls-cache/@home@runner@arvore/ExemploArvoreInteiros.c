#include "ArvoreBinaria.h"
#include "Utils.h"
#include <stdio.h>

int main() {

  printf("\n\n---------------------PROVA----------------------\n\n");

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 1------\n");

  // Arquivo desta questão é o "1pArvore"

  pDArvore pArvoreIntp1 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreIntp1, alocaInt(5), comparaInt);
  incluirInfo(pArvoreIntp1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp1, alocaInt(9), comparaInt);
  incluirInfo(pArvoreIntp1, alocaInt(1), comparaInt);

  desenhaArvore(pArvoreIntp1, imprimeInt);

  int p1 = soma(pArvoreIntp1, map);

  printf("\n Soma total dos elementos: %d", p1);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 2------\n");

  // Arquivo desta questão é o "2pArvore"

  pDArvore pArvoreIntp2_1 = criarArvore(2);
  pDArvore pArvoreIntp2_2 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreIntp2_1, alocaInt(5), comparaInt);
  incluirInfo(pArvoreIntp2_1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp2_1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp2_1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp2_1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp2_1, alocaInt(9), comparaInt);
  incluirInfo(pArvoreIntp2_1, alocaInt(1), comparaInt);

  desenhaArvore(pArvoreIntp2_1, imprimeInt);

  incluirInfo(pArvoreIntp2_2, alocaInt(5), comparaInt);
  incluirInfo(pArvoreIntp2_2, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp2_2, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp2_2, alocaInt(2), comparaInt);
  incluirInfo(pArvoreIntp2_2, alocaInt(9), comparaInt);
  incluirInfo(pArvoreIntp2_2, alocaInt(1), comparaInt);

  desenhaArvore(pArvoreIntp2_2, imprimeInt);

  int p2 = similares(pArvoreIntp2_1, pArvoreIntp2_2);

  if (p2 == 0) {
    printf("\n São similares");
  } else {
    printf("\n Não são similares");
  }

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 3------\n");

  // Arquivo desta questão é o "3pArvore"

  pDArvore pArvoreIntp3 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreIntp3, alocaInt(5), comparaInt);
  incluirInfo(pArvoreIntp3, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp3, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp3, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp3, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp3, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp3, alocaInt(9), comparaInt);
  incluirInfo(pArvoreIntp3, alocaInt(1), comparaInt);

  incluirInfo(pArvoreIntp3, alocaInt(2), comparaInt);

  desenhaArvore(pArvoreIntp3, imprimeInt);

  int p3 = filhoUnico(pArvoreIntp3);
  printf("Há %d elementos com filho único.", p3);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 4------\n");
  // Arquivo desta questão é o "4pArvore"

  pDArvore pArvoreIntp4 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreIntp4, alocaInt(5), comparaInt);
  incluirInfo(pArvoreIntp4, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp4, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp4, alocaInt(3), comparaInt);
  incluirInfo(pArvoreIntp4, alocaInt(8), comparaInt);
  incluirInfo(pArvoreIntp4, alocaInt(9), comparaInt);
  incluirInfo(pArvoreIntp4, alocaInt(1), comparaInt);
  incluirInfo(pArvoreIntp4, alocaInt(22), comparaInt);

  int valor4 = 4;

  int p4 = qtdeMaiores(pArvoreIntp4, alocaInt(valor4), comparaInt);

  desenhaArvore(pArvoreIntp4, imprimeInt);

  printf("\n Há %d elementos na árvore maiores que %d", p4, valor4);

  printf("\n\n\n-------------------FIM DA PROVA ----------------------\n\n\n");

  pDArvore pArvoreInt = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt, alocaInt(2), comparaInt);

  // emOrdem(pArvoreInt->raiz, imprimeInt);
  // printf("\n");

  desenhaArvore(pArvoreInt, imprimeInt);
  pNohArvore infoRaiz = buscarInfo(pArvoreInt, alocaInt(9), comparaInt);
  if (infoRaiz != NULL)
    imprimeInt(infoRaiz->info);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 1------\n");

  pDArvore pArvoreInt2 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt2, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt2, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt2, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt2, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt2, alocaInt(2), comparaInt);

  int qnt_folhas = quantidadeFolhas(pArvoreInt2);
  printf("\n%d", qnt_folhas);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 2------\n");

  pDArvore pArvoreInt3 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt3, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt3, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt3, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt3, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt3, alocaInt(2), comparaInt);

  int qnt_nohs = quantidadeNohs(pArvoreInt3);
  printf("\n%d", qnt_nohs);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 3------\n");

  pDArvore pArvoreInt4 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt4, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt4, alocaInt(6), comparaInt);
  incluirInfo(pArvoreInt4, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt4, alocaInt(7), comparaInt);
  incluirInfo(pArvoreInt4, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt4, alocaInt(8), comparaInt);

  desenhaArvore(pArvoreInt4, imprimeInt);

  int qnt_nohs2 = alturaArvore(pArvoreInt4);
  printf("\n%d", qnt_nohs2);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 4------\n");

  pDArvore pArvoreInt4_1 = criarArvore(2);
  pDArvore pArvoreInt4_2 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt4_1, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt4_1, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt4_1, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt4_1, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt4_1, alocaInt(2), comparaInt);

  incluirInfo(pArvoreInt4_2, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt4_2, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt4_2, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt4_2, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt4_2, alocaInt(2), comparaInt);

  int result_4 = iguaisArvore(pArvoreInt4_1, pArvoreInt4_2, comparaInt);
  if (result_4 == -1) {
    printf("\nÁrvores são diferentes.");
  } else {
    printf("\nÁrvores são iguais.");
  }

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 5------\n");

  pDArvore pArvoreInt5 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt5, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt5, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt5, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt5, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt5, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt5, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt5, alocaInt(2), comparaInt);

  desenhaArvore(pArvoreInt5, imprimeInt);

  int result_5 = estritamenteBinaria(pArvoreInt5);

  if (result_5 == 1) {
    printf("\nÁrvore é estritamente binária.");
  } else {
    printf("\nÁrvore não é estritamente binária.");
  }

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 6------\n");

  pDArvore pArvoreInt6 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt6, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt6, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt6, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt6, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt6, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt6, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt6, alocaInt(2), comparaInt);

  pDArvore pArvoreInt6_R = espelho(pArvoreInt6);

  desenhaArvore(pArvoreInt6_R, imprimeInt);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 7------\n");

  pDArvore pArvoreInt7 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt7, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt7, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt7, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt7, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt7, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt7, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt7, alocaInt(2), comparaInt);

  // amplitude(pArvoreInt7);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 8------\n");

  pDArvore pArvoreInt8 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt8, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt8, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt8, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt8, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt8, alocaInt(8), comparaInt);
  incluirInfo(pArvoreInt8, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt8, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt8, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt8, alocaInt(2), comparaInt);

  int comprimento_r = comprimento(pArvoreInt8);
  printf("\nComprimento interno da árvore: %d", comprimento_r);

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 9------\n");

  pDArvore pArvoreInt9 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt9, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(8), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(10), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(7), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt9, alocaInt(2), comparaInt);

  desenhaArvore(pArvoreInt9, imprimeInt);

  char balanceada_r = balanceada(pArvoreInt9);
  if (balanceada_r == 'n') {
    printf("Árvore não é balanceada.");
  } else {
    printf("Árvore é balanceada.");
  }

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 10------\n");

  pDArvore pArvoreInt10 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt10, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(8), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(9), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(10), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(7), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt10, alocaInt(2), comparaInt);

  desenhaArvore(pArvoreInt10, imprimeInt);
  int result_10 = isBST(pArvoreInt10, comparaInt);

  if (result_10 == 1) {
    printf("\n É uma árvore binária de pesquisa.");
  } else {
    printf("\n Não é uma árvore binária de pesquisa.");
  }

  printf("\n-----------------------------------------\n");
  printf("\n------QUESTÃO 11------\n");

  pDArvore pArvoreInt11 = criarArvore(2);

  /* teste de inclusao */
  incluirInfo(pArvoreInt11, alocaInt('+'), comparaInt);
  incluirInfo(pArvoreInt11, alocaInt('*'), comparaInt);
  incluirInfo(pArvoreInt11, alocaInt(5), comparaInt);
  incluirInfo(pArvoreInt11, alocaInt('+'), comparaInt);
  incluirInfo(pArvoreInt11, alocaInt('-'), comparaInt);
  incluirInfo(pArvoreInt11, alocaInt(3), comparaInt);
  incluirInfo(pArvoreInt11, alocaInt(4), comparaInt);
  incluirInfo(pArvoreInt11, alocaInt(1), comparaInt);
  incluirInfo(pArvoreInt11, alocaInt(6), comparaInt);

  desenhaArvore(pArvoreInt11, imprimeInt);

  // amplitude(pArvoreInt7);

  /*
      preOrdem(pArvoreInt->raiz, imprimeInt);
      printf("\n");
      posOrdem(pArvoreInt->raiz, imprimeInt);
  */
  /* teste de exclusao */
  // int res = excluirInfo(pArvoreInt, alocaInt(5), comparaInt);
  // printf("\nExcluiu? = %d \n", res);
  // desenhaArvore(pArvoreInt, imprimeInt);

  // emOrdem(pArvoreInt->raiz, imprimeInt);
  // printf("\n");

  // int folhas = quantidadeFolhas(pArvoreInt->raiz);
  // printf("\nQuantidade de folhas = %d \n", folhas);
}
