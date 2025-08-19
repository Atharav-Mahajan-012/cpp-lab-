 #include <stdio.h>
   int f1 (int a , int b)
{
   printf("call by value \n ");
   printf("before swap = %d \n %d \n " , a, b);
   int temp=b;
   b=a;
   a=temp;
   printf("after swap = %d \n %d \n" , a, b);
} 
int f2( int a , int b)
{   printf("call by reference \n");
    int *p, *q;
    p=&a;
    q=&b;
     printf("before swap = %d \n %d \n " ,*p, *q);
   int temp=*p;
   *p=*q;
   *q=temp;
   printf("after swap = %d \n %d" ,*p,*q);
    
}

int main() {
     int x =3;
     int y = 5;
    f1(x,y);
    f2(x,y); 
    
  return 0 ;
} 