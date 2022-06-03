#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu mang : ");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++){
		printf("Nhap cac phan tu mang : ");
		scanf("%d",&ary[i]);
		for(int j=0;j<i;j++){
			while(ary[j]==ary[i]){
				printf("Nhap lai : ");
				scanf("%d",&ary[i]);
			}
		}
	}
	
	for(int i=0;i<n;i++){
		printf("%d  ",ary[i]);
	}
}
