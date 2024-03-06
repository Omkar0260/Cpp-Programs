#include<iostream>
using namespace std;

int main(){

    int dividend, divisor, quotient, remainder;
    
    cout<<"Enter the values of Dividend:";
    cin>>dividend;

    cout<<"Enter the values of Divisor:";
    cin>>divisor;

    quotient = dividend / divisor; // Integer division to get the Quotient.
    remainder = dividend % divisor; // Getting the Remainder after dividing the Dividend by the Divisor.
  
    cout << "Quotient: " << quotient<<endl; 
    cout << "Remainder: " << remainder;  
	return 0;
}