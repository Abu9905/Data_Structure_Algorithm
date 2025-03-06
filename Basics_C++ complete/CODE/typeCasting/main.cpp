#include<iostream>
using namespace std;

int main(){

    int num1 = 10; 
    float num2 = 5.5;

    int result = num1 + num2;
    // cout << "Result: " << result << endl;
    
    char ch = 'A';
    int a = ch + 1;
    // cout << a << endl;

    int b = 97;
    char che = b;
    // cout << che << endl;

    char g = 'B';
    int gg = g;
    // cout << gg << endl;

    // Explicit Type Casting:-
    int num3 = 10;
    int num4 = 5.5;
    float result1 = num3 + (int)num4;
    // cout << result1 << endl;

    double pi = 3.141592;
    int intPi = (int)pi;
    cout << intPi << endl;

    float floadingNumber = 45.35;
    char charNumber = (char)floadingNumber;
    cout << charNumber << endl;

    int d = 10;
    int f = 3;
    float div = (float)d/f;
    cout << div << endl;





    return 0;
}