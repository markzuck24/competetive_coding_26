// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
  
    
/*
Ques 4: Initialise length and breadth of a rectanble, and then print its area on the screen.
*/

// int length = 10;
// int breadth = 5;

// int area = length*breadth;
// cout << area << endl;


//better code
// double length = 10.2;
// double breadth = 5.4;

// double area = length*breadth;
// cout << area << endl;

    
//taking user input
//take an int as input from user, and print the double of it.

// int a;
// cin >> a;
// cout << 2*a << endl;

// int a = 328
// cout << a/10 + a%10
/*
    Ques5: Given an integer, write a code to print the sum of all the digits of that integer.
*/
    
    // int n = 2582;
    // int sum = 0;
    // while(n!=0)
    // {
    //     sum = sum + (n%10);
    //     n = n/10;
    // }
    
    // cout << sum << endl;
    
    
    
/*
    Ques6:
    Given an integer, check if it represents a valid binary representation or not.
    n = 1000100101 --> yes
    n = 10010201001 --> no


    int n = 100021;
    int digit = 0;
    int flag = 0;
    while(n!=0)
    {
        digit = n%10;
        if( (digit != 0) && (digit != 1))
        {
            cout << "No";
            flag = 1;
            break;
        }
        
        n = n/10;
        
    }
    
    if(flag == 0)
    {
        cout << "Yes";
    }
 
 */  
 
// Ques8: Given two integers, write a code to swap them.
//  part1- with using extra variable
//  part2- without using extra variable.
 
  //with 3rd variable.
 int a = 10;
 int b = 5;
 int temp;
 
//  temp = a;
//  a = b;
//  b = temp;
 
 cout << a << " " << b << endl;
 
//  //without 3rd variable.
//  a = a+b;//10+5
//  b = a - b;//10+5 - 5 = 10
//  a = a - b;//10+5 - 10 = 5
 
//  cout << a <<" " << b << endl;
 
 
 //appraoch3- using xor operator.
 a = a^b;
 b = a^b;
 a = a^b;

cout << a <<" " << b << endl;


/*
Ques 9 - Given 3 numbers, print the maximum and minimum among them.
HW :
int a= 3, b = 6, c = 4
op:
max = 6
min = 3
*/

/*
    cout << "Hello everyone!" << endl;
    cout << "Lets get started!" << endl;
    
    
        Mathematical operations using
        +, -, /, *
    

    cout << 3+2 << endl;
    cout << 3-2 << "\n";
    cout << 3*2 << endl;
    cout << 3/2 << endl;

    
    //Variables and Data types
    
    
    int --> 1,2 -4
    double --> 4.3, -6.7
    bool --> true, false
    char --> 'a', 'Z'
    string --> "aditya" "123#", "a@gmail.com"
    
    
    int a = 40;
    cout << a << endl;
    cout << 'a' << endl;
    
    int b = 20;
    b = 22;
    cout << b << endl;
    
    int age = 20;
    double cgpa = 9.2;
    bool isGraduate = true;
    char grade = 'A';
    string name = "Rahul";
    
    cout << age << endl << cgpa << endl << isGraduate << endl << grade << endl << name << endl;
    
    
    
    Ques1: print 1 to 10 on screen, with every number of new line.
    
    
    for(int i =1; i<= 10; i++)
    {
        cout << i << endl;
    }
    
    
    
    Ques2: print all the even numbers between 1 to 10, each separated by a space
    
    
    for(int i=1; i<= 10; i++)
    {
        if(i%2 == 0)
        {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    for(int i=1; i<= 10; i++)
    {
        if(i%2 == 0 && i!= 10)
        {
            cout << i << " ";
        }
        else if(i==10)
        {
            cout << i;
        }
    }
    
    cout << endl;
    
    for(int i = 2; i<= 10; i+=2)
    {
        cout << i << " ";
    }
    
    cout << endl;
    
    Ques3: print all the odd numbers from 2 to 20, each separated by '@'
    
    
    
    for(int i = 3; i<= 20; i+=2)
    {
        cout << i << "@";
    }
    
    cout << endl;
    
    for(int i=2; i<=20;i++)
    {
        if(i%2 != 0)
        {
            cout << i << "@";     
        }
       
    }
    
*/
    
    return 0;
}
