#include <bits/stdc++.h>
using namespace std;
/*
Given a sentence where words are separated by a space.
Create another sentence where the order of the words is reverse.

ip: "Aditya Jain likes to code"
op: "code to likes Jain Aditya"


int main() {
    string s = "Aditya Jain likes to code";
    cout << s << endl;

    int n = s.size();

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            for (int j = i + 1; j < n; j++) {
                cout << s[j];
            }
            cout << " ";
            n = i;   
        }
    }


    for (int i = 0; i < n; i++) {
        cout << s[i];
    }

    return 0;
}


int main() {

    string s = "Aditya Jain likes to code";

    int n = s.length();

    for(int i=n-1; i>=0; i--){

        if(s[i]==' '){
            
            for(int j=i+1; j<n; j++){
                cout<<s[j];
            }
            cout<<" ";
            n = i; 
        }
    }
    
     for (int i = 0; i < n; i++) {
        cout << s[i];

}

}
*/
/*

Find the first non-repeating character in the given string.

You are given a string of lowercase characters, you need to find the first
non-repeating character. If all the characters are repeating, then print "Invalid" onto the screen.

ip: "racecars" 
op: 'e'



//TC : O(n^2)
//SC : O(1)

int main()
{
    string s="racescares";
    int len=s.size();
    
    for(int i=0;i<len;i++)
    {
        int flag=0;
        for(int j=0;j<len;j++)
        {
            if( (i!= j) && (s[i]==s[j]))
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<s[i];
            return 0;
        }
            
    }
    
    cout<<"invalid";
}
*/

int reverse(string a,int start,int end)
{
    while(start<end)
    {
        char temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        
        start++;
        end--;
    }
}

int shift(string s,int start,int end)
{
    reverse(s,start,end);
    reverse(s,start,end-1);
}


int main()
{
    string s="hello world !";
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if(s[i]==32)
        {
            shift(s,i,len-1);    
        }
    }
    cout<<s;
}

/*
int main() {
    string s = "racecars";
    int n = s.size();

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = 0; j < n; j++) {
            
            if (s[i] == s[j]) {
                count++;
                break;
            }
        }

        if (count == 1) {
            cout << s[i];
            return 0;
        }
    }

    cout << "Invalid";
    return 0;
}
*/

/*
Given a string s, the task is to reverse the string. Reversing a string means rearranging the characters such that the first character becomes the last, the second character becomes second last and so on.



// part1 - you can use extra space.
//TC: O(n)
//SC: O(n)

int main(){
    string s="Hello World";
    int n=s.size();
    string rev="";
    
    for(int i=n-1;i>=0;i--){
        rev += s[i];
    }
    
    cout<<rev<<" ";
}


// part2 -> Reverse the same given string, without using any extra space.

//TC: O(n)
//SC: O(1)

int main() {

    string s = "Bobby";

    int start = 0;
    int end = s.size() - 1;

   while(start < end)
   {
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;

    start++;
    end--;
}

    cout<<s;
}
*/





/*
Given a string s, check if it is palindrome or not.



//TC: O(n)
//SC: O(n)
int main() {
    string s ="race";
    int n=s.size();
    string s1 = "";
    
    for (int i=n-1;i>=0;i--){
            s1+=s[i];
    }
    
    cout<< s << " --> " << s1<<endl;
    
    if(s==s1){
        cout<<"pallindrome"<<endl;
    }
    else{
        cout<<"not pallindrome"<<endl;
    }
    
    
}


//TC: O(n)
//SC: O(1)

int main() {
   string str="maddam";
   int n=size(str),flag=0;
   
   for(int i=0;i<=n/2;i++){
       if(str[i]!=str[n-1-i]){
           flag=1;
           break;
       }
   }
   
   if(flag) cout<<"not palindrome";
   else cout<<"palindrome";
}

*/

/*
Given a string, print all the characters that are present at odd indices.  Print them in same order as they appear in the given string.


#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello World";
    int n = s.size();
    
    for(int i=0;i<n;i++)
    {
        if(i%2!=0){
            cout<<s[i]<<" ";
        }
    }
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ="Sarvagna";
    int n=s.size();
    for (int i=1;i<n;i+=2)
    {
        cout<<s[i]<<" ";
    }
}

*/


/*
Given a string, print all the characters that are present at even indices (starting from 0), print them in same order as they appear in the given string.




int main() {
    string s = "Hello Dosto!";
    int n = s.size();
    
    for (int i = 0; i < n; i += 2) {
        cout << s[i];
    }

    return 0;
}



int main()
{
    string s="hello";
    int len=s.size();
    
    for(int i=0;i<len;i++)
    {
        if(i%2==0)
        {
            cout<<s[i];
        }
    }
}
*/



/*

int main() {
	// your code goes here
	string s = "Aditya Jain";
	cout << s << endl;

    int n = s.size();
    cout << n << endl;
    
    // for(int i =0; i<n;i++)
    // {
    //     cout << s[i] << endl;
    // }
    
    //range-based loop
    for(char ch: s)
    {
        cout << ch << " ";
    }
    
}

*/
