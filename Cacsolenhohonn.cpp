#include <stdio.h>

int main(){
	int n;
	printf("Hay nhap n: ");
	scanf("%d",&n);
	int i;
	while(i < n){
		if(i % 2 != 0)
			printf("Cac so le < n la: %d\n", i);
			i++;
	}
	return 0;
}
