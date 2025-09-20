//Write a program that takes a start year and an end year from the user and prints all the leap years in that range.

#include <iostream>
using namespace std;
bool isLeap(int y){ return (y%4==0 && y%100!=0) || (y%400==0); }
int main(){
    int a,b; cin>>a>>b;
    if(a>b) swap(a,b);
    for(int y=a;y<=b;y++) if(isLeap(y)) cout<<y<<" ";
    cout<<"\n";
    return 0;
}
