#include <bits/stdc++.h>
using namespace std;

/*
Missing ranges of numbers

You have an inclusive interval [lower, upper] and a sorted array of unique integers arr[], all of which lie within this interval. A number x is considered missing if x is in the range [lower, upper] but not present in arr. Your task is to return the smallest set of sorted ranges that includes all missing numbers, ensuring no element from arr is within any range, and every missing number is covered exactly once.


eg1: Input: arr[] = [14, 15, 20, 30, 31, 45], lower = 10, upper = 50
op:  [[10, 13], [16, 19], [21, 29], [32, 44], [46, 50]]


c1 - > lower -> (a[0] -1)
c2 ->   if(a[i+1] - a[i] > 1) === a[i]+1 -> a[i+1] -1
c3 -> a[n-1]+1 -> upper

*/


#include <bits/stdc++.h>
using namespace std;

//TC: O(n)
int main() { 
//   int arr[]={14,15,20,30,31,45};
   
//   int lower=10,upper=50;

    int arr[] = {-48, -10, -6, -4, 0, 4, 17};
    int lower = -54, upper = 17;

   int n=size(arr);
   if(arr[0]-lower>1){
       cout<<"["<<lower<<","<<arr[0]-1<<"]";
   }
   
   for(int i=0;i<n-1;i++){
     if(arr[i+1]-arr[i]>1){
          cout<<"["<<arr[i]+1<<","<<arr[i+1]-1<<"]";
     }
   }
   
   if(upper-arr[n-1]>1){
       cout<<"["<<arr[n-1]+1<<","<<upper<<"]";
   }
}


/*
Rearrange Array Elements by Sign


Given an array arr[] of size n, the task is to rearrange it in alternate positive and negative manner without changing the relative order of positive and negative numbers. In case of extra positive/negative numbers, they appear at the end of the array.

Note: The rearranged array should start with a positive number and 0 (zero) should be considered as a positive number.



Input:  arr[] = [1, 2, 3, -4, -1, 4]
op: [1, -4 2, -1, 3, 4]

part1 - can use additional space.
*/


//TC: O(n)
//SC: O(n)
/*
int main()
{
  
  int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int positive[n];
    int negative[n];

    int p = 0;
    int q = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {          
            positive[p] = arr[i];
            p++;
        } else {
            negative[q] = arr[i];
            q++;
        }
    }
    
    int i = 0, j = 0;
    
    while (i < p && j < q) {
        cout << positive[i] << " ";
        cout << negative[j] << " ";
        i++;
        j++;
    }
    
    
    while (i < p) {
        cout << positive[i] << " ";
        i++;
    }
    
    while (j < q) {
        cout << negative[j] << " ";
        j++;
    }
    
    return 0;
}  

*/

/*
Count Substrings with equal number of 0s, 1s and 2s

Given a string that consists of only 0s, 1s and 2s, count the number of substrings that have an equal number of 0s, 1s, and 2s.


Input: str = “0102010”
op: 2
102
201

*/




/*
//TC:O(n^3)
int main(){
    string str = "01020210";
    //102, 210, 021, 102021
    
    
    int n = str.size();
    
    for(int i = 0; i < n ; i++){
        int count0 = 0, count1 = 0, count2 = 0;
        for(int j = i; j < n; j++){
            if(str[j] == '0'){
                count0++;
            }
            if(str[j] == '1'){
                count1++;
            }
            if(str[j] == '2'){
                count2++;
            }
            
            if(count0 == count1 && count1 == count2 && count0 > 0){
            for(int k = i; k <= j; k++){
                cout << str[k]<<" ";
            }
            cout <<endl;
        }
        
        }
        
    }
    return 0;
}
*/
/*

//TC:O(n^3)
int main()
{
   string str = "01020210";
    //102, 210, 021, 102021
    int n = str.size();
    int ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            int c0 = 0, c1 = 0, c2 = 0;

            for (int k = i; k <= j; k++) {
                if (str[k] == '0') c0++;
                else if (str[k] == '1') c1++;
                else if (str[k] == '2') c2++;
            }

            if (c0 == c1 && c1 == c2 && c0 > 0) {
                ans++;
                cout << str.substr(i, j - i + 1) << endl;
            }
        }
    }

    cout << "Total substrings: " << ans;
    return 0;
}
*/
