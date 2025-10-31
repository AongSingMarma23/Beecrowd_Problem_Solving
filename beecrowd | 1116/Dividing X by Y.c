#include<stdio.h>
int main()
{
    int a,b,c,d;

    double x;

    scanf("%d",&a);

    for(c=1; c<=a; c++){

        scanf("%d%d", &b, &d);

        if(d == 0)
            printf("divisao impossivel\n");


            else{
               x = b / (d*1.00);
                 printf("%.1lf\n",x);
            }
    }
    return 0;
}
