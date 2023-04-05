#include<iostream>

using namespace std;
void Nhapmang(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}
void heapify(int arr[], int n, int i){ 
    int max =i;    
    int l = i*2 +1;   
    int r = l+1;    
    if(l<n && arr[l] > arr[max]){
        max = l;
    }
    
    if(r<n && arr[r] > arr[max]){ 
        max = r;
    }
    if(max != i){      
        swap(arr[i], arr[max]);  
        heapify(arr ,n , max);  
    }
}
void heapSort(int arr[], int n){
    

    for(int i = n/2 - 1; i>=0; i--)
        heapify(arr,n, i); 
    for(int j = n-1 ; j>0; j--){  
                 
        swap(arr[0], arr[j] );  
             heapify(arr, j, 0);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
	int a[100];
	int n;
	printf("nhap n = ");
	scanf("%d",&n);
	Nhapmang(a, n);
	heapSort(a,n);
	printf("Mang sau khi sap xep la: ");
	printArray(a,n);
}
