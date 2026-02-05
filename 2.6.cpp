#include <bits/stdc++.h>
using namespace std;


/*

Given a sorted array arr[] of size n, the goal is to rearrange the array so that all distinct elements appear at the beginning in sorted order. Additionally, return the length of this distinct sorted subarray.

Note: The elements after the distinct ones can be in any order and hold any value, as they don't affect the result.

Input: arr[] = [1, 2, 2, 3, 4, 4, 4, 5, 5]
Output: [1, 2, 3, 4, 5]

*/

int main() {

    int arr[] = {1,1,2,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;

    for(int j=1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }

    int len = i + 1;

    cout<<len<<endl;

    for(int i=0; i<len;i++){
        cout<<arr[i]<<" ";
    }
}



/*
Missing and Repeating in an Array


Given an unsorted array arr[] of size n, containing elements from the range 1 to n, it is known that one number in this range is missing, and another number occurs twice in the array, find both the duplicate number and the missing number.


ip: [1,2,3,6,1] - invalid ip
n = 5

Input: arr[] = [4, 3, 6, 2, 1, 1]





//TC : O(n)
//SC : O(n)

int main()
{
    int a[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(a)/sizeof(a[0]);
    int duplicate = -1, missing = -1;
    
    int freq[n+1];
    
    for(int i=0; i<=n; i++)
    {
        freq[i] = 0;
    }
    
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    
    for(int i=0;i<=n;i++)
    {
        cout << freq[i] << " ";
    }
    
    cout << endl;
    for(int i=1;i<=n;i++)
    {
        if(freq[i] == 2)
        {
            duplicate = i;
            break;
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        if(freq[i] == 0)
        {
            missing = i;
            break;
        }
    }
    
    
    cout << duplicate << " " << missing << endl;
}

*/

/*
//TC = O(nlogn)

int main() {
    int arr[]={4,3,6,2,6,1},n=size(arr),miss, givenSum = 0, duplicate = -1;
       
      sort(arr,arr+n);
       
    for(int i =0; i<n; i++)
    {
        givenSum += arr[i];
    }
  
   
    for(int i=0;i<n-1;i++){
       if(arr[i+1]==arr[i]){
           duplicate = arr[i];
           cout<<"duplicate element is "<<duplicate << endl;
           break;
       }
   }
   
    miss = (n*(n+1) / 2) - givenSum + duplicate;
   
    cout<<"missing element is "<< miss<<endl;

   
}
*/


/*
//TC: O(n^2)

int main(){
    int arr[] = {4, 3, 6, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int flag = 0;
    int duplicate;
    int givenSum = 0;
    
    for(int i =0; i<n; i++)
    {
        givenSum += arr[i];
    }
    
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                duplicate = arr[i];
                flag = 1;
                break;
            }
        }
        
        if(flag == 1)
        {
            break;
        }
    }
    
    int num = (n*(n+1) / 2) - givenSum + duplicate;
    

    [4, 3, 6, 2, 1, 1]
    
ideal sum =     6*7/2 = 21
given sum = 17
num = 21 - 17 + 1 = 4+1 = 5

    
    cout << "Missing: "<< num <<"\nDuplicate: "<<duplicate;
    return 0;
}
*/

/*
Stock Buy and Sell - Multiple Transaction Allowed

Given an array prices[] representing stock prices, find the maximum total profit that can be earned by buying and selling the stock any number of times.

Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.

Input: prices[] = [100, 180, 260, 310, 40, 535, 695]
Output: 865
(310 - 100) + (695-40) = 865

180 - 100
+ 260 - 180
+ 310 - 260
+ 535 - 40
+ 695 - 535


 - 100
 + 310 
 - 40
 + 695 



//TC: O(n)

    {
        int a[] = {100,180,260,310,40,535,695};
        int n = sizeof(a) / sizeof(a[0]);
        int profit = 0;

            for(int i = 1; i < n; i++){
                if(a[i] > a[i-1]){
                    profit = profit + a[i] - a[i-1];
                }
            }
        cout << profit;
        return 0;
}

*/
