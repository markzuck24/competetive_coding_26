#include <bits/stdc++.h>
using namespace std;

/*

Find duplicates:
Given an array arr[] of n elements that contains elements from 0 to n-1, with any of these numbers appearing any number of times. The task is to find the repeating numbers.

Note: The repeating element should be printed only once.

Input: n = 7, arr[] = [1, 2, 3, 6, 3, 6, 1]
Output: 1, 3, 6
Explanation: The numbers 1 , 3 and 6 appears more than once in the array.

Input : n = 5, arr[] = [1, 2, 3, 4 ,3]
Output: 3
Explanation: The number 3 appears more than once in the array.


1 - Brute force - O(n^2)
2 - optimised with hashmap - O(n)
3- optimised without hashmap.
*/

/*

int main()
{
    int arr[]={1,2,3,6,3,6,1};
    
    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    for(auto it:m)
    {
        if(it.second>1)
        {
            cout << it.first << " ";
        }
    }

    return 0;
}
*/


/*
int main()
{
    int arr[]={1,2,3,6,3,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }

        if(count>1)
        {
            int flag=0;
            for(int k=0;k<i;k++)
            {
                if(arr[k]==arr[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<arr[i]<<" ";
        }
    }
    return 0;
}
*/

/*
Question : Given a non-empty array of integers, every element appears twice except for one. Find that single one.

So if you're given an array: [2,1,5,3,1,5,2] the result will be 3 since 3 occurs once.

1- Brute force - O(n^2)
2- Optimised - sorting - O(nlogn)
3- Optimised - hashmap - O(n)
*/


/*

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={2,1,5,3,1,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    for(int i=0; i<n-1; i=i+2)
    {
        if(arr[i]!=arr[i+1])
        {
            cout<<"Single element:"<<arr[i];
            break;
        }
    }
    return 0;
}
*/

/*
int main() {

    int arr[] = {1, 2, 5, 3, 5, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (auto x : freq) {
        if (x.second==1){
            cout<< x.first<< " frequence "<< x.second<< " times" << endl;
        }
    }
}
*/

/*
int main()
{
    int arr[]={2,1,5,3,1,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    unordered_map<int,int> m;

    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    for(auto it:m)
    {
        if(it.second==1)
        {
            cout<<"Single element:"<<it.first;
            break;
        }
    }
    return 0;
}
*/


//TC: O(n^2)
/*
int main()
{
    int arr[]={2,1,5,3,1,5,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count==1)
        {
            cout<<"Single element:"<<arr[i];
            break;
        }
    }
    return 0;
}
*/


/*

Counting frequencies of array elements

Given an array arr[] of non-negative integers which may contain duplicate elements. Return the frequency of each distinct element present in the array.

Examples: 

Input:  arr[] = [10, 20, 10, 5, 20]
Output: [[5, 1], [10, 2], [20, 2]]
Explanation: Here 5 occurs once, 10 occurs 2 times and 20 occurs 2 times.

Input: arr[] = [10, 20, 20]
Output: [[10, 1], [20, 2]] 
Explanation: Here 10 occurs 1 time, 20 occurs 2 times.

1- Brute force: TC: O(n^2)
2- better solution using sorting. TC: O(nlogn)
3- using Unordered map. TC: O(n)
*/

/*
int main()
{
    int a[] = {10,20, 2, 10,5,20, 20};
    int  n = sizeof(a)/sizeof(a[0]);
    int count = 0;
    unordered_map<int, int> m;
    
    for(int i=0; i<n; i++)
    {
        m[a[i]]++;
    }
    
    for(auto elem: m)
    {
        cout << elem.first << "--" << elem.second << endl;
    }
    
    return 0;
}

*/

/*

int main()
{
    int a[] = {10,20,10,5,20, 20};
    int  n = sizeof(a)/sizeof(a[0]);
    sort(a, a+n);// 5, 10, 10, 20, 20 , 20
    int count = 0;
    
    for(int i=0; i<n-1; i++)
    {
        count =1;
        while(a[i] == a[i+1])
        {
            count++;
            i++;
        }
        
        cout << a[i] << "--" << count << endl;
    }
    
    return 0;
}
*/
/*

int main()
{
    int a[] = {10,20,10,5,20};
    int  n = sizeof(a)/sizeof(a[0]);
    int visited[n] = {false};
    int count = 0;
    
    for(int i=0; i<n; i++)
    {
        if(visited[i] == true)
        {
            continue;
        }
        
        count = 1;
        
        for(int j = i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = true;
            }
        }
        
        cout << a[i] << " -> " << count << endl;
        
    }
    
    return 0;
}
*/

