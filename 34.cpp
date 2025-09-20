//. Check whether a number is in the Fibonacci series
#include <iostream>
using namespace std;
// A number x is Fibonacci if one of (5x^2+4) or (5x^2-4) is perfect square.
#include <cmath>
bool isPerfect(long long x){ long long r = (long long) sqrt((long double)x); return r*r==x || (r+1)*(r+1)==x; }
int main(){
    long long x; cin>>x;
    long long t1 = 5*x*x + 4;
    long long t2 = 5*x*x - 4;
    cout << (isPerfect(t1) || isPerfect(t2) ? "Yes\n" : "No\n");
    return 0;
}

