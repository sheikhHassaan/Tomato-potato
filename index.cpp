#include<iostream>
using namespace std;

int main(){

    int num1, num2, sum;
    string prompt1 = "Enter the first number: ";
    string prompt2 = "Enter the second number: ";
    
    cout << prompt1;
    cin >> num1;
    
    cout << prompt2;
    cin >> num2;

    sum = num1 + num2;
    cout << "The sum is: " << sum;

    cout << "Little modification for gitbash." << endl;
    cout << endl;
    return 0;
}