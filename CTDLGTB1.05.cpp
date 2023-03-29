#include<iostream>
void Nhapmang(float a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%f",&a[i]);
    }
}
float tongduong(float a[],int n)
{
    if(n==0) return 0;
    float s=tongduong(a,n-1);
    if(a[n-1]>0)
	s += a[n-1];
	return s;	
}

int main()
{
	
	float a[100];
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	Nhapmang(a,n);
	printf(" \ntrong mang la = %f",tongduong(a,n));
	}