
#include <stdio.h>
int max(int a, int b, int c){
    if(a>b&&a>c){
        return a;
    }
     if(b>a&&b>c){
        return b;
    }
    if(c>a&&c>b){
        return c;
    }
    
}
int main() {
       int x,y,z,*p,*q,*r;
       printf("enter 3 no's ");
       scanf("%d%d%d",&x,&y,&z);
       p=&x;
       q=&y;
       r=&z;
       printf("max of %d,%d and %d is %d", *p,*q,*r,max(*p,*q,*r));
  
    return 0;
}