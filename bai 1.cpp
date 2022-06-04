#include<stdio.h>

#include<string.h>

int main()

{

int a[100],i,n;

char c[100];

scanf("%s",c);//lay dau vao 

n=strlen(c);

for(i=0;i<n;i++)

{

a[i]=(int)c[i];// Chuyen doi thanh so nguuyen 

a[i]=a[i]-50;

printf("%d\n",a[i]);

}

return 0;

}
