#include <bits/stdc++.h>
using namespace std;

/*

Minimum and Maximum elements Using Recursion


Given an array of integers arr[], find the minimum and maximum elements in the array using recursion only. The first element of the output represents the minimum value, and the second element represents the maximum value in the array.

Examples:

Input: arr[] = [1, 4, 3, -5, -4, 8, 6]
Output: [-5, 8]
Explanation: -5 is the minimum and 8 is the maximum element in the array

Input: arr[] = [12, 3, 15, 7, 9]
Output: [3, 15]
Explanation: 3 is the minimum and 15 is the maximum element in the array

*/

void findMinMax(int a[], i)
{
    if(i == 0)
    {
        cout << a[0] << " " << a[1];
    }
    
    
}

int main()
{
    int a[] = {1, 4, 3, -5, -4, 8, 6};
    int n = sizeof(a)/sizeof(a[0]);
    
    findMinMax(a, n-1);
    
}

/*

Factorial of a Number

Given the non-negative integers n , compute the factorial of a given number.
Note: Factorial of n is defined as n * (n -1) * (n - 2) * ... * 1, for n = 0, factorial is 1.

Examples:

Input: n = 5
Output: 120
Explanation: 5! = 5 * 4 * 3 * 2 * 1 = 120

Input: n = 4
Output: 24
Explanation: 4! = 4 * 3 * 2 * 1 = 24

*/

/*

int fac(int num) 
{
    if(num==0)
    {
        return 1;
    }
    
    return num * fac(num-1);
}

int main() {
    int num =5;
    cout <<fac(num);

    return 0;
}
*/


/*

Find First n Fibonacci Numbers

Given an integer n. The task is to find the first n Fibonacci Numbers.

Input: n = 3
Output: 0 1 1

Input: n = 7
Output: 0 1 1 2 3 5 8

*/



/*

int fibo(int num) 
{
    if(num<=1){
        return num;
    }
    return  fibo(num -1) + fibo(num -2);
    
}

int main() {
    int n =7;
   // cout <<fibo(n);
    for(int i=0; i<n; i++)
    {
        cout<<fibo(i) <<" ";
    }
   
    return 0;
}
*/

/*

Sum of digit of a number using recursion


Given a number, we need to find sum of its digits using recursion.

Examples: 

Input: 12345
Output: 15
Explanation: Sum of digits → 1 + 2 + 3 + 4 + 5 = 15

Input: 45632
Output: 20 
*/


/*

int digit_sum(int num) 
{
    if(num==0){
        return 0;
    }
    
    // 145 - 145%10 --> 5
    // 145/10 --> 14
    
    return num%10 + digit_sum(num/10);
    
}

int main() {
    int num =1234;

    cout << digit_sum(num);

    return 0;
}
*/


/*
Program for length of a string using recursion

Given a string calculate length of the string using recursion. 

Examples: 

Input: str = "abcd"
Output: 4
Explanation: The string "abcd" has a length of 4.
*/

/*

int len(string s)
{
    if(s == "")
    {
        return 0;
    }
    
    return 1 + len(s.substr(1));
}

int main()
{
    string s = "Aditya Jain";
    
    cout << len(s);
}
*/

/*

int leng(string str, int i) {
    if (str[i]==NULL)
        return 0;

    return 1+ leng(str, i+1);
}

int main() {
    string str = "String";

    cout <<leng(str,0);

    return 0;
}

*/


/*

Print reverse of a string using recursion

Given a string, the task is to print the given string in reverse order using recursion.

Input: s = "Reverse a string Using Recursion"
Output: "noisruceR gnisU gnirts a esreveR"
Explanation: After reversing the input string we get "noisruceR gnisU gnirts a esreveR". 

*/

/*

string rev(string str){
    
    if(str.size() == 0)
    {
        return str;
    }

    return rev(str.substr(1)) + str[0];
    
}


int main() {
 string str ="Reverse a string";
 int n = str.length();
 cout << rev(str);

    // cout << str.substr(1); v+e+R 
 

}
*/

/*
string reversestr(string str, int i) {
    
    if (i < 0)
        return "";

    return str[i] + reversestr(str, i - 1);
}

int main() {
    string str = "reverse the str";

    string reversed = reversestr(str, str.length() - 1);

    cout <<reversed;

    return 0;
}

*/


/*
1. Sum of First N Natural Numbers Using Recursion

Given a number n, find the sum of the first n natural numbers using recursion.
Examples:

Input: n = 3
Output: 6
Explanation: 1 + 2 + 3 = 6

Input: n = 5
Output: 15
Explanation: 1 + 2 + 3 + 4 + 5 = 15
*/

/*
int natural_sum(int n){
    
    cout << n << endl;
    
    if(n==0){
        return 0;
    }
    return n + natural_sum(n-1);
}
int main() {
 int n =3;
 cout<< natural_sum(n);
 
}
*/

/*

int calc(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return n+calc(n-1);
    }
}



int main() {
    int n=3;
    cout << calc(n);
}

*/


/*
2. Mean of array using recursion
Given an array arr[] of integers, calculate the mean (average) using recursion.

Note: The mean of an array is the sum of its elements divided by the number of elements in the array.

Examples: 
Input: arr[] = [1, 2, 3, 4, 5]
Output: 3
Explanation: The sum of elements (15) divided by the number of elements (5) gives the mean: 3

Input: arr[] = [1, 2, 3]
Output: 2
Explanation: The sum of elements (6) divided by the number of elements (3) gives the mean: 2

*/

/*

float sum(int arr[], int n){
    if(n==-1){
        return 0;
    }
    return arr[n] + sum(arr,n-1);
}

int main() {
 int arr[]={1,2,3,4,6};
 int n = sizeof(arr)/sizeof(arr[0]);
 cout<< sum(arr,n-1)/n;
 

}
*/
