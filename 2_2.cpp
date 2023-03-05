#include<stdio.h>
#include<conio.h>

long tich(int n)
{
    if(n == 0)
        return 1;
    return tich(n - 1) * n;
}

int main()
{
    int n, S;
    printf("\nNhap n = "); 
	  scanf("%d", &n);

    S = tich(n);
    printf("S = %d", S);

    getch();
    return 0;
}
