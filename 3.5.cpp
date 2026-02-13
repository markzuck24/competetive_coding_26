#include <bits/stdc++.h>
using namespace std;


/*
Equal Odd-Even Sum After Removal

Given an array arr[], count how many indices can be removed such that the sum of elements at even indices equals the sum of elements at odd indices in the resulting array

Input: arr[] = [2, 1, 6, 4] 
op: 1

eg: A = [2, 2, 2]
op: 3
*/

// 1- Brute force: TC: O(n^2)

int main()
{
    int a[] = {3,3,3};
    int n = sizeof(a)/sizeof(a[0]);
    
    int count = 0;
    
    for(int i =0; i<n ; i++)
    {
        int even_sum= 0, odd_sum = 0;
        int ind = 0;
        
        for(int j=0; j<n; j++)
        {
            if(i == j)
            {
                continue;
            }
            
            if(ind%2 == 0)
            {
                even_sum += a[j];
            }
            else
            {
                odd_sum += a[j];
            }
            
            ind++;
        }
        
        
        if(even_sum == odd_sum)
        {
            count++;
        }
    }
    
    cout << count << endl;
    
}

/*
Maximum Subarray Sum -> v.v.v imp

Given an integer array arr[], find the subarray (containing at least one element) which has the maximum possible sum, and return that sum.
Note: A subarray is a continuous part of an array.

1- Brute force code. -> O(n^2)
2- Optimised -> O(n) -> Kadane's Algo 
*/

/*

2- Optimised -> O(n) -> Kadane's Algo
int main() {
    int arr[] = {2,6,-7,13,0,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = INT_MIN;
    int curr_sum = 0;

    for(int i = 0; i < n; i++) {
         curr_sum = max(arr[i], (curr_sum + arr[i]));
         max_sum = max(max_sum , curr_sum);
    }

    cout <<  max_sum;

    return 0;
}
*/

/*

// TC: O(n^2)
int main(){
    int a[]={2,6,-7,13,0,4};
    
    int sum=0, maxsum=INT_MIN, n=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++)
    {
        sum = 0;
        
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            maxsum=max(maxsum,sum);
        }
    }
    
    cout<<maxsum;
    
    return 0;
}
*/

/*
int main() {
    int arr[] = {1,3,2,7,2,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max_sum = INT_MIN;

    for(int i = 0; i < n; i++) {
        int curr_sum = 0;
        for(int j = i; j < n; j++) {
            
            curr_sum += arr[j];
            
            max_sum = max(max_sum,curr_sum);
        }
    }

    cout <<  max_sum;

    return 0;
}


*/


// a[i][j] -> to access an array element present at ith row and jth column


