#include <bits/stdc++.h>
using namespace std;

/*
Valid Parentheses in an Expression

Given a string s containing three types of brackets {}, () and []. Determine whether the Expression are balanced or not.
An expression is balanced if each opening bracket has a corresponding closing bracket of the same type, the pairs are properly ordered and no bracket closes before its matching opening bracket.

Balanced: "[()()]{}" → every opening bracket is closed in the correct order.
Not balanced: "([{]})" → the ']' closes before the matching '{' is closed, breaking the nesting rule.

*/


//TC: O(n)
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) 
{
    stack<char> st;
    int n = s.length();
    
    for (int i=0;i<n;i++) {
        char ch = s[i];
        
        if(ch=='('||ch=='{'||ch=='[') {
            st.push(ch);
        }
        else if((!st.empty()) && (ch == ')') && (st.top()=='(')) {
            st.pop();
        }
        else if((!st.empty()) && (ch == ']') && (st.top()=='[')) {
            st.pop();
        }
        else if((!st.empty()) && (ch=='}') && (st.top()=='{')) {
            st.pop();
        }
        else{
            return false;
        }
    }
    return st.empty();
}

int main() {
    string s;
    cin >> s;
    if (isValid(s))
        cout<<"Valid";
    else
        cout<<"Invalid";
    return 0;
}




/*
Sum of all Subarrays

Given an integer array arr[], compute the sum of all possible sub-arrays of the array. A sub-array is a contiguous part of the array.


1- Brute force code.

Input: arr[] = [1, 4, 5]
op: 34

Explanation:
1 --> 1
1,4 --> 5
1,4,5 --> 10

4 --> 4
4,5 --> 9

5 --> 5


ans = 34

*/


//TC: O(n)
/*
int main(){
    int arr[]={1,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);

    long long totalsum=0;

    for(int i=0;i<n;i++)
    {
        totalsum=totalsum+arr[i]*(i+1)*(n-i);
    }

    cout<<"total sum of subarrays "<<totalsum;
}
*/


/*
//Brute force: O(n^2)

int main() {
    int arr[] = {1,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum = 0;

    for(int i = 0; i < n; i++) {
    int currSum = 0;
    
    for(int j = i; j < n; j++){
        currSum += arr[j];
        totalSum += currSum;
       }
   }
    cout << totalSum;
    
    return 0;
}

*/




/*

Longest Mountain Subarray

Given an array arr[] with N elements, the task is to find out the longest sub-array which has the shape of a mountain.

Note: A mountain sub-array starts with an increasing sequence, reaches a peak, and then follows a decreasing sequence.

eg: a = [4,3,5,7,9,6,3,2,8]
op: 7
*/

//TC: O(n)

/*
int main()
{
    int a[]={4,3,5,7,9,6,3,2,8};

    int n=sizeof(a)/sizeof(a[0]);
    
    if(n<3)
    {
        cout << 0;
        return 0;
    }
    
    
    int c = 0;
    for(int i=1; i<n-1; )
    {
        //find peak at i.
        if((a[i] > a[i-1]) && (a[i] > a[i+1]))
        {
            int j=i;
            int count = 0;
            
            while( (a[i] > a[i+1])  && (i < n-1))
            {
                count++;
                i++;
            }
            
            while((a[j] > a[j-1]) && (j>0))
            {
                count++;
                j--;
            }
            
            c = max(c, count);
        }
        else
        {
            i++;
        }
    }
    
    if(c>0)
    {
        cout << c+1 << endl;
        return 0;
    }
    
    return c;
    
}


*/

/*
int main()
{
    int a[]={4,3,5,7,9,6,3,2,8};

    int n=sizeof(a)/sizeof(a[0]),i=0,length=0,maxlength=INT_MIN;
    while(i<n-1)
    {
        if(a[i]>a[i+1] && length==0){
            i++;
        }
        else{
            if(a[i]<a[i+1]){
                length++;
                i++;
            }
        else if(a[i]>a[i+1]){
            length++;
            maxlength=max(length,maxlength);
            i++;
            if(a[i]<a[i+1]){
                length=1;
                i++;
            }
        }
        }
    }
    cout<<maxlength+1;
}
*/







//HW - to improve this code. 

/*
//TC: O(n^2)
int main()
{
   int a[]={4,3,5,7,9,6,3,2,8};
   int size=sizeof(a)/sizeof(a[0]);
   int max_len=INT_MIN;
   int curr_len=0,i,j;
   
   
   for(i=0;i<size;i++)
   {
       curr_len = 1;
       
       for(j=i+1;j<size;j++)
       {
            if(a[i]<a[j])
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
            if(a[i]>=a[j])
            {
               curr_len++; 
            }
            else
            {
                break;
            }
       }
       
       max_len = max(max_len,curr_len);
   }
   
   cout<<max_len;
}
*/
