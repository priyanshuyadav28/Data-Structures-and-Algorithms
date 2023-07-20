#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm> 
#include <string>

using namespace std;

int main() { 

    // creating a character array 
    // char ch[] = {'a', 'b', 'c', 'p', 'h'};

    // char ch[] = {}; 

    // cout << "Input the character " << endl; 
    // cin>>ch[0];
    // cout << "Input the character " << endl; 
    // cin>>ch[1];
    // cout << "Input the character " << endl; 
    // cin>>ch[2];
    // cout << "Input the character " << endl; 
    // cin>>ch[3];

    // cout << "The characters that you entered are" << endl;
    // cout << "index 0" << ch[0] << endl;
    // cout << "index 1" << ch[1] << endl;
    // cout << "index 2" << ch[2] << endl;
    // cout << "index 3" << ch[3] << endl;


    // if we take the input with the name of the array we can give the input in form of string but it will be stored in the form of character at different indexed starting from index 0
    // char name[100];
    // cout << "Enter the string" << endl;
    // cin >> name;

    // for (int i = 0; i < 9; i++)
    // {
    //     cout <<"index " << i << " " <<  name[i] << endl;
    // }

    // char arr[4];
    // cout << "Enter the characters in arr" << endl;
    // arr[0] = 'a';
    // arr[1] = 'n';
    // arr[2] = 'b';
    // arr[3] = 'x';

    // cout << arr[0];
    // cout << arr[1];
    // cout << arr[2];
    // cout << arr[3];
    // cout << arr[4];

    // cout << int(arr[5]) << endl;


    // char ch[15];
    // cout << "Enter your full name" << endl;
    // cin >> ch;
    // cout << ch << endl;
    // only first name will be displayed, after space characters will not be read by cin becasue it stops taking input after enter, space or tab
    
    // now to solve this we use getline function

    // char ch[50];
    // cout << "Enter your full name" << endl;

    // getline(cin, ch);
    // cin.getline(ch, 50);
    // cout << ch << endl; 

    



    return 0; 
}