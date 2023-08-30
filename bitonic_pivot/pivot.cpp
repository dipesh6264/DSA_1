#include <iostream>
using namespace std;


int bitonic_pivot(int a[], int n)
{
int low=0;
int high=n-1;
int mid=(low+high)/2;

while(high>=low){
mid=(low+high)/2;
if(a[mid+1]<a[mid] && a[mid]>a[mid-1]){
break;
}
else if(a[mid]>a[mid-1]){
low=mid;
}
else if(a[mid]<a[mid-1]){
high=mid;
}

}
  return a[mid];  
}



int main(){

int a[10]={1,2,3,4,5,10,5,3,2,0};
cout<<bitonic_pivot(a, 10);

    return 0;

}