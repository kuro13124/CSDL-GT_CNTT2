#include<stdio.h>
#include<conio.h>
using namespace std;

float Tong(float x,int n)
{
    if(n == 0)
        return 0;
    if(n==1)
        return x;
    return (1+x/n)*Tong(x,n-1) - (x/n)*Tong(x,n-2);
}

int main()
{
    int n, S;
    float x;
    printf("\Nhap n = ");
	scanf("%d", &n);
    printf("\Nhap x = ");
	scanf("%f", &x);

    S = Tong(x,n);
    printf("S = %d", S);

    getch();
    return 0;
}