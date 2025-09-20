//Develop a program that converts a temperature from Fahrenheit to Celsius or vice versa based on user input. The user should specify the type of conversion. 

#include <iostream>
using namespace std;
int main(){
    char choice; // 'F' to convert F->C, 'C' to convert C->F
    double temp; cin>>choice>>temp;
    if(choice=='F' || choice=='f'){
        double c = (temp - 32.0) * 5.0/9.0;
        cout<<c<<"\n";
    } else if(choice=='C' || choice=='c'){
        double f = (temp * 9.0/5.0) + 32.0;
        cout<<f<<"\n";
    } else cout<<"Invalid choice\n";
    return 0;
}

