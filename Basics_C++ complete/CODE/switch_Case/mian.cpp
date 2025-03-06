#include<iostream>
using namespace std;

int main (){

    // Switch case

    char grade;
    cout << "Enter your grade" << endl;
    cin >> grade;

    // if(grade == 'A'){
    //     cout << "Excellent" << endl;
    // }else if(grade == 'B'){
    //     cout << "Good" << endl;
    // }else if(grade == 'C'){
    //     cout << "Average" << endl;
    // }else if(grade == 'D'){
    //     cout << "Bad" << endl;
    // }else{
    //     cout << "Fail" << endl;
    // }

//     Using switch case:-
    switch(grade){
        case 'A':
            cout << "Excellent" << endl;
            break;
        case 'B':
            cout << "Good" << endl;
            break;
        case 'C':
            cout << "Average" << endl; 
            break;
        case 'D':
            cout << "Bad" << endl;
            break;
        default:
            cout << "Fail" << endl;
    }


    return  0;
}