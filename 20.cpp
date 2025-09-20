//Largest among four numbers
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    int mx = max(max(a,b), max(c,d));
    cout<<mx<<"\n";
    return 0;
}
