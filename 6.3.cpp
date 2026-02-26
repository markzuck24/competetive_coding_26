#include <bits/stdc++.h>
using namespace std;

/*

String to Integer

Given a string s, convert it into integer format without utilizing any built-in functions.

Input: s = "-123"
Output: -123

Input: s = "452"
output: 452
*/

//the string can have alphabets and special characters as well
//then only consider the digits and do the same thing.
int main(){
    string s = "-12a3bc0d0";
    int n = s.length();
    int sign = 1;
    int num = 0;
    int j = 0;
    
    if(s[0] == '-'){
        sign =  -1;
        j = 1;
    }

    for(int i = j; i < n; i++){
        if(s[i] >= '0' && s[i] <= '9')
        {
        int digit = s[i] - '0';
        num = num * 10 + digit;
        }
    }
    
    num = sign * num;
   
    cout << num;

    return 0;
}


/*

int main(){
    string s = "12300";
    int n = s.length();
    int sign = 1;
    int num = 0;
    int j = 0;
    if(s[0] == '-'){
        sign =  -1;
        j = 1;
        }
        
    for(int i = j; i < n; i++){
       
        int digit = s[i] - '0';
        num = num * 10 + digit;
    }
    
    num = sign * num;
   
    cout << num;

    return 0;
}
*/



/*

Roman to Integer Conversion


Given a string s representing a Roman numeral, find it's corresponding integer value.
Roman numerals are formed using the following symbols: I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, and M = 1000.
Numbers are typically formed by combining these symbols from left to right, adding or subtracting their values based on specific rules.

How does the conversion work?

If a smaller value symbol comes before, we subtract. Otherwise, we add.
In IV, I comes before V and V has a larger value 5. So our result is 5 - 1 = 4.
In VI, V comes before I and I has a smaller value 1. So our result is 5 + 1 = 6.
In II, we have same values, so we add and get 1 + 1 = 2
In case of more than 2 characters, we traverse from left to right and group only when we see a greater value character after a smaller value character. For example MXVII is 1000 + 10 + 5 + 1 + 1 = 1017. And XLVII is (50 - 10) + 5 + 1 + 1 = 47. Note that L is larger and comes after X.

Input: s = "IX"
Output: 9
Explanation: IX is a Roman symbol which represents 10 - 1 = 9

Input: s = "XL"
Output: 40
Explanation: XL is a Roman symbol which represents 50 - 10 = 40

Input: s = "MCMIV"
Output: 1904
Explanation: M is 1000, CM is 1000 - 100 = 900, and IV is 4. So we have total as 1000 + 900 + 4 = 1904
*/
/*


int value(char c)
{
    if(c == 'I')
    {
        return 1;
    }
    else if(c == 'V')
    {
        return 5;
    }
    else if(c == 'X')
    {
        return 10;
    }
    else if(c == 'L')
    {
        return 50;
    }
    else if(c == 'C')
    {
        return 100;
    }
    else if(c == 'D')
    {
        return 500;
    }
    else if(c == 'M')
    {
        return 1000;
    }
    
    return -1;
}

int romanToInt(string s)
{
    int total = 0;
    int n = s.size();
    
    for(int i = 0; i < n; i++)
    {
        int v1 = value(s[i]);
        
        if((i+1) < n)
        {
            int v2 = value(s[i+1]);
            
            if(v1 >= v2)
            {
                total += v1;
            }
            else
            {
                total += (v2-v1);
                i++;
            }
        }
        else
        {
            total += v1;
        }
    }
    
     return total;
}



int main()
{
    string s = "MCMIV";
    cout << romanToInt(s) << endl;
    return 0;
}

*/

/*

Common Slot for Meeting of Two Persons


You are given two lists of availability time slots, slt1[][] and slt2[][], for two people. Each slot is represented as [start, end], and it is guaranteed that within each list, no two slots overlap (i.e., for any two intervals, either start1>end2 or start2>end1).
Given a meeting duration d, return the earliest common time slot of length at least d. If no such slot exists, return an empty array.

Examples:

Input: slt1[][] = [[10,50], [60,120], [140,210]], slt2[][] = [[0,15], [60,70]], d = 8
Output: [60,68]
Explanation: The only overlap is [60,70] (10 minutes), which is enough for an 8-minute meeting, so answer is [60,68]

Input: slt1[][] = [[10,50], [60,120], [140,210]], slt2[][] = [[0,15], [60,70]], d = 12
Output: []
Explanation: The max overlap is [60, 70] (10 minutes), but 12 minutes are needed, so no valid slot exists.

*/


/*

int main()
{
    int a[3][2] = { {10, 50}, {60, 120}, {140, 210} };
    int b[2][2] = { {0, 15}, {60, 70} };
    int d = 8;
    
    int i=0, j=0;
    
    int n1 = sizeof(a)/sizeof(a[0]);
    int n2 = sizeof(b)/sizeof(b[0]);

    while(i<n1 && j<n2)
    {
        int start = max(a[i][0], b[j][0]);
        int end = min(a[i][1], b[j][1]);
        
        if((end - start) >= d)
        {
            cout << start << " , " << end << endl;
        }
        
        if(a[i][1] < b[j][1])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    
    return 0;
}
*/

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
3- optimised without hashmap. O(n)
*/


/*

int main()
{
    int a[]={1,2,3,6,3,6,1};
    
    int n=sizeof(a)/sizeof(a[0]);

    int freq[n]= {0};
    
    for(int i=0; i<n; i++)
    {
        freq[a[i]]++;
    }
    
    for(int i=0; i<n; i++)
    {
        if(freq[i] > 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}
*/

