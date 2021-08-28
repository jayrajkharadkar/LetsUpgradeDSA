#include<iostream>
using namespace std;
int main(){
int a=1, b=1, n=10;
while(b<=n){
    a=a+1;
    b=a+b;
    cout<<"hello";

}

//For above code snippit the Time complexity will be O(underoot of n) respectively

for(int i=n;i<=1;i=i/3){
    cout<<"hi";
}

//For above code snippit the Time complexity will be O(logn) respectively.

return 0;
}
