//Sum of cubes of first N natural numbers
#include <iostream>
using namespace std;
int main(){
    long long n; cin>>n;
    long long sum = (n*(n+1)/2);
    cout<< sum*sum <<"\n"; // (1+...+n)^2
    return 0;
}
