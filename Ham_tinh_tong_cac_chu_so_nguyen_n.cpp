#include<conio.h>
#include<stdio.h>
int main(){
    int n;
    int Tong;
    int s = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(;n!=0;){
        Tong = n % 10;
        s += Tong;
        n /= 10;
    }    
    printf("%d",s);
}
