#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

// question 1 -> calculate the length of the char array /string
int getStrLength(char name[]) {
    int length = 0;
    int i = 0;

    while (name[i] != '\0')
    {
        length++;
        i++;
    }

    return length;
    
}

// question 2 -> reverse a string 
void revCharArray(char ch[]) {

    int l = 0;
    int n = getStrLength(ch);
    int h = n - 1;

    while (l <= h)
    {
        swap(ch[l], ch[h]);
        l++;
        h--;
    }

}

// question 3 -> replace all spaces
void replaceSpaces(char sentence[]) {
    int size = getStrLength(sentence);

    int i = 0;

    while (sentence[i] != '\0')
    {
        if (sentence[i] == ' ')
        {
            sentence [i] = '@';
        }
        i++;
    }
}

// questio 4 -> palindrome 

bool isPalindrome(char ch[]) {
    int s = 0;
    int e = getStrLength(ch) -1;

    while (s <= e)
    {
        if (ch[s] == ch[e])
        {
            s++;
            e--;
        } 
        else {
            return false;
        }
        
    }
    return true;
}





int main() {

    // char name[100];

    // question 1 -> calculate the length of the char array /string
    // cout << "Enter a string" << endl;
    // cin >>  name;

    // int ans = getStrLength(name);
    
    // cout << "The length of " << name << " is " << ans;

    // cout << "Length is " << getStrLength(name);
    
    // question 2 -> reverse a string
    // char ch[100];
    
    // cout << "Enter the string " << endl;
    // cin>> ch;

    // cout << "initially " << ch << endl;

    // revCharArray(ch);
    
    // cout << "Ater reversing " << ch << endl;


    // question 3 -> replace all spaces
    // char sentence[100];
    
    // cout << "Enter the text " << endl;
    // cin.getline(sentence, 100);

    // replaceSpaces(sentence);

    // cout << sentence;

    // question 4 ->  palindrome
    char ch[100];
    
    cout << "Enter the text to check for Palindrome" << endl;
    cin >> ch;
    
    cout << isPalindrome(ch) << endl;
    
    
    










    return 0; 
}