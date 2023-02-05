#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome to basic C++ Calculator \n";
    cout<<"This will calculate the sum of two numbers.\n\n";
    int num1 = 1;
    cout << "Enter first number (default value is 1): ";
    cin >> num1;

    int num2 = 1;
    cout << "Enter second number (default value is 1): ";
    cin >> num2;

    cout<<"\nThe sum of these two numbers is "<< num1 + num2;
    return 0;
}