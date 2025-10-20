#include<stdio.h>

int main()
{
    int second;

    scanf("%d", &second);

    int hour = second / 3600;

    second = second - (hour * 3600);

    int minute = second / 60;

    second = second - (minute * 60);

    printf("%d:%d:%d\n",hour, minute, second);

    return 0;
}
