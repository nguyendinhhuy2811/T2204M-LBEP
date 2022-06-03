#include<stdio.h>
#include<string.h>
int main(){
	int i, j;
	char mangso[10][100];
	printf("Nhap mang so\n");
	for(i = 1; i <= 10; i++){
		printf("mangso[%d] = ",i);
		scanf("%s",mangso[i]);
	}
	int max = strlen(mangso[0]);
	for(i = 1; i < 10; i++){
		if(strlen(mangso[i]) > max) {
			max = strlen(mangso[i]);
			j = i;
		}
	}
	printf("mangso co do dai lon nhat la: %s",mangso[j]);	
}
