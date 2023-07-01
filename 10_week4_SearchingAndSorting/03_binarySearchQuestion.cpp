#include<iostream>
#include<vector>

using namespace std;

// question 1 -> find in nearly sorted array. 
int findInNearlySortedArray(vector<int> arr, int target) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == arr[mid])
        {
            return mid;
        }

        else if (mid + 1 <= end && target == arr[mid + 1])
        {
            return mid + 1;
        }

        else if (mid -1 >= start && target == arr[mid - 1])
        {
            return mid - 1;
        }

        else if (target > arr[mid])
        {
            start = mid + 2;
        }
        else {
            end = mid - 2;
        }
     
    }
    return -1;
    
}

// question 2 -> division of two number by binary search
int divisionOfTwoNumbersBs(int target, int divisor) {
    int start = 0;
    int end = abs(target / 2);
    int ans = -1;

    if (target == divisor)
    {
        return 1;
    }
    

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (abs(divisor * mid) == abs(target))
        {
            ans = mid;
            return ans;
        }
        else if (abs(divisor * mid) < abs(target))
        {
           ans = mid;
           start = mid + 1;
        }
        else{
            end = mid - 1;
        } 
    }

    if ((divisor < 0 && target < 0) || (divisor > 0 && target > 0))
    {
        return ans;
    }
    else {
        return -ans; 
    }
    
}



// question 3 -> odd occurence of an element 
int oddOccurenceOfElement(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (start == end)
        {
            return start;
        }

        else if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                start = mid + 2;
            } 
            else {
                end = mid;
            }
            
        }
        else {
            if (arr[mid] == arr[mid - 1])
            {
                start = mid + 1;
            }
            else {
                end = mid;
            }
            
        } 
    }
    
    return -1;

}


int main() {
    // question 1 -> find in nearly sorted array 
    // vector<int> arr = {10, 3, 40, 20, 50, 80, 70};
    // int target = 70;
    // int ans = findInNearlySortedArray(arr, target);

    // cout << ans;

    // question 2 -> division of two numbers using binary search
    // int target = 1;
    // int divisor = 1;
    // int ans = divisionOfTwoNumbersBs(target, divisor);
    // cout << ans << endl;


    // double finalAns = ans;
    // double step = 0.1;
    // int precision = 3;

    // for (int i = 0; i < precision; i++)
    // {
    //     for (double i = finalAns; i * divisor <= target; i = i + step)
    //     {
    //     finalAns = i;
    //     }

    //     step /= 10;
    // }
    
    // cout << finalAns;


    // question 3 -> odd occurence of an element 
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600};
    int ans = oddOccurenceOfElement(arr);

    cout << ans;
    


    return 0;
}