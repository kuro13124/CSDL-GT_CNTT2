#include<stdio.h>
#include<conio.h>


struct Diem
{
    float X;
    float Y;
};
typedef struct Diem DIEM;

void NhapDiem(DIEM &);
void XuatDiem(DIEM);
void NhapDiem(DIEM &a)
{
    printf("\nNhap X: ");
    scanf("%f", &a.X);

    printf("\nNhap Y: ");
    scanf("%f", &a.Y);
};


void XuatDiem(DIEM a)
{
    printf("<%.2f, %.2f>", a.X, a.Y);
}
int main()
{
    DIEM a, b;
    NhapDiem(a);
    XuatDiem(a);
    getch();
    return 0;
}
