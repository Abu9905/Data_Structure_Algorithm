#include<iostream>
using namespace std;

// ex:-01
int sum(int a, int b){

    int totalSum = a + b;
    return totalSum;
}

// Ex:-02
void printMyName(){
    cout << "MY name is Abu" << endl;
}

// Ex:-03
int getMultiplication(int a , int b){
    int mul = a * b;
    return mul;
}

// Ex:-04
void printNameTimes(){
    for(int i = 0; i < 10; i++){
        cout << "Abu" << endl;
    }
}

// Ex:- 05
void printMultiples(int num){
    for(int i =1; i<=10; i++){
        cout << num * i << endl;
    }
}

// Ex:- 06
int convertToCelsius(int fahrenheit){
    int celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}

// Ex:- 07
char convertToUpperCase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}

int main(){
    // int ans = sum(10 , 20);
    // cout << "The sum is: " << ans << endl; 

    int ans = getMultiplication(10 , 20);
    cout << "The multiplication is: " << ans << endl;

    printNameTimes();

    printMultiples(5);

    int celsius = convertToCelsius(32);
    cout << "The celsius is: " << celsius << endl;

    char anss = convertToUpperCase('a');
    cout << "The upper case is: " << anss << endl;



    // printMyName();





    return 0;
}

