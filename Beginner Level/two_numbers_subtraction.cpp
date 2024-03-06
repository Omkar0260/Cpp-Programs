#include<iostream>
using namespace std;

int main(){

    // Subtraction with two variables
    int a = 2 , b = 1;
    cout<<a-b<<endl;

    // Subtraction with three variables
    int m = 8, n = 4;
    int c = m - n;

    cout<<c<<endl;

    // Subtraction with two variables using user input
    int x;
    cout<<"Enter the value of the variable 'x'=";
    cin>>x;

    int y;
    cout<<"Enter the value of the variable 'y'=";
    cin>>y;

    cout<<"Addition of two variables 'x'&'y'="<<x-y<<endl;

    // Subtraction with three variables using user input
    int i;
    cout<<"Enter the value of the variable 'i'=";
    cin>>i;

    int j;
    cout<<"Enter the value of the variable 'j'=";
    cin>>j;

    int k = i-j;
    cout<<"Subtraction of two variables 'i'&'j'="<<k<<endl;

    return 0;

}