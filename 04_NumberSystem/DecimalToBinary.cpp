#include<iostream>
#include<math.h>
using namespace std;

int decimalToBinaryMethod1(int n) {
    // division method

    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        // cout << bit;
        binaryno = bit * pow(10, i++) + binaryno;
        n = n / 2;
    }
 
    // return 0;
    return binaryno;
}

int decimalToBinaryMethod2(int n) {
    // bitwise method

    int binaryno = 0;
    int i = 0;
    while (n > 0)
    {
      int bit =  (n & 1);
      binaryno = bit * pow(10, i++) + binaryno;
      n = n >> 1;
    }

    return binaryno;
    
}

int binaryToDecimalMethod1(int n) {
    // division meethod 

    int decimalno = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 2;
        decimalno = decimalno + bit * pow(2, i++);
        n = n / 10;
    }

    return decimalno; 
}

int binaryToDecimalMethod2(int n) {
    // bit method

    int decimalno = 0;
    int i = 0;

    while (n)
    {
        int bit = (n & 1);
        decimalno = decimalno + bit * pow(2, i++);
        n = n >> 1;
    }
    
    return decimalno;
}

int main() {

    // int num;
    // cout << "Enter the number in Decimal form : " << endl;
    // cin >> num;

    // int binary =  decimalToBinaryMethod1(num);
    // int binary = decimalToBinaryMethod2(num);
    // int binary = binaryToDecimal(num);
    // cout << binary << endl;

    int binaryno;

    cout << "Enter the number in binary : " << endl;
    cin>> binaryno;

    // cout << binaryToDecimalMethod1(binaryno);
    int decimal = binaryToDecimalMethod2(binaryno);
    cout << decimal;
    



    return 0;
}