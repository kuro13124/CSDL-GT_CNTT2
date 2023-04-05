#include<iostream>

using namespace std;


void Nhapmang(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void InterchangeSort(int a[], int n)
{
   for (int i = 0; i < n-1; i++)
      for (int j = i+1; j < n; j++)
         if (a[i] > a[j])
         {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
}
int main(void){
	int a[100],n;
	printf("nhap n = ");
	scanf("%d",&n);
	Nhapmang(a,n);
	InterchangeSort(a,n);
	printArray(a,n);
	}
