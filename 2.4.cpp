#include <bits/stdc++.h>
using namespace std;


/*


Given an array arr[] of size n, the task is to find all the Leaders in the array. An element is a Leader if it is greater than or equal to all the elements to its right side.

Note: The rightmost element is always a leader.

a[] = {4, 10, 6, 3, 5}
leaders: 10, 6, 5

1- Brute Force.
*/




/*
Given an array of only 2s, 3s and 4s, move all the 2s before all 3s and all 3s before all 4s.

TC: O(n)
SC: O(1) -> independent of n -> constant

int main(){
    int arr[]={4,3,3,2,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cnt2=0,cnt3=0,cnt4=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==2){
            cnt2++;
        }
        else if(arr[i]==3){
            cnt3++;
        }
        else if(arr[i]==4){
            cnt4++;
        }
     }
     
     
    //  for(int i=0;i<cnt2;i++){
    //     arr[i]=2;
    //  }
    //  for(int i=cnt2;i<cnt2+cnt3;i++){
    //     arr[i]=3;
    //  }
    //  for(int i=cnt2+cnt3;i<n;i++){
    //     arr[i]=4;
    //  }
     
     
     int k = 0;
     
     while(cnt2 != 0)
     {
         arr[k] = 2;
         k++;
         cnt2--;
     }
     
      while(cnt3 != 0)
     {
         arr[k] = 3;
         k++;
         cnt3--;
     }
     
      while(cnt4 != 0)
     {
         arr[k] = 4;
         k++;
         cnt4--;
     }
     
     
     
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
}

*/

/*

TC: O(n^2) --> bubble sort
int main()
{
    int arr[]={2,3,2,3,2,4,2,4,2,2,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {   if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }
}
*/


/*
Given an array of non-negative integers, the array represents a number.
You have to add +1 to the number and print the new array.
Note: the input is given in such a manner that the size of the array will not change.

a[] = {2, 3, 5} --> 235
235+1 --> 236
a[] --> {2, 3, 6}





int main() {
    int a[] = {2, 9, 9};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = n-1; i >=0; i--) {
        if(a[i] < 9) {
            a[i] = a[i] + 1;
            break;
        } else {
            a[i] = 0;
        }
    }

    // print updated array
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

*/

/*
    Given an array of integers, find the maximum product of the two different elements (elements present at different indices) in it.


version 4: TC: O(n)
int main(){
    int a[]={3,2,5,6,4,-7,6,9,-9,6};
    int n=sizeof(a)/sizeof(a[0]);
    int f_min=0,f_max=0,s_min=INT_MAX,s_max=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(a[f_min]>a[i]){
            f_min=i;
        }
        if(a[f_max]<a[i]){
            f_max=i;
        }
    }
    
    for(int i=0;i<n;i++){
        if(i!=f_min){
            s_min=min(s_min,a[i]);
        }
        
        if(i!=f_max){
            s_max=max(s_max,a[i]);
        }
    }

    cout<<max(a[f_min]*s_min,a[f_max]*s_max);
    return 0;
}

*/

/*
version 3:
This code is almost correct, but doesnt work when there are duplicate occurances of the max or the min element.

int main() {
    
    int arr[]={-4,-7,-10,-1,-10,-9},n=size(arr),mx=INT_MIN,smx=INT_MIN,mn=INT_MAX,smn=INT_MAX;
    
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    
    for(int i=0;i<n;i++){
       if(arr[i] != mx)
       {
           smx = max(smx, arr[i]);
       }
    }
    
    for(int i=0;i<n;i++){
       if(arr[i] != mn)
       {
           smn = min(smn, arr[i]);
       }
    }
    
    
    cout<<"max product is "<<max(mn*smn, mx*smx);
}
*/



/*version 2
TC:O(nlogn)

int main() {
    
     int a[]={-6,1,2,3,4,5,2};
     int n=sizeof(a)/sizeof(a[0]);
 
    sort(a, a+n);//sort array in ascending order.

    cout << max(a[0]*a[1], a[n-1]*a[n-2]);   // product of two max elements
    return 0;
}
*/


/* version1:

TC: O(n^2)

#include <bits/stdc++.h>
using namespace std;

int main() {
 int a[]={-1,-2,-3,-4,-5,-2};
 int n=sizeof(a)/sizeof(a[0]);
 int max_prod=INT_MIN;
 
 for(int i=0;i<n;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         max_prod=max(max_prod,a[i]*a[j]);
     }
 }
 
 cout<<"maximum product :"<<max_prod;
 

}
*/
