#include<stdio.h>
int main()
{
    int num,i,n;
    char a,b;
    int sum=0,sum1=0,sum2=0,sum3;
    double x,y,z;

    b = '%';

    scanf("%d",&num);

    for(i=0; i<num; i++){

        scanf("%d %c",&n,&a);

        if('C'==a){

            sum = sum+n;
        }
        if('R'==a){

            sum1 = sum1+n;
        }
        if('S'==a){

            sum2 = sum2+n;
        }

    }
    sum3 = sum + sum1 +sum2;

    x = (sum/(sum3*1.00)*100.00);

    y = (sum1/(sum3*1.00)*100.00);

    z = (sum2/(sum3*1.00)*100.00);

    printf("Total: %d cobaias\n",sum3);

    printf("Total de coelhos: %d\n",sum);

    printf("Total de ratos: %d\n",sum1);

    printf("Total de sapos: %d\n",sum2);

    printf("Percentual de coelhos: %.2lf %c\n",x,b);

    printf("Percentual de ratos: %.2lf %c\n",y,b);

    printf("Percentual de sapos: %.2lf %c\n", z,b);

    return 0;
}
