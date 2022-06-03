#include <stdio.h>
#include<string.h>
int main(){
	char mangso[10][100];
	int i;
	printf("Nhap mang so\n");
	for(i = 1; i <= 10; i++){
		printf("mangso[%d] = ", i);
		scanf("%s", mangso[i]);
	}
	printf("In mang so\n");
	for(i = 1; i <= 10; i++){
		printf("mangso[%d] = %s\n", i, mangso[i]);
	}
	return 0;
}
