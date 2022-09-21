#include<stdio.h>
void update(int *a,int *b)
 {
   int sum =*a+*b;
   int diff =*a-*b; 
   *a=sum;
   if(diff<0){
       *b=-diff;
   }
     else{
         *b=diff;
     }
    }

int main() {
    int a,b;
    int *pa = &a, *pb = &b;
    scanf("%d\n%d",&a,&b); 
    update(pa,pb);
    printf("%d\n%d", a, b);

    return 0;
}
