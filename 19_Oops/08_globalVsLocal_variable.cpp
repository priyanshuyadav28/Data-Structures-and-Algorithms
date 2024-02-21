#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int x = 2; // GLOBAL VARIABLE

void fun () {
    int x = 60; 
    cout << x << endl; 
    cout << ::x << endl; 
}

int main() {

    x = 4; // global x reinitialization 
    int x = 20; // local to main() fn. 
    cout << x << endl; 

    cout << ::x << endl; // accessing global with ::

    {
        int x = 50; 
        cout << x << endl; 
    }

    fun(); 


    return 0; 
}