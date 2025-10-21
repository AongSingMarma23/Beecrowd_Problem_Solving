#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,k = 0;

    double X,Y;

    scanf("%lf%lf%lf",&a,&b,&c);

    k = (b*b)-(4*a*c);

    if (k> 0 && a!=0){

        X = (- b + sqrt(k)) / (2*a);

        Y = (- b - sqrt(k)) / (2*a);

        printf("R1 = %.5lf\n",X);

        printf("R2 = %.5lf\n",Y);
    }

    else

        printf("Impossivel calcular\n");

    return 0;
}
