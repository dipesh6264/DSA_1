#include <iostream>
using namespace std;

void primeSieve(int n){
int arr[100]={0};

for(int i=2;i<=n;i++){

    if(arr[i]==0){
        cout<<i<<" ";
        int j=i*i;
        while(j<=n){
        arr[j]=1;
        j=j+i;
        }
    }
}

}

int main(){

primeSieve(30);

    return 0;
}