#include <bits/stdc++.h>
using namespace std;

/*

Fizz Buzz

Given an integer n, for every positive integer i <= n, the task is to print,

"FizzBuzz" if i is divisible by both 3 and 5,
"Fizz" if i is divisible only by 3 but not 5,
"Buzz" if i is divisible only by 5 but not 3
i as a string, if none of the conditions are true.


int main() {
    int n = 15;
    

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << to_string(i) << endl;
        }
    }

    return 0;
}

*/

/*
Check if given String is Pangram or not

Given a string s, the task is to check if it is Pangram or not. 
A pangram is a sentence containing all the lowercase letters of the English Alphabet.



int main() {
 string s="hello world!";
 int len=s.size();
    char alpha[26],freq[26]={0};
    for(char i=0;i<26;i++)
    {
        alpha[i]='a'+i;
    }
    
    for(int i=0;i<len;i++)
    {
        if(s[i]==' ')
        {
            continue;
        }
        else
        {
            freq[s[i]-97]++;
        }
    }
    
    for(int i=0;i<26;i++)
    {
        if(freq[i]==0)
        {
            cout<<"not a panagram";
            return 0;
        }
    }
    cout<<"panagram";

}
*/
/*
int main() {
    string s = "hello";

    bool isPangram = true; 

    int n = s.length();
    
    for (char c = 'a'; c <= 'z'; c++) {
        bool flag = false;

        
        for (int i = 0; i <n ; i++) {
            if (s[i] == c) {
                flag = true;
                break; 
            }
        }

        if (!flag) {
            isPangram = false; 
            break;
        }
    }

    if (isPangram) {
        cout << "Pangram";
    } else {
        cout << "Not Pangram";
    }

    return 0;
}

*/

/*
Check if the given two Strings are Anagrams of each other

Given two non-empty strings s1 and s2 of lowercase letters, determine if they are anagrams — i.e., if they contain the same characters with the same frequencies.

s1 = "hello"
s2 = "olehl"
op: yes


s1 = "hello"
s2 = "olhhl"
op: no


s1 = "hello" --> "ehllo"
s2 = "olehl" --> "ehllo"


//TC: O(n^2)
int main()
{
    string s1 = "hello";
    string s2 = "oelhh";

    if(s1.size() != s2.size()){
        cout<<"not anagram";
        return 0;
    }

    int n = s1.size();

    for(int i=0;i<n;i++){

        bool flag = false;

        for(int j=0;j<n;j++){

            if(s1[i] == s2[j]){
                flag = true;

                
                s2[j] = '0';
                break;
            }
        }

        if(!flag){
            cout<<"not anagram";
            return 0;
        }
    }

    cout<<"anagram";
}

*/

/*

//TC: O(n)
int main() 
{
     string s1="hello";
     string s2="ellho";
     int len=s1.size();
    int len2=s2.size();
    int freqs1[26]={0},freqs2[26]={0};
    
    if(len!=len2)
    {
        cout<<"not an anagram";
        return 0;
    }
    
    for(int i=0;i<len;i++)
    {
        freqs1[s1[i]-'a']++;
    }
    
    for(int i=0;i<len2;i++)
    {
        freqs2[s2[i]-'a']++;
    }
    
    for(int i=0;i<26;i++)
    {
        if(freqs1[i]!=freqs2[i])
        {
            cout<<"not an anagram";
            return 0;
        }
    }
    cout<<"anagram";

    cout << endl;
    cout << 'd' - 'a' << endl;
    
}

*/

/*
//O(n^2 + m^2) as Bubble sort is used
// default sorting -> O(nlogn + mlogm)

int main() {
    string s1 = "anagram";
    string s2 = "nagaram";

    int n1=s1.length();
    int n2=s2.length();
    if (n1!= n2) {
        cout << "Not Anagrams";
        return 0;
    }

    
    for (int i = 0; i < n1 - 1; i++) {
        for (int j = 0; j < n1 - i - 1; j++) {
            if (s1[j] > s1[j + 1]) {
                char temp = s1[j];
                s1[j] = s1[j + 1];
                s1[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < n2 - 1; i++) {
        for (int j = 0; j < n2 - i - 1; j++) {
            if (s2[j] > s2[j + 1]) {
                char temp = s2[j];
                s2[j] = s2[j + 1];
                s2[j + 1] = temp;
            }
        }
    }

    
    if (s1 == s2) {
        cout << "Anagrams";
    } else {
        cout << "Not Anagrams";
    }

    return 0;
}
*/
