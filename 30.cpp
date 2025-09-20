//LCM of two numbers
#include <iostream>
using namespace std;
long long gcd(long long a,long long b){ if(b==0) return a; return gcd(b,a%b); }
int main(){
    long long a,b; cin>>a>>b;
    if(a==0||b==0){ cout<<0<<"\n"; return 0;}
    long long g = gcd(llabs(a), llabs(b));
    long long l = llabs(a/g*b);
    cout<<l<<"\n";
    return 0;
}

