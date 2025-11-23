#include<stdio.h>
int main()
{
    int a=1,b,c=0,x,z;

    scanf("%d%d",&x,&z);

    while(x>=z){
        scanf("%d",&z);
    }

    for(b=x; b<z; b++){

        c+=b;
        if(c>z)
            break;
        a++;
    }

    printf("%d\n",a);

    return 0;
}
