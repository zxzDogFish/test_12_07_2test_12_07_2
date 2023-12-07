#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


void dectobin(int n)
{
    if (n == 0)
        return ;
    else
    {
        dectobin(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}