#include<stdio.h>
/*int Binsearch(int a[],int x, int left,int right){
	if(left< right){
		int mid = (left+right)/2;
		if(a[mid]==x)
			return mid;
		if(a[mid]>x)
			return Binsearch(a,x,left,mid-1);
		return Binsearch(a,x,mid+1,right);
	}
	return -1;
}*/
/*int learsearch(int a[],int x,int n){
	for(int i = 0; i <= n ; i++){
		if(a[i] == x)
			return i;
	}			
	return -1;
}*/
void swap(int *i,int *j){
	int temp = *i;
    *i = *j;
    *j = temp;
}
void printA(int a[],int n){
	for(int i = 0 ; i <= n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
	
}
/*void change(int a[], int n){
	for(int i = 0; i< n -1;i++)
		for(int j = i+1;j<n;j++)
			if(a[i]> a[j])
				swap(a[i],a[j]);
}*/
/*void selectionSort(int a[],int n){
	
	for(int i = 0 ; i <= n-1 ; i++){
	
			int min = i;
			for(int j=i+1;j <= n ; j++)
				if(a[min]>a[j])
					min = j;
				swap(a[i],a[min]);
	}
			
}*/  
/*void insersionSort(int a[],int n){
	for(int i = 0 ; i< n; i++){
		int pos = i -1;
		int x = a[i];
		while(pos>=0&&a[pos]> x){
			a[pos+1]= a[pos];
			pos --;
		}
	x = a[pos+1];	
	}
}*/
	int hefily(int a[], int n, int i){
		int max = i;
		int left = i*2 + 1;
		int right =  left + 1;
		
		if(left < n && a[left] > a[max])
			
			max = left;
			
		if(right < n && a[right] > a[max])
			max = right;
			
		if(max != i){
			swap(&a[i],&a[max]);
			hefily(a,n,max);
			}
	}
	
	int heap(int a[],int n){
		for(int i = n/2 - 1 ; i >= 0;i--){
			hefily(a,n,i);
			}
		for(int i = n - 1;i >= 0;i--){
			swap(&a[0],&a[i]);
			hefily(a,i,0);
			}			
	}
int main(){
	int a[5]={2,5,4,7,40};
	heap(a,4);
	printf("mang sau khi sap xep la\n");
	printA(a,4);
}

