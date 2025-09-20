//. Print first N terms of Fibonacci series
#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    long long a=0,b=1;
    if(n>=1) cout<<a<<" ";
    if(n>=2) cout<<b<<" ";
    for(int i=3;i<=n;i++){
        long long c=a+b; cout<<c<<" "; a=b; b=c;
    }
    cout<<"\n";
    return 0;
}


