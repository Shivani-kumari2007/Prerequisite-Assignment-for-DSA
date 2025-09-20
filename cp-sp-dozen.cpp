//Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.
#include <iostream>
using namespace std;
int main(){
    double cp_per_dozen, sp_per_dozen;
    cin>>cp_per_dozen>>sp_per_dozen;
    double cp_one = cp_per_dozen / 12.0;
    double sp_one = sp_per_dozen / 12.0;
    double total_profit = (sp_one - cp_one) * 25.0;
    if(total_profit>0) cout<<"Profit: "<<total_profit<<"\n";
    else if(total_profit<0) cout<<"Loss: "<<-total_profit<<"\n";
    else cout<<"No Profit No Loss\n";
    return 0;
}
