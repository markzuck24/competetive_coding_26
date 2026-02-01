#include <bits/stdc++.h>
using namespace std;


/*
Given an array of integers, rotate the array by d positions on the left.
a[] = [4,6,2, 1, 8] , d= 3 
op: [1, 8, 4, 6, 2]

2- Can use additional array, but reduce down the complexity.
TC: O(n)
SC: O(n)
*/

int main() {
    
    int arr[]={1,8,4,6,2, 7, 4, 9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int brr[n];
    
    int d= 3;
    
    for(int i=d;i<n;i++){
        brr[i-d]=arr[i];
    }
    
    // n-1-d
    
    for(int i=0;i<d;i++){
        brr[n-d+i]= arr[i];
    }
    
    // n-d-1
    // n-d-1+1
    
    // n-d
    // n-d+1
    // n-d+2
    
    
    for(int i=0;i<n;i++)
    {
        cout<< brr[i] <<" ";
    }
    
}





/*



1- simple rotate d times - O(n*d)
int main()
{
    int a[]={1,2,10,3,4,7,8};
    int n=sizeof(a)/sizeof(a[0]);
    int d=3;
    
    while(d !=0)
    {
        int temp=a[0];
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
        d--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

*/







/*
int main() {
    
    int arr[]={5,9,8,3,8};
    int t=arr[0],i;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    
    arr[n-1]=t;
    
    for(i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
}

*/

/*
Given an array of integers, left rotate the array by 1 position

a[] = [4,6,2, 1, 8] 
op: [6,2,1,8,4]


*/


/*
Given an array of integers, reverse it.
part1 - can create a new array to store reverse.
part2 - without using any other array.




int main()
{
    int a[]={1,2,10,3,4,7,8};
    int n=sizeof(a)/sizeof(a[0]);

    int l=0, r=n-1, temp;
    
    while(l < r)
    {
        temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        
        l++;
        r--;
    }
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

*/

/*

int main()
{
    int a[]={1,2,10,3,4,7,5};
    int n=sizeof(a)/sizeof(a[0]);
    int na[n];
    int j=0;
    
    for(int i=n-1;i>=0;i--)
    {
        na[j]=a[i];
        j++;
    }
    
    for(int i=0;i<n;i++)
    {
            cout<<na[i]<<" ";
    }
    
    
}
*/

/*

int main(){
    
    int arr[] = {3,4,1,0,2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int reverse_arr[n];
    
    for(int i=0;i<n;i++){
      reverse_arr[i] = arr[n - 1 - i];
    }
    
    for (int i=0; i<n; i++) {
      cout << reverse_arr[i] << " ";
  }
    

    return 0;
    
}
*/   
    

//Given an array of distinct integers, find the 2nd largest element in it.


/*
int main() {
    int arr[]={5,6,8,3,2,5,9,0,3},mx=arr[0],smx=arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(arr[i] < mx) {
            smx=max(smx,arr[i]);
    }
    }
    
    cout<<"smax is "<<smx;
}
*/

/*
int main(){
    int arr[] = {-3,-4,-9,-7,-2,-6};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int sec_max = arr[0];
    
    for(int i=0;i<n;i++)
    {
       if(max < arr[i]){
         sec_max = max;
          max = arr[i];
       }
       else if (arr[i] > sec_max){
         sec_max = arr[i];
       }
    }
    cout << "Second max no. is:" << sec_max;
    

    return 0;
}
  */ 
