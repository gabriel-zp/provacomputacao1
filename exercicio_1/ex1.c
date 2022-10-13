#include <stdio.h>
int main(void) {
  char resposta;
  do {
      do {
         printf("Deseja continuar (S/N)");
         scanf(" %c",&resposta);     // Não retire o espaço entre a " e %c);
      } while ((resposta != 'S') && (resposta != 'N') && (resposta != 'n') && (resposta != 's'));
      printf("While externo \n");
   } while (resposta == 'S' || resposta == 's');
return 0;

}