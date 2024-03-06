#include<iostream>
using namespace std;

int main(){

    // Division with two variables
    int a = 4 , b = 2;
    cout<<a/b<<endl;

    // Division with three variables
    int m = 8, n = 4;
    int c = m / n;

    cout<<c<<endl;

    // Division with two variables using user input
    int x;
    cout<<"Enter the value of the variable 'x'=";
    cin>>x;

    int y;
    cout<<"Enter the value of the variable 'y'=";
    cin>>y;

    cout<<"Division of two variables 'x'&'y'="<<x/y<<endl;

    // Division with three variables using user input
    int i;
    cout<<"Enter the value of the variable 'i'=";
    cin>>i;

    int j;
    cout<<"Enter the value of the variable 'j'=";
    cin>>j;

    int k = i/j;
    cout<<"Division of two variables 'i'&'j'="<<k<<endl;

    return 0;

}