#include <bits/stdc++.h>
using namespace std;

/*

Intersection of intervals given by two lists


Given two 2-D arrays which represent intervals. Each 2-D array represents a list of intervals. Each list of intervals is disjoint and sorted in increasing order. Find the intersection or set of ranges that are common to both the lists.
Note: Disjoint means no element is common in a list

Examples: 

Input   
arr1[][] = {{0, 4}, {5, 10}, {13, 20}, {24, 25}}   
arr2[][] = {{1, 5}, {8, 12}, {15, 24}, {25, 26}} 

Output  {{1, 4}, {5, 5}, {8, 10}, {15, 20}, {24, 24}, {25, 25}}

Explanation  {1, 4} is the overlap of {0, 4} and {1, 5}. Similarly, {24, 24} is the overlap of {24, 25} and {15, 24}.

Input  
arr1[][] = {{0, 2}, {5, 10}, {12, 22}, {24, 25}}  
arr2[][] = {{1, 4}, {9, 12}, {15, 24}, {25, 26}} 

    ----------------
        ---------------
Output  {{1, 2}, {9, 10}, {12, 12}, {15, 22}, {24, 24}, {25, 25}} 

Explanation  {1, 2} is the overlap of {0, 2} and {1, 4}. Similarly, {12, 12} is the overlap of {12, 22} and {9, 12}. 


*/

    int i = 0, j = 0;
 
     int n = arr1.size(), m = arr2.size();


 
     while (i < n && j < m)
        {

            int l = max(arr1[i][0], arr2[j][0]);
            int r = min(arr1[i][1], arr2[j][1]);
            
            
             if (l <= r)
                cout << "[" << l << ", " << r << "]\n";
                
            
            if(arr1[i][1] < arr2[j][1])
            {
                i++;
            }
            else
            {
                j++;
            }


            
/*


Majority Element


Given an array arr[] of size n, find the element that appears more than ⌊n/2⌋ times. If no such element exists, return -1.

Examples:

Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Element 1 appears 4 times. Since ⌊7/2⌋ = 3, and 4 > 3, it is the majority element.

Input: arr[] = [7]
Output: 7
Explanation: Element 7 appears once. Since ⌊1/2⌋ = 0, and 1 > 0, it is the majority element.

Input: arr[] = [2, 13]
Output: -1
Explanation: No element appears more than ⌊2/2⌋ = 1 time, so there is no majority element.

1- Brute force: TC: O(n^2),  SC: O(1)
2- Using sorting -> TC: O(nlogn), SC: O(1)
3- TC: O(n), SC: O(1)
*/

/*

    int n = arr.size();
    
    int candidate = -1;
    int count = 0;

    // Find a candidate
    for (int num : arr) {
       
        if (count == 0) {
            candidate = num;
            count = 1;
        } 
        else if (num == candidate) {
            count++;
        } 
        else {
            count--;
        }
    }
    
    count = 0;
    for (int num : arr) 
    {
        if (num == candidate) 
        {
            count++;
        }
    }
    
     if (count > n / 2) {
        return candidate;
    } else {
        return -1;
    }
    
    
*/

    
    
/*

    sort(a, a+n);
    
    candidate = a[n/2];
    
    int count = 0;
    for (int num : arr) {
        if (num == candidate) {
            count++;
        }
    }

    if (count > n/2) {
        return candidate;
    }
    
*/


/*
  for (int i = 0; i < n; i++) {
        
        int count = 0; 
        
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        
         if (count > n / 2) {
            return arr[i]; 
        }
    }
*/

    
/*

#include <bits/stdc++.h>
using namespace std;

//TC: O(n) , SC : O(n)
int main()
{
    int a[]={1,1,1,2,1,3};
    int n = sizeof(a)/sizeof(a[0]);
    int freq[n]={0};
    int c= 0;
    int flag = 0;
    
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    for (int i=0;i<n;i++){
        if(freq[i]>(n/2)){
            cout<<a[i]<<" ";
            flag = 1;
            break;
        }
        
    }
    
    if(flag == 0)
    {
         cout<< -1 << endl;
    }
    
  
}
*/


/*

Count Subarrays With Exactly K Distinct Elements

Given an array arr[] and an integer k, the task is to find the count of subarrays such that each subarray has exactly k distinct elements.

Examples:

Input: arr[] = [1, 2, 2, 3], k = 2 
Output: 4 
Explanation: Subarrays with exactly 2 distinct elements are: [1, 2], [1, 2, 2] and [2, 3].

Input: arr[] = [3, 1, 2, 2, 3], k = 3 
Output: 4
Explanation: Subarrays with exactly 3 distinct elements are: [3, 1, 2], [3, 1, 2, 2], [3, 1, 2, 2, 3] and [1, 2, 2, 3].

Input: arr[] = [1, 1, 1, 1], k = 2
Output: 0
Explanation: There is no subarray having exactly 2 distinct integers.

1- using set 
2 - Sliding window.
*/

/*

int left = 0, right = 0;
int count = 0;

unordered_map<int, int> freq;

    while (right < n) {
        freq[arr[right]] += 1;

     if (freq[arr[right]] == 1)
            k -= 1;


     while (k < 0) {
            freq[arr[left]] -= 1;
            if (freq[arr[left]] == 0)
                k += 1;
            
            left += 1;
        }

    count += (right - left + 1);
    right += 1;

*/

/*

int main()
{
    int a[] = {3, 1, 2, 2, 3};
    int k = 3;
    int n = sizeof(a)/sizeof(a[0]);
    int count = 0;
    
    
    for(int i=0; i<n; i++)
    {
        unordered_set<int> s;
        
        for(int j=i; j<n; j++)
        {
            s.insert(a[j]);
            
            if(s.size() > k)
            {
                break;
            }
            else if(s.size() == k)
            {
                count++;
            }
        }
    }
    
    cout << count << endl;
    
}
*/
