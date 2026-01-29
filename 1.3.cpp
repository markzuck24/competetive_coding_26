#include <bits/stdc++.h>
using namespace std;



//HW - Write a code to find the power of a given number.
a,b --> a^b --> without using pow().

/*

int main()
{
    /*
    given a number n, print the multiplication table of it, till its first 10 multiples.
    
    op:
    7*1 = 7
    7*2 = 14
    7*3 = 21
    .
    .
    .
    */
    
    int n = 7;
    
    for(int i=1; i<=10; i++)
    {
        cout << n << " * " << i << " = " << n*i << endl;
    }
    
    return 0;
}

*/
/*
int main()
{
    //given a positive number, find its factorial.
    
    int n = 5;
    int res = 1;
    
    for(int i=1; i<=n; i++)
    {
        res = res*i;
        cout << res << endl;
    }

//HW to do this using recursion.    
}

*/

/*

int main()
{
    //given a positive number, print all its divisors between 1 to 100.
    
    int n = 100;
    int count = 0;
    
    int last = min(n,100);
    
    for(int i=1; i<=last; i++)
    {
        if(n%i == 0)
        {
            cout << i << endl;
            count++;
        }
    }
    
    cout << "count of divisors = " << count << endl;
    return 0;
}
*/

/*
int main()
{
    
    //given a positive number, check if it is a prime number or not.
    
    int n  = 12;
    
    for(int i =2; i<=n-1; i++)
    {
        if(n%i == 0)
        {
            cout <<"Not a prime number!";
            return 0;
        }
    }
    
    cout << "Prime number!";
    
    
    return 0;
}

*/

/*
int main()
{
    
    
/*
    Given a number x, determine whether the given number is Armstrong's number or not. A positive integer of n digits is called an Armstrong number of order n (order is the number of digits) if

abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ....

Here a, b, c and d are digits of input number abcd.....

    
    

    int n = 9473;
    int temp = n;
    int ans = 0;
    int len = 0;
    int last_digit = 0;
    
    while(temp != 0)
    {
        temp = temp/10;
        len++;
    }
    
    cout << len << endl;
    temp = n;
    
    while(temp != 0)
    {
        last_digit = temp%10;
        ans = ans + pow(last_digit, len);
        temp = temp/10;
    }
    
    if(n== ans)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
    
    
    return 0;
}
*/

/*
int main()
{
    

    153 --> 1^3 + 5^3 + 3^3 ?
    
    


    int n = 146;
    int temp = n;
    int ans = 0;
    
    // cout << pow(3,2) << endl;
    
    while(temp != 0){
        int q = temp % 10;
        ans += pow(q, 3);
        temp = temp/10;
    }
    
    if(ans == n)
    {
        cout << "Armstrong number!" << endl;
    }
    else
    {
        cout << "Not an Armstrong number!" << endl;
    }


    return 0;
}

*/

/*
int main()
{
    //check if the given number is Pallindrome or not?
    
    int n = 88788;
    int rev = 0;
    int temp = n;
    
    while(temp != 0)
    {
        rev = rev*10 + temp%10;
        cout << rev << endl;
        temp = temp/10;
    }
    
    if(n == rev)
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
int main()
{
    // cout << max(2,4) << endl;
    // cout << min(2,4) << endl;
    
    
    //given 3 integers, find the min and max among them.
	int a = -1, b = -5, c = -3;
	//ans: min = -5, max = -1
	
	int min1 = min(a, min(b,c));
	int max1 = max(a, max(b,c));
	
	cout << max1 << " " << min1 << endl;
    
    return 0;
}
*/

/*
int main() {
	//given 3 integers, find the min and max among them.
	int a = 1, b = 5, c = 3;
	//ans: min = 1, max = 5
	
	int min = a, max = a;
	
	if(b > max)
	{
	    max = b;
	}
	else if(b < min)
	{
	    min = b;
	}
	
	
	if(c > max)
	{
	    max = c;
	}
	else if(c < min)
	{
	    min = c;
	}
	
	
	cout << min << " " << max << endl;
	
}
*/
