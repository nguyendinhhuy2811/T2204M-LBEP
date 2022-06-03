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
	int S=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]%2!=0){
			S=ary[i];
		}
	}
	printf("So le cuoi cung la : %d",S);
	return 0;
}
