//Write a program that reads two integers from the user and determines if the first integer is divisible by the second integer.

#include <iostream>
using namespace std;
int main(){
    int a,b; cin>>a>>b;
    if(b==0) cout<<"Division by zero error\n";
    else cout << (a % b == 0 ? "Divisible\n" : "Not Divisible\n");
    return 0;
}
