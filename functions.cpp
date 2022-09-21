#include <iostream>
using namespace std ;
int max(int a, int b ) 
{  if(a>b)
    { return a ; }
    else 
    {return b ;}
      
      return 0 ;
}
 int main ()
 { int a,b,c,d;
 cin>> a >> b >> c >> d ; 
  int l= max(b,a);
  int r= max(d,c);
  int final_max=max(l,r);
  cout << final_max ;
 return 0 ;
}
