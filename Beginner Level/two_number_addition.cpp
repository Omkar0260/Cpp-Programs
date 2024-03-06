#include<iostream>
using namespace std;

int main(){

    // Addition with two variables
    int a = 1 , b = 2;
    cout<<a+b<<endl;

    // Addition with three variables
    int m = 3, n = 4;
    int c = m + n;

    cout<<c<<endl;

    // Addition with two variables using user input
    int x;
    cout<<"Enter the value of the variable 'x'=";
    cin>>x;

    int y;
    cout<<"Enter the value of the variable 'y'=";
    cin>>y;

    cout<<"Addition of two variables 'x'&'y'="<<x+y<<endl;

    // Addition with three variables using user input
    int i;
    cout<<"Enter the value of the variable 'i'=";
    cin>>i;

    int j;
    cout<<"Enter the value of the variable 'j'=";
    cin>>j;

    int k = i+j;
    cout<<"Addition of two variables 'i'&'j'="<<k<<endl;

    return 0;

}