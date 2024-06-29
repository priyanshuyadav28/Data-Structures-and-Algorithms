#include <iostream>
#include <vector>
#include <math.h>
#include <numeric>
#include <string>
#include <algorithm> 
#include <queue> 

using namespace std;

int getKthSmallestElement(int arr[], int n, int k) {
    // create a max heap 
    priority_queue<int> pq; 
    
    // push first k elements in the heap 
    for(int i = 0; i < k; i++) {
        pq.push(arr[i]); 
    }

    // for all remaining element push only when they are less than the top
    for(int i = k; i < n; i++) {
        int element = arr[i]; 
        
        if (element < pq.top()) {
            pq.pop(); 
            pq.push(element); 
        }
    }

    int ans = pq.top(); 
    
    return ans;  
}

int kthLargestElement(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq; 

    for(int i = 0; i < k; i++) {
        pq.push(arr[i]); 
    }

    for(int i = k; i < n; i++) {
        int element = arr[i]; 
        if (element > pq.top()) {
            pq.pop(); 
            pq.push(element); 
        }
    }

    return pq.top(); 
}

int main() {

    int arr[] = {10, 5, 20, 4, 15}; 
    int n = 5; 
    int k = 4; 

    int ans = getKthSmallestElement(arr, n, k); 

    cout << k << " th smallest element is : " << ans << endl; 



    return 0; 
}