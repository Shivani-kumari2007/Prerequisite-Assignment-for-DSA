//Create a program that takes a person's age as input and classifies them into different age groups (e.g., child, teenager, adult, senior). 

#include <iostream>
using namespace std;
int main(){
    int age; cin>>age;
    if(age<0) cout<<"Invalid\n";
    else if(age<=12) cout<<"Child\n";
    else if(age<=19) cout<<"Teenager\n";
    else if(age<=59) cout<<"Adult\n";
    else cout<<"Senior\n";
    return 0;
}
