/*WAP to take time as an input in below given format and 
convert the time format and display the result as given 
below. 
User Input date format – “HH:MM”*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string t; cin>>t; // HH:MM
    string hh = t.substr(0,2), mm = t.substr(3,2);
    cout<<"Hour - "<<hh<<" , Minute - "<<mm<<"\n";
    return 0;
}
