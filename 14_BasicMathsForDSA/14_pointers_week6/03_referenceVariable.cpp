#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void solve(int& a) {
    a++;
}

void solve2(int* val) {
    *val = *val + 1;
}

int* solve3() {
    int a = 5;
    int* ans = &a;

    // cout << &a << endl;
    // cout << &ans << endl;
    // cout << *ans << endl;
    
    return ans;
}


int main() {

    // int a = 5;
    
    // int& b = a;

    // cout << a << endl;
    // cout << b << endl;

    // int num = 15;

    // cout << num << endl;

    // solve(num);

    // cout << num << endl;

    // int a = 12;

    // cout << a << endl;

    // solve2(&a);

    // cout << a << endl;


    // int a = 5;
    // int* p = &a;

    cout << solve3() << endl;

    return 0; 
}