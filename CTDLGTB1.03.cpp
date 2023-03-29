#include<stdio.h>

#include<conio.h>

long Xn(int);
long Yn(int);
long Xn(int n){
    if(n == 0)
        return 1;
    return Xn(n - 1) + Yn(n - 1);

}

long Yn(int n){
    if(n == 0)
        return 0;
    return 3*Xn(n - 1) + 2*Yn(n - 1);
}

int main(){ 
    int n;
    printf("\nNhap n "); scanf("%d", &n);
    printf("\nX(n) = %d, Y(n) = %d", Xn(n), Yn(n));
    getch();
    return 0;
}