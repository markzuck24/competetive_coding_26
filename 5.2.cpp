#include <bits/stdc++.h>
using namespace std;


/*

Count pairs with absolute difference equal to k

Given an array arr[] and a positive integer k, the task is to count all pairs (i, j) such that i < j and absolute value of (arr[i] - arr[j]) is equal to k. 

Examples: 

Input: arr[] = [1, 4, 1, 4, 5], k = 3
Output: 4
Explanation: There are 4 pairs with absolute difference 3, 
the pairs are [1, 4], [1, 4], [1, 4] and [4, 1]

Input: arr[] = [8, 16, 12, 16, 4, 0], k = 4
Output: 5
Explanation: There are 5 pairs with absolute difference 4, the pairs are [8, 12], [8, 4], [16, 12], [12, 16], [4, 0].

1- Brute Force: O(n^2)
*/

int main()
{
    int a[] = {8, 16, 12, 16, 4, 0};
    int k = 4;
    int c = 0;
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(a[i] - a[j]) == k)
            {
                c++;
            }
        }
    }
    
    cout << c << endl;
    
}


/*
Sentence Palindrome

Given a sentence s, determine whether it is a palindrome sentence or not. A palindrome sentence is a sequence of characters that reads the same forward and backward after:

Converting all uppercase letters to lowercase.
Removing all non-alphanumeric characters (i.e., ignore spaces, punctuation, and symbols).
Examples: 

Input: s = "Too hot to hoot."
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "toohottohoot" which is a palindrome.

Input: s = "Abc 012..##  10cbA"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "abc01210cba" which is a palindrome.

*/


/*

int main(){
    string s = "Too hot to hoot";
    string new_s = "";
    int n = s.length();
    
    for(char c: s)
    {
        if(isalnum(c))
        {
            new_s += tolower(c);
        }
    }
    
    string rev = new_s;
    reverse(rev.begin(), rev.end());
    
    if(rev == new_s)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    

    return 0;
}

*/
/*

int main(){
    string s = "Too hot to hoot";
    string remove = "";
    int n = s.length();
    
    for(int i = 0; i < n; i++)
    {
         if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9') )
        {
            remove += s[i];
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            remove += (s[i] + 32);
        }
    
    }
    
    int left = 0;
    int right = remove.length() - 1;

    while(left < right){
        if(remove[left] != remove[right]){
            cout << "False";
            return 0;
        }
        left++;
        right--;
    }

    cout << "True";

    return 0;
}

*/
/*

2 Sum - Pair Sum Closest to Target

Given an array arr[] of n integers and an integer target, find a pair of elements from the array such that the sum of the pair is closest to the given target.
Note:

Return the pair in sorted order.
If multiple pairs have the same closest sum, return the one with the maximum absolute difference (i.e., |a - b| is largest).
If no valid pair exists (i.e., array has fewer than 2 elements), return an empty array.
Examples:

Input: arr[] = [10, 30, 20, 5], target = 25
Output: [5, 20]
Explanation: Out of all the pairs, [5, 20] has sum = 25 which is closest to 25.

Input: arr[] = [5, 2, 7, 1, 4], target = 10
Output: [2, 7]
Explanation: As (4, 7) and (2, 7) both are closest to 10, but absolute difference of (2, 7) is 5 and (4, 7) is 3. Hence, [2, 7] has maximum absolute difference and closest to target.

Input: arr[] = [10], target = 10
Output: []
Explanation: As the input array has only 1 element, return an empty array.


1- Brute Force: o(n^2)
2 - Two pointer approach: O(nlogn)
*/


/*
int main() {
	
	int a[] = {5,1, 6, 9, 3};
	
	int n = sizeof(a)/sizeof(a[0]);
	sort(a, a+n);//ascending order
	
	int target = 11, sum = 0;
	int res[2] = {0, 0};
	
	int min_diff = INT_MAX;
	int pair_sum = 0;
	
	int left = 0, right = n-1;
	
	while(left < right)
	{
	    sum = a[left] + a[right];
	    
	    if(abs(sum - target) < min_diff)
	    {
	        min_diff = abs(sum - target);
	        res[0] = a[left];
	        res[1] = a[right];
	    }
	    
	    if(sum < target)
	    {
	        left++;
	    }
	    else if(sum > target)
	    {
	        right--;
	    }
	    else
	    {
	        break;
	    }
	}
	
	cout << "( " << res[0] << ", " << res[1] << " )" << endl;

}

*/
/*
int main() {
	
	int a[] = {5, 2, 7, 1, 4};
	
	int n = sizeof(a)/sizeof(a[0]);
	sort(a, a+n);//ascending order
	
	int target = 10;
	int res[2] = {0, 0};
	
	int min_diff = INT_MAX;
	int pair_sum = 0;
	
	for(int i=0; i<n; i++)
	{
	    for(int j = i+1; j<n; j++)
	    {
	        pair_sum = a[i] + a[j];
	        int diff = abs(pair_sum - target);
	        
	        if(diff < min_diff)
	        {
	            min_diff = diff;
	            res[0] = a[i];
	            res[1] = a[j];
	        }
	        else if(diff == min_diff)
	        {
	            if(abs(a[i]-a[j]) > (res[1]-res[0]))
	            {
	                res[0] = a[i];
	                res[1] = a[j];
	            }
	        }
	    }
	}
	
	cout << "( " << res[0] << ", " << res[1] << " )" << endl;

}
*/
