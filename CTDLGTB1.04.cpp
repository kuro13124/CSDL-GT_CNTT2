#include<stdio.h>
#include<conio.h>

long Xn(int n)
{
    if(n == 0)
        return 1;
    long S = 0;
    for(int i = 1; i <= n; i++)
    {
        S = S + i * i * Xn(n - i);
    }
    return S;
}
int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    long S = Xn(n);
    printf("S = %d", S);
    getch();
    return 0;
}
