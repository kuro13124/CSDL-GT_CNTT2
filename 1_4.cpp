#include<stdio.h>

#include<conio.h>

struct ToadDo

{

float x;

float y;

float z;

};

typedef struct ToadDo TOADO;

void NhapDiemKG(TOADO &);

void XuatDiemKG(TOADO);

void NhapDiemKG(TOADO &d)
void NhapToaDo(TOADO d)
{

float temp;

printf("\nNhap x: ");

scanf("%f", &temp);

d.x = temp;

printf("\nNhap y: ");

scanf("%f", &temp);

d.y = temp;

printf("\nNhap z: ");

scanf("%f", &temp);

d.z = temp;

}

void XuatToaDo(TOADO d)

{

printf("(%8.3f, %8.3f, %8.3f)", d.x, d.y, d.z);

}

int main()

{

ToaDo d;

NhapToaDo(d);

XuatToaDo(d);

getch();

return 0;

}
