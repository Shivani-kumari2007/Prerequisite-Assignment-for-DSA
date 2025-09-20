//Sum of squares of first N natural numbers
#include <iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    long long sum = n*(n+1)*(2*n+1)/6;
    cout<<sum<<"\n";
    return 0;
}
