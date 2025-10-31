#include<stdio.h>
int main()
{
    int x, y = 2002;

    while(1){

        scanf("%d", &x);

        if(x == y){

            printf("Acesso Permitido\n");

            break;
        }
        else{

            printf("Senha Invalida\n");
        }

    }

    return 0;
}
