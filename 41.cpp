//Print all Armstrong numbers under 1000
#include <iostream>
#include <cmath>
using namespace std;
int digits(int x){ if(x==0) return 1; int c=0; while(x){ c++; x/=10;} return c;}
int main(){
    for(int n=0;n<1000;n++){
        int d = digits(n);
        int t=n, sum=0;
        while(t){ int r=t%10; sum += (int) pow(r,d); t/=10; }
        if(sum==n) cout<<n<<" ";
    }
    cout<<"\n";
    return 0;
}
