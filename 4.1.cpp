#include <bits/stdc++.h>
using namespace std;

/*

Longest Mountain Subarray

Given an array arr[] with N elements, the task is to find out the longest sub-array which has the shape of a mountain.

Note: A mountain sub-array starts with an increasing sequence, reaches a peak, and then follows a decreasing sequence.

eg: a = [4,3,5,7,9,6,3,2,8]
op: 7
*/


//HW - to improve this code. 
/*
int main()
{
   int a[]={4,3,5,7,9,6,3,2,8};
   int size=sizeof(a)/sizeof(a[0]);
   int max_len=INT_MIN;
   int curr_len=0,i,j;
   
   
   for(i=0;i<size;i++)
   {
       curr_len = 0;
       
       for(j=i+1;j<size;j++)
       {
            if(a[i]>a[j])
            {
                curr_len++;
            }
            else
            {
                break;
            }
       }
       for(;j<size;j++)
       {
            if(a[i]<=a[j])
            {
               curr_len++; 
            }
            else
            {
                break;
            }
       }
       
       max_len=max(max_len,curr_len);
   }
   
   cout<<max_len;
}
*/

/*
Number of subarrays having product less than K

Given an array of positive numbers, calculate the number of possible contiguous subarrays having product lesser than a given number K.

Input : arr[] = [1, 2, 3, 4] , k = 10
op: 7

1
2
3
4
1,2
1,2,3
2,3

*/

/*
2- Optimised code: 

i,j --> j-i+1 subarrays 

concept:
a = [5, 3, 2], k = 16
win = [5]
5<16 -> 1 subarray

win = [5,3]
prod = 5*3 = 15
15 < 16, --> 2 subarrays

win = [5,3,2]
prod = 30
30 < k - no
i++
win = [3,2]
6 < 16 --> 2 subarrays

total = 5 subarrays.
*/

// TC: O(n)
/*
int main() {
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 10;
    int count = 0;
    int prod = 1;
    
    for(int s= 0, e=0; e<n; e++)
    {
        prod = prod*a[e];
        
        while(prod >= k && s < e)
        {
            prod = prod/a[s];
            s++;
        }
        
        if(prod < k)
        {
            int win = (e-s) + 1;
            count += win;
        }
    }
    
    cout << count << endl;
}
*/

/*

1 - Brute force : TC: O(n^2)


int main() {
    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 10;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int product = 1;

        for (int j = i; j < n; j++) {
            product *= a[j];

            if (product < k) {
                count++;
            } else {
                break; 
            }
        }
    }

    cout << count;
    return 0;
}

*/

/*
int main()
{
    int arr[]={1,2,3,4};
    int k=10;
    int len=sizeof(arr)/sizeof(arr[0]);
    int counter=0;
    
    for(int i=0;i<len;i++)
    {
        if(arr[i]<k)
        {
            counter++;
        }
        
        int prod=arr[i];
        
        for(int j=i+1;j<len;j++)
        {
            prod=prod*arr[j];
            if(prod<k)
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        
    }
*/


    
/*
Replace all occurrences of substring

Given three strings s, s1, and s2 of lengths n, m, and k respectively, the task is to modify the string s by replacing all the substrings s1 with the string s2 in the string s. (pattern is replaced left to right)

Input: s = "abababa", s1 = "aba", s2 = "a"
op: aba

1- Brute force:
TC: O(n*n1)

int main() {
    string s="ababba";
    string s1="aba";
    string s2="a";
    
    int n=s.length();
    int n1=s1.length();
    int n2=s2.length();
    
    string result="";
    int i=0;
    
    while(i<n) 
    {
        if (s.substr(i,n1)==s1) {
            result=result+s2;
            i=i+n1;
        }
        else {
            result=result+s[i];
            i++;
        }
    }
    cout<<result << endl;
    // cout << s.substr(1,3) << endl;
    return 0;
}

*/
