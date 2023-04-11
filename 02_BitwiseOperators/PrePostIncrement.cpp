#include<iostream>
using namespace std;


int main()
{

    int r_no;
    // char r_no;
    // string r_no;
    // double r_no;
    cout << "Enter the Roll Number" << endl;
    cin >> r_no;

    switch (r_no)
    {
    case 1:
    cout << "Aditya" << endl;
    break;

    case 2:
    cout << "Ayush" << endl;
    break;

    case 3:
    cout << "Divyanshu" << endl;
    break;

    case 4:
    cout << "Prashant" << endl;
    break;

    case 5:
    cout << "Prince" << endl;
    break;
    
    default:
    cout << "Priyanshu " << endl;
     break;
    }


    // for (int i = 0; i < 5; i++)
    // {
    //     continue;
    //     cout << "Priyanshu" << endl;
    //     // break;
    // }

    // cout << "Yadav" << endl;
    

    // int a = 5;
    // int c = (++a) * (++a);
    // cout << c;


    // int a = 6;
    // int c = (a++) + 1;
    // cout << c;

    // int a = 5;
    // cout << a++ << endl;
    // cout << a << endl;
    
    return 0;
}
