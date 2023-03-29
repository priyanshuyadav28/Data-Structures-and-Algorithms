#include<iostream>
using namespace std;

void pattern1(int row, int col) {
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";           
        }
        cout<<endl;
    }
}

void patter2(int row, int col) {
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
            cout << "* ";
       }
       
       cout << endl;
       
    }
    
}

int main() {
    // pattern1(3, 5);
    patter2(4, 4);

    return 0;
}