#include<iostream>
using namespace std;

int main (){

    // Ternary Operator
    // int age = 19;
    // if(age > 18){
    //     cout << "you can vote" << endl;
    // }else{
    //     cout << "you can't vote" << endl;
    // }

    // (age > 18) ? cout << "you can vote" : cout << "you can't vote";

    int x = 12;
    int y = 12;

    int result = (x > y) ? x : y;
    cout << "Result is: " << result << endl;



    return 0;
}