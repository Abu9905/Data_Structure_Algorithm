#include<iostream>
#include<math.h>
using namespace std;

// Binary to Decimal Conversion:-
    // // 1.) Divison Method:-
    // int decimalToBinaryMethod1(int n){
    //     // division method
    //     int binaryno = 0;
    //     int i = 0;
    //     while(n>0){
    //         int bit = n % 2;
    //         binaryno = bit*pow(10, i++) + binaryno;
    //         n = n / 2;
    //     }
    //     return binaryno;
    // }

     // 1.) bitwise Method2:-
    // int decimalToBinaryMethod2(int n){
    //     // division method
    //     int binaryno = 0;
    //     int i = 0;
    //     while(n>0){
    //         int bit = (n & 1);
    //         binaryno = bit*pow(10, i++) + binaryno;
    //         n = n >> 1;
    //     }
    //     return binaryno;
    // }

    int binaryToDecimal(int n){
        int decimal = 0;
        int i = 0;
        while(n > 0){
            int bit = n % 10;
            decimal = decimal + bit*pow(2, i++);
            n = n / 10;
        }

        return decimal;
    }


int main(){

    // int n ;
    // cin >> n;
    // int binary = decimalToBinaryMethod2(n);
    // cout << binary << endl;

    int binaryno;
    cin >> binaryno;
    cout << binaryToDecimal(binaryno) <<endl;


    return 0;
}