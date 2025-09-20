//Sum of first N even natural numbers
#include <iostream>
using namespace std;
int main(){
    long long n; cin>>n; // first n even numbers: 2,4,...,2n sum = n(n+1)
    cout<< n*(n+1) <<"\n";
    return 0;
}
