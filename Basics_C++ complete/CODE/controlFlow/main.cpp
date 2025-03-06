#include<iostream>
using namespace std;


int main (){

    // if statement:-
    // if - else
    // if - else if
    // if - else if - else
    // nasted if 

    // int budge;
    // cout << "Enter your budge" << budge << endl;
    // // input
    // cin >> budge;
    // if(budge > 2000000){
    //     cout << "You can buy scope "<<endl;
    // }else{
    //     cout << "You can't  buy scope" <<endl;
    // }

    int marks = 65;
    // cout << "Enter your marks" << marks << endl;
    // cin >> marks;
    if(marks > 90){
        cout << "You got A grade" << endl;
    }else if(marks > 80){
        cout << "You got B grade" <<endl;
    }else if(marks > 70){
        cout << "You got C grade" <<endl;
    }else if(marks > 60){
        cout << "Your Faild" << endl;
    }else{
        cout << "you can't read this book"<<endl;
    }

    int height;
    cout << "Enter your height : " << endl;
    cin>> height;

    int weight;
    cout << "Enter your weight : " << endl;
    cin >> weight;

    if( height > 5){
        if(weight > 70){
            cout << "You got a good BMI" << endl;
        }else{
            cout << "Bhai aap se nahi hoga" << endl;
        }
    }else{
        cout << "Complan kha lo" << endl;
    }


    return 0;
}