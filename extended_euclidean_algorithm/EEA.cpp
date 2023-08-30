#include <iostream>
using namespace std;

void extended_euclid(int n, int m , int* x ,int* y){
if(m==0){
    *x=1;
    *y=0;

return;
}

extended_euclid(m,n%m,x,y);
int x2=*x;
int y2=*y;

*x= y2;
*y= x2 - (n/m) * y2;
}


int main(){
int m=5;
int n=2;
int p,q;
int *x=&p;
int *y=&q;

extended_euclid(m,n,x,y);
cout<<"value of x is : "<<*x<<endl;
cout<<"value of y is : "<<*y<<endl;
    return 0;
}