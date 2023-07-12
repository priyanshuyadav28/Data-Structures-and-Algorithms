#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <algorithm>

using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    // convert time string into integers
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];

        int hours = stoi(curr.substr(0, 2));
        int min = stoi(curr.substr(3, 5));

        int totalMinutes = hours * 60 + min;

        minutes.push_back(totalMinutes);
    }
    // sorting for better complexity in comparision
    sort(minutes.begin(), minutes.end());

    // claculate minimum difference
    int mini = INT16_MAX;

    for (int i = 0; i < minutes.size() - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }

    // something missing
    int lastDiff = (minutes[0] + 1440) - minutes[minutes.size() - 1];
    mini = min(mini, lastDiff);

    return mini;
}
int main()
{

    vector<string> timePoints = {"23:59", "00:00"};
    



    return 0;
}