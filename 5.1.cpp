#include <bits/stdc++.h>
using namespace std;

/*

First negative integer in every window of size k


Given an array and a positive integer k, find the first negative integer for each window(contiguous subarray) of size k. If a window does not contain a negative integer, then print 0 for that window.

Examples:  

Input: arr[] = [-8, 2, 3, -6, 1] , k = 2
Output: [-8, 0, -6, -6]
Explanation: First negative integer for each window of size 2
                        [-8, 2] = -8
                        [2, 3]= 0 (does not contain a negative integer)
                        [3, -6] = -6
                        [-6, 10] = -6

Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output: [-1, -1, -7, -15, -15, 0]

Explanation: First negative integer for each window of size 3
                       [ 12, -1, -7] = -1
                      [-1,-7, 8] = -1
                     [-7, 8, -15] = -7
                    [8, -15, 30] = -15
                   [-15, 30, 16] = -15
                  [30, 16, 28] = 0
                  
1- Brute Force:
*/


int main()
{
    int a[] = {-8, 2, 3, -6, 1};
    int k = 2;
    // n=5, k =3, 
    // no of windows = n-k+1
    
    int n = sizeof(a)/sizeof(a[0]);
    
    int res[n-k+1]= {0};
    
    for(int i = 0; i<= (n-k); i++)
    {
        int mn = 0;
        
        for(int j=i; j<(i+k); j++)
        {
            if(a[j] < 0)
            {
                mn = a[j];
                break;
            }
        }
        
        res[i] = mn;
    }
    
    for(int i =0; i<=(n-k) ; i++)
    {
        cout << res[i] << " ";
    }
}



/*
Interleaving Queue Halves


Given a queue q[] of even size. Rearrange the elements by interleaving the first half with the second half.

Note: Interleaving means take one element from the first half, then one element from the second half, then the next element from the first half, then the next element from the second half, and continue this process until the queue is fully rearranged.

Input: q[] = [2, 4, 3, 1]
Output: [2, 3, 4, 1]
Explanation: We place the first element of the first half 2 and after that place the first element of second half 3 and after that repeat the same process one more time so the resulting queue will be [2, 3, 4, 1]

Input: q[] = [3, 5]
Output: [3, 5]
Explanation: We place the first element of the first half 3 and first element of the second half 5 so the resulting queue is [3, 5]

1- Can use extra space.
*/

/*

int main(){

    queue<int> q;

    q.push(2);
    q.push(4);
    q.push(6);
    q.push(9);
    q.push(3);
    q.push(1);
    //expected op: 2 9 4 3 6 1
    int n = q.size();


    queue<int> firstHalf;
    
    
    for(int i = 0; i < n/2; i++){
        firstHalf.push(q.front());
        q.pop();
    }
    
    
    while(!firstHalf.empty()) {
        q.push(firstHalf.front());
        firstHalf.pop();

        q.push(q.front());
        q.pop();
    }
    
    
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }


    return 0;
}


*/

/*

Flipping Bits with K-Window

Given a binary array arr[], Find minimum number of operations to convert all 0s to 1s. In one operation, we can select a subarray (window) of length k and flip all its bits. If it is impossible, return -1.

flip: 0-->1, 1-->0

Input: arr[] = [1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1], k = 2

s1: [1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1]
s2: [1, 1, 1, 1, 1, 0, 1, 0, 1, 1, 1]
s3: [1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1]
s3: [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1]

total ops = 4



Input: arr[] = [0, 0, 1, 1, 1, 0, 0], k = 3
op: -1


1- Brute force: O(n*k)

*/

/*

int main(){
     int arr[]={1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1};
     int n=sizeof(arr)/sizeof(arr[0]);
     int k=2;
     //op: -1
     int count=0;
    for(int i=0; i<=n-k; i++)
    {
       if(arr[i]==0)
       {
           //window flip
           for(int j=0;j<k;j++)
           {
                // if(arr[i+j]==0)
                // {
                //     arr[i+j]=1;   
                // }
                 
                // else
                // {
                //     arr[i+j]=0;
                // }
                
                // arr[i+j] = 1 ^ arr[i+j];
                arr[i+j] = 1 - arr[i+j];
                
            }
            
         count++;
        
           
       }
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
           cout<<-1;
            return 0;
         }
    }
    
    cout<<count;
    return 0;
    }
    
*/

/*

int main(){
     int arr[]={1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1};
     int n=sizeof(arr)/sizeof(arr[0]);
     int k=2;
     //op: -1
     int count=0;
    for(int i=0; i<=n-k; i++)
    {
       if(arr[i]==0)
       {
           //window flip
           for(int j=0;j<k;j++)
           {
                if(arr[i+j]==0)
                {
                    arr[i+j]=1;   
                }
                 
                else
                {
                    arr[i+j]=0;
                }
                
            }
            
         count++;
        
           
       }
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
           cout<<-1;
            return 0;
         }
    }
    
    cout<<count;
    return 0;
    }
*/
