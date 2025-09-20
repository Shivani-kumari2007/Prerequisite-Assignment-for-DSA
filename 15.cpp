//Create a program that takes the lengths of three sides of a triangle as input and determines whether the triangle is equilateral, isosceles, or scalene.

#include <iostream>
using namespace std;
int main(){
    double a,b,c; cin>>a>>b>>c;
    if(a<=0||b<=0||c<=0 || a+b<=c || a+c<=b || b+c<=a){
        cout<<"Not a triangle\n";
    } else if(a==b && b==c) cout<<"Equilateral\n";
    else if(a==b || b==c || a==c) cout<<"Isosceles\n";
    else cout<<"Scalene\n";
    return 0;
}
