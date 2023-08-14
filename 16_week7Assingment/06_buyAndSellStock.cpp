#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

void maxProfitFinder(vector<int>& prices, int i, int& minPrice, int& maxProfit) {
    // base case 
    if (i >= prices.size())
    {
        return;
    }
    
    // solution for one case 
    if (prices[i] < minPrice) minPrice = prices[i];
    
    int todaysProfit = prices[i] - minPrice;

    if (todaysProfit > maxProfit) maxProfit = todaysProfit;

    // RE
    maxProfitFinder(prices, i + 1, minPrice, maxProfit);    
    
    
}



int main() {

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    int minPrice = INT32_MAX;   
    int maxProfit = INT32_MIN;

    maxProfitFinder(prices, 0, minPrice, maxProfit);


    cout << maxProfit << endl;
      


    

    return 0; 
}