//Print day of week for input 1-7

#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    string days[] = {"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    if(n>=1 && n<=7) cout<<days[n]<<"\n";
    else cout<<"Invalid\n";
    return 0;
}
