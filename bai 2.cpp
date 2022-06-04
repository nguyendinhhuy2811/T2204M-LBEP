#include <stdio.h>
#include <string.h>
char s[50] ;
void sortString (char s[]){
    printf("\nNhap hang ky tu: ",s);
    scanf("%s",s);
}
void sapxep(char s[]){
  int max = strlen(s);
  int i, j;
  char temp;

  for (i = 0; i < max-1; i++) {
      for (j = i+1; j < max; j++) {

         if (s[i] > s[j]) {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
         }
      }
  }
}
int main () {
  sortString(s);
  sapxep(s);
  printf("\nKet qua cho ra: %s \n", s);
  return 0;
}
