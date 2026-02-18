#include <bits/stdc++.h>
using namespace std;

/*
Check if two strings after processing # character are equal or not

Given two strings s1 and s2, let us assume that while typing the strings there were some characters, which are represented by #. The task is to determine whether the resultant strings after processing the # character would be equal or not.


Input: s1 = equ#al, s2 = e#qu#al
op: Yes.

s1 = equ#al --> equal
s2 = e#qu#al --> equal
*/


/*
int main()
{
    string s1 = "equ#al", s2 = "e#qu#al";
    string r1 = "", r2 ="";
    
    int n1 = s1.length();
    int n2 = s2.length();
    
    for(int i=0; i<n1; i++)
    {
        if(s1[i] != '#')
        {
            r1 = r1 + s1[i];
        }
    }
    
    
    for(int i=0; i<n2; i++)
    {
        if(s2[i] != '#')
        {
            r2 = r2 + s2[i];
        }
    }
    
    cout << "R1 is : " << r1 << endl;
    cout << "R2 is : " << r2 << endl;
    
    if(r1 == r2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

*/

//if # acts as a backspace character.
int main(){
    string s1="equ#al";
    string s2="eqaa#l";
    int n1=s1.length();
    int n2=s2.length();

    stack<char> st1;
    stack<char> st2;

    for(int i=0;i<n1;i++){
        if(s1[i]=='#'){
            if(!st1.empty())
                st1.pop();
        }
        else
            st1.push(s1[i]);
    }

    for(int i=0;i<n2;i++){
        if(s2[i]=='#'){
            if(!st2.empty())
                st2.pop();
        }
        else
            st2.push(s2[i]);
    }

    string r1="",r2="";

    while(!st1.empty()){
        r1=st1.top()+r1;
        st1.pop();
    }
    
    while(!st2.empty()){
        r2=st2.top()+r2;
        st2.pop();
    }

    if(r1==r2)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}




/*

Remove all duplicate adjacent characters from a string using Stack

Given a string, str, the task is to remove all the duplicate adjacent characters from the given string.


Input: str= “azxxzy”
op: azzy --> ay 
*/

/*
//TC: O(n)
int main() {
    string s = "azxxzy";
    stack <char> st;
    
    int n = s.length();

    for(int i = 0; i < n; i++)
    {
        if(st.size() > 0 && st.top() == s[i]){
            st.pop();
        } 
        else{
            st.push(s[i]);
        }
    }
    
    string res = "";
    
    while(st.size() > 0){
        res = st.top() + res;
        st.pop();
    }
    cout << res;

    return 0;
}
*/


/*
Reverse individual words

Given string str, we need to print the reverse of individual words.


Input: Hello World
op: olleH dlroW
*/




/*

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "hello world";
    string temp=" ";
    string rev = " ";
    int n= s.length();
    
    for(int i = 0; i<=n; i++){
        if(s[i] == ' ' || i==n){
            reverse(temp.begin(), temp.end());
            rev+=temp;
            rev+=" ";
            temp=" ";
        }
        else{
            temp+=s[i];
        }
    }
    
    cout << "Reversed string: " << rev << endl;
    return 0;
}

*/

/*
int main()

{   
    string str="Wonderful World";
    stack<char>sente;
    
    int n = str.length();
    
    for(int i=0; i<n; i++)
    {
        if(str[i]!=' ')
        {
            sente.push(str[i]);
        }
        else{
            while(!sente.empty())
            {
                cout<<sente.top();
                sente.pop();
            }
            cout<<" ";
        }
    }
        while (!sente.empty()) {
        cout << sente.top();
        sente.pop();
    }

}
*/

/*
int main()
{
    string str="Hello World";
    int n=str.length();
    stack<char> s;

    for(int i=0;i<n;i++)
    {
        if(str[i]!=' ')
        {
            s.push(str[i]);
        }
        else
        {
            while(!s.empty())
            {
                cout<<s.top();
                s.pop();
            }
            cout<<" "; 
        }
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    return 0;
}
*/

/*
//TC: O(n)
int main() {
    string s = "Hello World";
    stack <char> st;
    int n = s.length();
    stack <char> temp;

    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            while(st.size() > 0){
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
        else {
            st.push(s[i]);
        }
    } 
    while(st.size() > 0){
        cout << st.top();
        st.pop();
    }

    return 0;
}

*/

/*
Delete middle element of a stack

Given a stack with push(), pop(), and empty() operations, The task is to delete the middle element of it without using any additional data structure.

Input: s = [10, 20, 30, 40, 50]
output: [50,40,20,10]

*/

/*

//TC: O(n)
int main() {
    string s = "hello";
    stack <char> st;
    int n = s.length();
    stack <char> temp;

    for(int i = 0; i < n; i++){
        st.push(s[i]);
    }
    int mid = st.size() / 2;
    
    for(int i = 0; i < mid; i++){
        temp.push(st.top());
        st.pop();
    }
    
    cout << "middle element:" << st.top() << endl;
    st.pop(); 

    while(temp.size() > 0){
        st.push(temp.top());
        temp.pop();
    }
    cout << "After deleting: ";
    while(st.size() > 0){
        cout << st.top();
        st.pop();
    }

    return 0;
}
*/

//TC: O(n)
/*
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int n = s.size();
    int mid=n/2; 

    stack<int> temp;  

    for(int i=0;i<mid;i++)
    {
        temp.push(s.top());
        s.pop();
    }

    s.pop();   

    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
    
    cout << "Stack after deleting middle:\n";
    cout << "Output: [";
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
        if(!s.empty())
            cout << ",";
    }
    cout << "]";

    return 0;
}
*/





/*
Reverse a String using Stack

Given a string str, the task is to reverse it using stack. 

*/

//TC: O(n)

/*
int main() {
	// your code goes here
	
	string str = "Aditya";
    stack<char>s;
    int n=str.length();
    
    for(int i=0;i<n;i++)
    {
        s.push(str[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        str[i]=s.top();
        s.pop();
    }
    
    cout<<"Reversed string:"<<str;

}
*/
