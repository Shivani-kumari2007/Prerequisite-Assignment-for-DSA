//Reverse a given number
#include <iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    long long sign = n<0?-1:1; n = llabs(n);
    long long rev=0;
    while(n){ rev = rev*10 + (n%10); n/=10; }
    cout<< sign*rev <<"\n";
    return 0;
}
