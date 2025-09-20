/*WAP to take date as an input in below given format and 
convert the date format and display the result as given 
below. 
User Input date format – “DD/MM/YYYY” (27/11/2022) 
Output format – “Day – DD , Month – MM , Year – YYYY” 
(Day – 27, Month – 07, Year – 2022) */

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; cin>>s; // expects DD/MM/YYYY
    string dd = s.substr(0,2), mm = s.substr(3,2), yyyy = s.substr(6,4);
    cout<<"Day - "<<dd<<" , Month - "<<mm<<" , Year - "<<yyyy<<"\n";
    return 0;
}
