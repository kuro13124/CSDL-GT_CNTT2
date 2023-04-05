#include<iostream>

using namespace std;
void Nhapmang(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
}
int main(void){
	int a[100],n,x;
	printf("nhap n = ");
	scanf("%d",&n);
	printf("nhap x = ");
	scanf("%d",&x);
	Nhapmang(a,n);
	int index = search(a,n,x);
	if(index == -1)
		printf("no");		
	else
		printf("yes"+index);
	}
