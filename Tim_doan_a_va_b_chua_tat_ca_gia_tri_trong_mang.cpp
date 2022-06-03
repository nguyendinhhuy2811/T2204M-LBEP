#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao so phan tu cua mang : ");
	scanf("%d",&n);
	int ary[n];
	printf("Nhap cac phan tu cua mang : \n");
	for(int i=0;i<n;i++){
		scanf("%d",&ary[i]);
	}
	int min=ary[0],max=ary[0],a,b;
	for(int i=0;i<n;i++){
		if(min>ary[i]){
			min=ary[i];
			a=i;
		}
	}
	for(int i=0;i<n;i++){
		if(max<ary[i]){
			max=ary[i];
			b=i;
		}
	}
	printf("Khoang cach [%d , %d] bao quat mang . Vi tri la : %d  %d ",min,max,a,b);
	return 0;
}
