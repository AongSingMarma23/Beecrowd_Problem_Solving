#include<stdio.h>
int main()
{
    int i,j=0, p=-1, array[100];

    for(i = 0; i < 100; i++){

        scanf("%d", &array[i]);
    }
    for(i=0; i<100; i++){

        if(array[i]>j){

            j = array[i];

            p = i + 1;
        }
    }

    printf("%d\n",j);

    printf("%d\n", p);

    return 0;
}
