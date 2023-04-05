#include<iostream>

using namespace std;


void Nhapmang(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int BinSearch(int a[], int x, int left,int right){ 
	if(left<right){
		int mid=(left+right)/2;
	if(x==a[mid]){
		return mid;
	}
	if(x<a[mid]){
		return BinSearch(a,x,left,mid-1);
	}
	return BinSearch(a,x,mid+1,right);	
	}
	return -1;
}
int main(void){
	int a[100],n,x;
	printf("nhap n = ");
	scanf("%d",&n);
	printf("nhap x = ");
	scanf("%d",&x);
	Nhapmang(a,n);
	int index = BinSearch(a,x,0,n-1);
	if(index == -1)
		printf("no");		
	else
		printf("yes"+index);
	}		
