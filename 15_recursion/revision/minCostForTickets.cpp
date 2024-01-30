#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int minCostForTickets(vector<int> &days, vector<int> &costs, int i)
{

    // base case
    if (i >= days.size())
        return 0;

    int minCost = INT32_MAX;
    // solve for one case

    // one day pass taken
    int oneDayPass = costs[0] + minCostForTickets(days, costs, i + 1);

    // seven day pass taken 
    int passEndDay = days[i] + 7 - 1; 
    int j = i; 

    while (j < days.size() && j <= passEndDay)
    {
        j++; 
    }
    
    int sevenDayPass = costs[1] + minCostForTickets(days, costs, j);

    // 30 day pass taken 
    int passEndDay2 = days[i] + 30 - 1;
    int k = i;

    while (k < days.size() && k < passEndDay2)
    {
        k++; 
    }
    

    int thirtyDayPass = costs[2] + minCostForTickets(days, costs, k);

    minCost = min(oneDayPass, min(sevenDayPass, thirtyDayPass));

    return minCost;
}

int main()
{

    vector<int> days = {2, 5};
    vector<int> costs = {2, 7, 15};

    int i = 0;

    int ans = minCostForTickets(days, costs, i); 
    cout << ans << endl;

    return 0;
}