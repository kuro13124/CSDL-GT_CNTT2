#include<iostream>
void Nhapmang(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int tongmangsochan(int a[],int n)
{
    if(n==0) return 0;
    int s=tongmangsochan(a,n-1);
    if(a[n-1]%2==0) 
	s += a[n-1];
	return s;	
}

int main()
{
	
	int a[100];
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	Nhapmang(a,n);
	printf(" \n trong mang la = %d",tongmangsochan(a,n));
	}
