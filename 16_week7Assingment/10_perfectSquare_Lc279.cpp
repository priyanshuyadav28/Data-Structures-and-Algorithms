#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int numSquares(int num) {
    // base case    
    if (num == 0) return 0;
    if (num < 0) return 0;

    int ans = INT32_MAX;
    int i = 1;
    int end = sqrt(num);

    while (i <= end)
    {
        int perfectSquare = i * i;
        int numberOfPerfectSquares = 1 + numSquares(num - perfectSquare);

        if (numberOfPerfectSquares < ans)
        {
            ans = numberOfPerfectSquares;
        }
        ++i; 
    } 

    return ans;
    
}

int main() {

    int num = 12;

    int ans = numSquares(num);

    cout << ans;

    return 0; 
}