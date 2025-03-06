#include<iostream>
using namespace std;

int main(){

    //All about variables and data types:-

    // variable defien:
    // int age = 21;
    // cout << "Abu age is :" << age <<endl;

    // declaration:
    // int age;
    // cout << "abu age is : " << age << endl;

    // definition:
    // int age = 21;
    // cout << "Abu age is: " << age << endl;

    // maniplation or updation:
    // age = 23;
    // cout << "Abu age is: " << age << endl;

    // dataTypes:-
    // integer:-
    int age = 21;
    cout << "Abu age is:" << age <<endl;

    // float:-
    float price = 9.99;
    cout << "Price is: " << price << endl;

    // Character:-
    char gender = 'M';
    cout << "Gender is: " << gender << endl;

    // double:-
    double pi = 3.14159;
    cout << "Pi is: " << pi << endl;

    // boolean:-
    bool isStudent = true;
    cout << "Abu is a student: " << isStudent << endl;

    int myAge = 21;
    cout << sizeof(myAge) << endl;

    {
        int age = 21;
        cout << "Abu age is: " << age << endl;
    }
    {
        int age = 22;
        cout << "Abu age is: " << age << endl;
    }




    return 0;
}