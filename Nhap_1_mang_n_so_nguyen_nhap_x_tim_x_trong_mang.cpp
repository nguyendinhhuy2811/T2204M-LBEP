#include <stdio.h>
void Nhap(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
void Xuat(int a[], int n){
    printf("\nCAC PHAN TU CO TRONG MANG\n");
    for(int i = 0; i <= n - 1; i++){
        printf("A[%d] = %d \n" ,i,a[i]);
    }
}
void TimKiem(int a[],int n, int phantu){
    int j;
    for(int i = 0; i < n; i++){
        if(phantu == a[i]){
            j = i;
            break;
        }
    }
    if(j != NULL || j >= 0){
        printf("TIM THAY PHAN TU %d TAI VI TRI %d", phantu, j);
    }else{
        printf("\nKHONG THAY PHAN TU %d", phantu, j);
    }
}
int main(){
    int n;
    printf("NHAP N: ");
    scanf("%d",&n);
    int a[n];
    Nhap(a,n);
    Xuat(a,n);
    int phantu;
    printf("\nNHAP PHAN TU CAN TIM KIEM: ");
    scanf("%d",&phantu);
    TimKiem(a,n,phantu);
}
