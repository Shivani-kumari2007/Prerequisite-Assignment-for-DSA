//Right triangle alphabets
#include <iostream>
using namespace std;
int main() {
    int n=5;
    for(int i=1;i<=n;i++) {
        for(char c='A'; c<'A'+i; c++) cout<<c<<" ";
        cout<<"\n";
    }
}
