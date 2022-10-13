#include <stdio.h>
int main(void) {
  char resposta;
  int n;
  do {
      do {
         printf("Entre com um numero");
         scanf("%d", &n);
         if(n>=0 && n<=100){
            if(n%2==0){
                printf("Numero divisivel por 2\n");
                if(n%3==0){
                    printf("Numero divisivel por 3 e 6.\n");}
            }
            else if(n%3==0){
                printf("numero divisível por 3\n");
                if(n%5==0){
                printf("numero divisivel por 6\n");
                    if(n%6==0){
                        printf("numero divisivel por 6\n");
                    }
                }
            }
            else if(n%5==0){
                printf("numero divisivel por 5");
            }
            else if(n%1==0){
                printf("numero primo");
            }
        }
        else printf("numero invalido\n");
        printf("Deseja continuar?\n");
        scanf("%c", &resposta);  
      } while ((resposta != 'S') && (resposta != 'N') && (resposta != 'n') && (resposta != 's'));
      printf("While externo \n");
   } while (resposta == 'S' || resposta == 's');
return 0;

}