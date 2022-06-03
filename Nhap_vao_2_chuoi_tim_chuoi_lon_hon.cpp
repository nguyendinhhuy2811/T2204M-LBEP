#include <stdio.h>
#include <string.h>
int main(){
	char s1[100];
	printf("Nhap vao chuoi s1: ");
	scanf("%s",s1);
	char s2[100];
	printf("Nhap vao chuoi s2: ");
	scanf("%s", s2);
	if( strcmp(s1, s2) == 0){
		printf("2 chuoi bang nhau");
	} else if (strcmp(s1, s2) > 0) {
		printf("chuoi 1 lon hon chuoi 2");
	} else {
		printf("chuoi 1 nho hon chuoi 2");
	}
	return 0;
}
