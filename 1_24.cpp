#include<stdio.h>
#include<conio.h>

struct Tinh
{
    char Ma[20];
    int TL;
    const int HSD;
};
typedef struct HopSua HOPSUA;

void HopSua(HOPSUA &h)
{
    printf("Nhap nhan hieu hop sua: \n");
    scanf("%c", &t.Ma);

    fflush(stdin);
    printf("Nhap vao trong luong hop sua: \n");
    scanf("%d", &t.TL);

    printf("Nhap vao han su dungh: \n");
    scanf("%d", &t.HSD);
}

void XuatHopSua(HOPSUA h)
{
    printf("Ma tinh: %d\n", t.Ma);
    printf("Ten tinh: %s\n", t.TL);
    printf("Dien tich: %.2f (km^2)\n", t.HSD);
}

int main()
{
    HOPSUA h;
    NhapHopSuaHopSua(h);
    XuatHopSua(h);

    getch();
    return 0;
}
