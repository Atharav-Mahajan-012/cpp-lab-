#include <stdio.h>

int main() {
          int a[5]={1,2,3,4,5};
          int *ptr;
          ptr =&a[0];
          printf("elements in array are ");
          for(int i=0;i<5;i++){
              printf("\n %d",*ptr);
              ptr++;
          }
    return 0;
}