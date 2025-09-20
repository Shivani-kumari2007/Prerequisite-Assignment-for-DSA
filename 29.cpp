//Check whether a number is prime
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n; cin>>n;
    if(n<=1){ cout<<"Not Prime\n"; return 0; }
    for(long long i=2;i*i<=n;i++){
        if(n%i==0){ cout<<"Not Prime\n"; return 0; }
    }
    cout<<"Prime\n";
    return 0;
}
