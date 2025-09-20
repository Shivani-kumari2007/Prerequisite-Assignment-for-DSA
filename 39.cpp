// Find next prime number after given number
#include <iostream>
using namespace std;
bool isPrime(long long n){ if(n<=1) return false; for(long long i=2;i*i<=n;i++) if(n%i==0) return false; return true; }
int main(){
    long long n; cin>>n;
    long long x = n+1;
    while(!isPrime(x)) x++;
    cout<<x<<"\n";
    return 0;
}

