
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
void Sapxep(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[min]>a[j])
				min = j;
			swap(a[i], a[min]);
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
	Sapxep(a, n);
	printf("Mang sau khi sap xep la: ");
	printArray(a,n);
}
