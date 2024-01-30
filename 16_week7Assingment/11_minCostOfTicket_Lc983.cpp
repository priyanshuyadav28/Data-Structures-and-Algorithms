#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 

using namespace std;

int minCostTickets(vector<int>& days, vector<int>& costs, int i) {
    // base case 
    if (i >= days.size())
    {
        return 0;
    }
    

    // sol for one case 
    // 1 day pass taken
    int cost1 = costs[0] + minCostTickets(days, costs, i + 1);  

    // 7 day pass taken 
    int passEndDay = days[i] + 7 - 1;
    int j = i;

    while ( j < days.size() && days[j] <= passEndDay)
    {
        j++;
    }
    
    int cost7 = costs[1] + minCostTickets(days, costs, j);  


    // 30 day pass taken 
    passEndDay = days[i] + 30 - 1;
    j = i;

    while ( j < days.size() && days[j] <= passEndDay)
    {
        j++;
    }
    
    int cost30 = costs[2] + minCostTickets(days, costs, j);          
    
    return min(cost1, min(cost7, cost30));
}

int main() {




    return 0; 
}