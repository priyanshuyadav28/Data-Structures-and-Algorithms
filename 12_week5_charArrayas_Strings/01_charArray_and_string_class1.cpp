#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm> 

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
    char name[100];
    cout << "Enter the string" << endl;
    cin >> name;

    for (int i = 0; i < 9; i++)
    {
        cout <<"index " << i << " " <<  name[i] << endl;
    }
    
    char ch2[] = {'p', 'r'};
    


    return 0; 
}