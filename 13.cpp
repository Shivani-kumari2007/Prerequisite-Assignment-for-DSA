//Develop a program that takes a student's score (0-100) as input and prints the corresponding grade (e.g., A, B, C, D, F) based on a grading scale. 

  #include <iostream>
using namespace std;
int main(){
    int s; cin>>s;
    if(s<0||s>100) cout<<"Invalid\n";
    else if(s>=90) cout<<"A\n";
    else if(s>=75) cout<<"B\n";
    else if(s>=60) cout<<"C\n";
    else if(s>=40) cout<<"D\n";
    else cout<<"F\n";
    return 0;
}
