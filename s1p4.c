
#include <stdio.h>
int add (int a, int b){
    return(a+b);
}
int main() {
       int x,y,*p,*q;
       printf("enter two no's ");
       scanf("%d%d",&x,&y);
       p=&x;
       q=&y;
        printf("sum of %d and %d = %d", *p,*q,add(*p,*q));
  
    return 0;
}