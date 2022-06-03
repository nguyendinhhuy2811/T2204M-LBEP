#include <stdio.h>
#include <string.h>
int main(){
	char s[10];
	printf("Nhap chuoi: ");
	scanf("%s",s);
	printf("Chuoi da nhap la %s\n", s);
	printf("Chuoi sau khi dao nguoc la %s", strrev(s));
	return 0;
}
