#include <iostream>
using namespace std;

void tower_hanoi(int n, char a,char b, char c){
    if(n==1){
        cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
        return;
    }
tower_hanoi(n-1,a,c,b);
cout<<"move "<<n<<" from "<<a<<" to "<<c<<endl;
tower_hanoi(n-1,b,a,c);
}




int main(){
tower_hanoi(3,'s','m','e');

return 0;}