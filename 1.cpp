//Write a program to calculate average of three integers. Numbers are given by the user

#include <iostream>
using namespace std;
int main(){
    int a,b,c; 
    cin>>a>>b>>c;
    double avg = (a + b + c) / 3.0;
    cout<<avg<<"\n";
    return 0;
}
