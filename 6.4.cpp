#include <bits/stdc++.h>
using namespace std;

/*

Count Strictly Increasing Subarrays

Given an integer array arr[], the task is to count the number of subarrays in arr[] that are strictly increasing and have a size of at least 2. A subarray is a contiguous sequence of elements from arr[]. A subarray is strictly increasing if each element is greater than its previous element.

Examples:

Input: arr[] = [1, 4, 5, 3, 7, 9]
Output: 6
Explanation: The strictly increasing subarrays are: [1, 4], [1, 4, 5], [4, 5], [3, 7], [3, 7, 9], [7, 9]

Input: arr[] = [1, 3, 3, 2, 3, 5]
Output: 4
Explanation: The strictly increasing subarrays are: [1, 3], [2, 3], [2, 3, 5], [3, 5] 

Input: arr[] = [2, 2, 2, 2]
Output: 0
Explanation: No strictly increasing subarray exists.

1- Brute force: TC: O(n^3) - subarrays using 3 loops
2 -Brute force: TC: O(n^2) - subarrays using 2 loops
*/


int main()
{
    int a[] = {1, 4, 5, 3, 7, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int c= 0;
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        
            if(a[j-1] >= a[j])
            {
                break;
            }
        
            c++;
        }
    }
    
    cout << c << endl;
}



//Brute force : O(n^3)
/*

int main()
{
    int a[] = {1, 4, 5, 3, 7, 9};
    int n = sizeof(a)/sizeof(a[0]);
    int c= 0;
    
    
    for(int i=0; i<n; i++)
    {
        
        for(int j=i+1; j<n; j++)
        {
            bool flag = true;
            
            for(int k =i; k<j ; k++)
            {
                if(a[k] >= a[k+1])
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag == true)
            {
                c++;
            }
        }
    }
    
    cout << c << endl;
}
*/


/*

Maximum sum of a subarray of size k

Given an array of integers arr[] and an integer k, find the maximum possible sum among all contiguous subarrays of size exactly k.
A subarray is a sequence of consecutive elements from the original array. Return the maximum sum that can be obtained from any such subarray of length k.

Examples: 

Input  : arr[] = [100, 200, 300, 400],  k = 2
Output : 700
Explanation: We get maximum sum by adding subarray [300,400] of size 2

Input  : arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4 
Output : 39
Explanation: We get maximum sum by adding subarray [4, 2, 10, 23] of size 4.

Input  : arr[] = [2, 3], k = 1
Output : 3
Explanation: The subarrays of size 1 are [2] and [3]. The maximum sum is 3.

Input: [250, 250, 10, 10, 300]  k = 2
output: 500


1-Brute Force: TC: O(n*k)
2- Prefix sum array. TC: O(n), SC: O(n)
3 - Sliding window. TC: O(n), SC: O(1)

*/

/*
//Prefix sum code

int main() {

    int a[] = {2, 3};
    int n = sizeof(a)/sizeof(a[0]);
    int k=1;

    int prefixSum[n];
    prefixSum[0] = a[0];
    int currSum = 0;
    
    for(int i=1; i<n; i++)
    {
        prefixSum[i] = prefixSum[i-1] + a[i];
    }
    
    for(int i=0; i<n; i++)
    {
        cout << prefixSum[i] << " ";
    }
    
    int maxSum = prefixSum[k-1];
    
    for(int i =0; i< n-k; i++)
    {
        currSum = prefixSum[i+k] - prefixSum[i];
        maxSum = max(currSum, maxSum);
        
    }
    
    cout << endl;
    
    cout << "Max sum is: " << maxSum;
}
*/

// Sliding window code
/*
int main() {

    int arr[] = {250,250,10,10,300};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;

    if (n <k) {
        return 0;
    }

    int sum2 = 0;
    int maxsum =0;
    for (int i = 0; i < n; i++) {
        
        if(i<k){
            sum2 += arr[i] ;
        }
        
         else if(i>=k){
             sum2 += arr[i] - arr[i-k];
         }
        
       maxsum =  max(maxsum,sum2);
    }
    
    cout<<maxsum;

}
*/


/*
int main(){
    int a[] = {-100, 200, -300, 400};
    // psum = [-100, 100, -200, 200]
    200 - (-100) = 300
    
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    int maxSum = INT_MIN;
    
    if(k > n){
        return 0;
    }
    
    for(int i = 0; i <= n - k; i++){
        int currSum = 0;
        
        for(int j = 0; j < k; j++){
            currSum += a[i + j];
        }

        if(currSum > maxSum){
            maxSum = currSum;
        }
    }
    cout << maxSum;

    return 0;
}
*/
