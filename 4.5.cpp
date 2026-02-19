#include <bits/stdc++.h>
using namespace std;

/*
Sort a stack using a temporary stack

Given a stack of integers, sort it in ascending order using another temporary stack.

*/


/*
Check Redundant Brackets


Given a balanced expression string s, check if it contains redundant parentheses. Return true if redundant, else false.
Redundant Parentheses: Parentheses are redundant if removing them does not change the expression.
Note: Expression is valid, contains operators +, -, *, /, and no spaces.

Input: s = "(a+(b)/c)" --> "(a+b/c)"
op: yes

Input: s = "((a+b)*c)"
op: no

Input: s = "((a+b))" --> (a+b)
op: yes
*/



int main()
{
    string s = "(b-(a+c))";
    stack<char> st;
    int n = s.size();
    
    for(int i = 0; i < n; i++)
    {
        if(s[i] == ')')
        {
            bool flag = false;

            while(!st.empty() && st.top() != '(')
            {
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top == '/')
                {
                    flag = true;
                }
                
                st.pop();
            }

            if(!st.empty()) 
            {
                st.pop();
            }

            if(!flag)
            {
                cout << "Yes";
                return 0;
            }
        }
        else
        {
            st.push(s[i]);
        }
    }

    cout << "No";
    return 0;
}


/*
Find maximum depth of nested parenthesis in a string

We are given a string having parenthesis like below 
     “( ((X)) (((Y))) )” 
We need to find the maximum depth of balanced parenthesis, like 4 in the above example. Since ‘Y’ is surrounded by 4 balanced parentheses. 

Input : S = "( p((q)) ((s)t) )"
op: 3
*/

/*
int main()
{
    string s = "( ((X)) (((Y))) )";
    int count = 0;
    stack<char> st;
    
    int n = s.size();
    
    for(int i =0; i<n; i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            int k = st.size();
            count = max(count,k );
            st.pop();
        }
    }
    
    cout << count << endl;
    
    
}
*/

/*

Reversing the first K elements of a Queue

Given an integer k and a queue of integers, The task is to reverse the order of the first k elements of the queue, leaving the other elements in the same relative order.


Input: q = 1 2 3 4 5, k = 3
op: 3 2 1 4 5.

*/

/*
int main()
{
    queue<int> q;
	
	q.push(3);
	q.push(5);
	q.push(2);
	q.push(9);
	q.push(7);
	int k = 3;
	//op: 2 5 3 9 7
// 	st: 3 5 2
// 	9 7 2 5 3
// 	2 5 3 9 7

    stack<int> st;
    
    //push first k elements onto the stack
    for(int i =0; i<k ;i++)
    {
        st.push(q.front());
        q.pop();
    }
    
    //put those k elements at the end of the queue 
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    
    int n = q.size();
    
    //remove first n-k elements from front of queue and put them at end of queue
    for(int i =0; i< n-k; i++)
    {
        q.push(q.front());
        q.pop();
    }
    
    //print all elements of the queue
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
	
}
*/

/*
Reversing a Queue:
Given a queue q[], reverse the queue so that the front element becomes the rear and the rear element becomes the front, while preserving the order of the remaining elements accordingly.

1- Can use extra space. - can use a stack.
2- Without using stack explicitly.
*/


/*
void reverseQueue(queue<int> &q)
{
    //base condition
    if(q.size() == 0)
    {
        return;
    }
    
    int f = q.front();
    q.pop();
    
    reverseQueue(q);
    
    q.push(f);
    
}


int main() {
	
	queue<int> q;
	
	q.push(3);
	q.push(5);
	q.push(2);
	q.push(9);
	q.push(7);
	// 3, 5, 2, 9, 7
	//expected op: 7, 9, 2, 5, 3
	
	reverseQueue(q);
	
	while(!q.empty())
	{
	    cout << q.front() << " ";
	    q.pop();
	}
	
    }
    
*/    
/*
int main() {
	
	queue<int> q;
	
	q.push(3);
	q.push(5);
	q.push(2);
	q.push(9);
	q.push(7);
	// 3, 5, 2, 9, 7
	//expected op: 7, 9, 2, 5, 3
	
	stack<int> st;
	
	while(!q.empty())
	{
	    st.push(q.front());
	    q.pop();
	}
	
	while(!st.empty())
	{
	    q.push(st.top());
	    st.pop();
	}

    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    
}
*/
