#include <stdio.h>

int main() {
    int num;
    printf("Entre com o código");
    scanf("%d", &num);
    switch(num)
    {
    case 1:
        printf("O produto é brasileiro");
        break;
    case 2:
        printf("O produto é alemão");
        break;
    case 3:
    case 4:
        printf("O produto é asiático");
        break;
    case 5:
    case 6:
    case 7:
        printf("O protudo é europeu");
        break;
    case 8:
    case 9:
        printf("O produto é aericano");
        break;
    default:
        printf("O protudo é importado");

    }
}