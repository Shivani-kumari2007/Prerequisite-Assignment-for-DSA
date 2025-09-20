//Check whether a number is an Armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n; cin>>n;
    long long tmp = llabs(n);
    int digits = 0; long long t = tmp;
    while(t){ digits++; t/=10; }
    if(tmp==0) digits=1;
    long long sum=0; t=tmp;
    while(t){ int d = t%10; sum += (long long) pow(d,digits); t/=10; }
    cout << (sum==tmp ? "Armstrong\n" : "Not Armstrong\n");
    return 0;
}

