#include<iostream>

using namespace std;

void Insertion_Sort(int a[], int n){
	int pos, i;
	int x;//luu gi� tr? a[i] tr�nh b? ghi d� khi d?i ch? c�c ph?n t?
	for(i=1; i<n; i++){//do?n a[0] d� s?p x?p
		x = a[i]; pos = i-1;
		//t�m v? tr� ch�n x
		while((pos>=0)&&(a[pos]>x)){
                //k?t h?p d?i ch? c�c ph?n t? s? d?ng sau x trong danh s�ch m?i
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;//ch�n x v�o danh s�ch
	}
}
int main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Insertion_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	system("pause");
}
