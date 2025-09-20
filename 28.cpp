//Count digits in a given number
#include <iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    if(n==0){ cout<<1<<"\n"; return 0; }
    int cnt=0; n = llabs(n);
    while(n){ cnt++; n/=10; }
    cout<<cnt<<"\n";
    return 0;
}
