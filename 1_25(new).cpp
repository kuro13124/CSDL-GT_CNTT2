#include<stdio.h>
#include<conio.h>
const int minYear = 1900, maxYear = 10000;
struct Gio 
{
    int Hour, Minute, Second;
};

struct Ngay
{
    int Day, Month, Year;
};

struct Ve
{
    char TenPhim[20];
    long GiaTien;
    Ngay NgayChieu;
    Gio ThoiGian;
};
void NhapGio(Gio &g)
{
        printf("\nNhap gio: ");
        scanf("%d", &g.Hour);

        printf("\nNhap phut: ");
        scanf("%d", &g.Minute);
    
        printf("\nNhap giay: ");
        scanf("%d", &g.Second);
    
}
void XuatGio(Gio g)
{
    printf("%d:%d:%d", g.Hour, g.Minute, g.Second);
}
void NhapNgay(Ngay &a)
{ 
        printf("\nNhap vao nam: ");
        scanf("%d", &a.Year);       
        printf("\nNhap vao thang: ");
        scanf("%d", &a.Month); 
        printf("\nNhap vao ngay: ");
        scanf("%d",&a.Day);
}


void XuatNgay(Ngay &a)
{
    printf("%d/%d/%d", a.Day, a.Month, a.Year);
}
void NhapVe(Ve &ve)
{  
    printf("\nNhap vao ten phim: ");
    gets(ve.TenPhim);
    printf("\nNhap vao gia ve: ");
    scanf("%ld", &ve.GiaTien);
    printf("\nNhap ngay chieu: ");
    NhapNgay(ve.NgayChieu);
    printf("\nNhap thoi gian: ");
    NhapGio(ve.ThoiGian);
    
}

void XuatVe(Ve ve)
{
    
    printf("\nTen phim: %s", ve.TenPhim);
    printf("\nGia ban: %ld", ve.GiaTien);
    printf("\nNgay chieu: ");
    XuatNgay(ve.NgayChieu);
    printf("\nGio chieu: ");
    XuatGio(ve.ThoiGian);
    
}
int main()
{
    Ve v;
    NhapVe(v);
    XuatVe(v);
    getch();
    return 0;
}
