//Print all prime numbers under 100
#include <iostream>
using namespace std;
int main(){
    for(int n=2;n<100;n++){
        bool p=true;
        for(int i=2;i*i<=n;i++) if(n%i==0){ p=false; break; }
        if(p) cout<<n<<" ";
    }
    cout<<"\n";
    return 0;
}


