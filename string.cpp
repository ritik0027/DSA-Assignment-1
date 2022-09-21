#include <iostream>
#include <string>
using namespace std;

int main() {
string A , B ;
char x ;
cin >> A >> B ;
int l1= A.size();
int l2= B.size();
cout<< l1 << " " << l2 << endl ;
string C= A+B ;
cout<< C << endl ;
x=A[0];
A[0]=B[0];
B[0]=x;
cout << A << " " << B ;


  
    return 0;
}
