#include <bits/stdc++.h>
using namespace std;

/*

Count Occurrences of Anagrams

Given a word pattern and a string text consisting of lowercase characters, the task is to return the count of substrings in text which are anagrams of the pattern.

Examples: 

Input : text = "forxxorfxdofr", pattern = "for"
Output : 3
Explanation : Anagrams present are for, orf and ofr. Each appears in the text once and hence the count is 3.

Input : text = "aabaabaa", pattern = "aaba"
Output : 4
Explanation : Anagrams present are aaba and abaa. Each appears twice in the text and hence the count is 4.


1- Brute Force:
*/


int main()
{
    string text = "aabaabaa", pattern = "aaba";
    
    int n = text.size();
    sort(pattern.begin(), pattern.end());
    int c = 0;
    
    // cout << pattern << endl;
    
    for(int i =0; i<n; i++)
    {
        string sub = "";
        
        for(int j=i; j<n; j++)
        {
            sub = sub + text[j];
            
            sort(sub.begin(), sub.end());
            
            if(sub == pattern)
            {
                c++;
            }
        }
    }
    
    cout << c << endl;
    
}

/*

int main() {
    string text = "cbaefdfhubabacd";
    string pattern = "abc";

    int n = text.length();
    int m = pattern.length();
    int count = 0;

    int freq[26]= {0};

    for (int i =0; i< m; i++) {
        freq[pattern[i] - 'a']++;
    }

    for (int i = 0; i <n ; i++) {
        int Freq2[26] = {0};

        for (int j = 0; j < m; j++) {
            Freq2[text[i + j] - 'a']++;
        }
        bool anagram = true;
        for (int k= 0; k < 26; k++) {
            if (freq[k] != Freq2[k]) {
                anagram= false;
                break;
            }
        }

        if (anagram) {
            count++;
        }
    }

    cout << count;

    return 0;
}
*/

/*

Count substrings with k distinct characters

Given a string s consisting of only lowercase English letters and an integer k, count the total number of substrings (not necessarily distinct) of s that contain exactly k distinct characters.
Note:

A substring is a contiguous sequence of characters within a string.
Substrings that are identical but occur at different positions should each be counted separately.

Examples: 

Input: s = "abc", k = 2
Output: 2
Explanation: Possible substrings are ["ab", "bc"]

Input: s = "aba", k = 2
Output: 3
Explanation: Possible substrings are ["ab", "ba", "aba"]

Input: s = "aa", k = 1
Output: 3
Explanation: Possible substrings are ["a", "a", "aa"]


1 - Brute Force: TC: O(n^2), SC: O(1)
*/

/*

int main()
{
    string s = "aa";
    int n = s.size();
    // cout << n << endl;
    int c = 0, distinct = 0;
    int k =1;
    
    for(int i=0; i < n ; i++)
    {
        unordered_map <int, int> m;
        for(int i=0; i<26; i++)
        {
            m[i] = 0;
        }
        
        distinct = 0;
        
        for(int j = i; j<n ; j++)
        {
            if(m[s[j]-'a'] == 0)
            {
                m[s[j] - 'a'] = 1;
                distinct++;
                // cout << distinct<<endl;
            }
            
            if(distinct == k)
            {
                c++;
                // cout << c << endl;
            }
        }
        
    }
    
    cout << c << endl;
}
*/


/*

Count Strictly Increasing Subarrays

Given an integer array arr[], the task is to count the number of subarrays in arr[] that are strictly increasing and have a size of at least 2. A subarray is a contiguous sequence of elements from arr[]. A subarray is strictly increasing if each element is greater than its previous element.

Examples:

Input: arr[] = [1, 4, 5, 3, 7, 9]
Output: 6
Explanation: The strictly increasing subarrays are: [1, 4], [1, 4, 5], [4, 5], [3, 7], [3, 7, 9], [7, 9]

Input: arr[] = [1, 3, 3, 2, 3, 5]
Output: 4
Explanation: The strictly increasing subarrays are: [1, 3], [2, 3], [2, 3, 5], [3, 5] 

Input: arr[] = [2, 2, 2, 2]
Output: 0
Explanation: No strictly increasing subarray exists.

1- Brute force: TC: O(n^3) - subarrays using 3 loops
2 -Brute force: TC: O(n^2) - subarrays using 2 loops
3 - Optimised - TC: O(n) - using maths.
*/


/*

int main()
{
    int a[] = {2, 2, 2, 2};
    
    int n = sizeof(a)/sizeof(a[0]);
    int c= 0;
    int l = 1;
    
    for(int i=1; i<n ; i++)
    {
        if(a[i] > a[i-1])
        {
            l++;
        }
        else
        {
            c = c + (l*(l-1))/2;
            l=1;
        }
    }
    
    c = c + (l*(l-1))/2;
    
    cout << c << endl;
}
*/


/*

int main()
{
    int a[] = {1, 4, 5, 3, 7, 9};
    
    int n = sizeof(a)/sizeof(a[0]);
    int c= 0;
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        
            if(a[j-1] >= a[j])
            {
                break;
            }
        
            c++;
        }
    }
    
    cout << c << endl;
}
*/
