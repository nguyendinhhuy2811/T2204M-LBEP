#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap phan tu mang : \n");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int min;
	for(int i=0;i<n;i++){
		if(ary[i] > 0){
			min = ary[i];
			break;
		}
	}
	for(int i=i+i;i<n;i++){
		if(ary[i]>0 && ary[i]<min){
			min = ary[i];
		}
	}
	printf("So nguyen duong nho nhat la : %d",min);
	return 0;
}
