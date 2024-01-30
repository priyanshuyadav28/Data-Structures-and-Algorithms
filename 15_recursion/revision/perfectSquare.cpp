#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int perfectSquares(int n) {
    // base case 1 
    if (n == 0) return 1; 
    if (n < 0) return 0; 


    int i = 1; 
    int ans = INT32_MAX; 
    int end = sqrt(n); 

    while (i <= end)
    {
        int perfectSquare = i * i;

        int numberOfSolution = 1 + perfectSquares(n - perfectSquare);

        if (numberOfSolution < ans)
            ans = numberOfSolution;
        ++i; 
    }
    
    return ans; 
     
}

int main() {
    
    int n = 13; 

    int ans = perfectSquares(n) - 1; 

    cout << ans << endl;
    
    


    return 0; 
}