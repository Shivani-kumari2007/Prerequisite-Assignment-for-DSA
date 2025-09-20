// HCF (GCD) of two numbers
#include <iostream>
using namespace std;
long long gcd(long long a,long long b){ if(b==0) return a; return gcd(b,a%b); }
int main(){
    long long a,b; cin>>a>>b;
    cout<< gcd(llabs(a), llabs(b)) <<"\n";
    return 0;
}

