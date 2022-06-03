#include <stdio.h>
int uocchunglonnhatcua2so(int a, int b){
	int ucln;
	int min = a, max = b;
	if(a > b){
		min = b, max = a;
	}
	if(min <= max){
		for(int i = min; i > 0; i --){
			if(min % i == 0 && max % i == 0){
				ucln = i;
				break;
			}
		}
	}
	return ucln;
}
int main(){
	int x;
	printf("Hay nhap X: ");
	scanf("%d", &x);
	int y;
	printf("Hay nhap Y: ");
	scanf("%d", &y);
	printf("Uoc chung lon nhat cua %d va %d la: %d",x,y,uocchunglonnhatcua2so(x,y));
	return 0;
}
