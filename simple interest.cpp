//Write a program to calculate simple interest. 

#include <iostream>
using namespace std;
int main(){
    double principal, rate, time;
    cin>>principal>>rate>>time;
    double si = (principal * rate * time) / 100.0;
    cout<<si<<"\n";
    return 0;
}
