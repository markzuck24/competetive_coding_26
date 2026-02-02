#include <bits/stdc++.h>
using namespace std;


/*
    Given an array of distinct integer, find the 3rd smallest element in it.
*/



int main(){
        int arr[]={11,2,3,4,5,6};
        int n=sizeof(arr)/sizeof(arr[0]);
        int min=INT_MAX;
       int smin=INT_MAX;
       int ssmin=INT_MAX;
       
       for(int i=0;i<n;i++){
        
        if(arr[i]<min){
            ssmin=smin;
            smin=min;
            min=arr[i];
        }
        else if(arr[i]<smin){
            ssmin=smin;
            smin=arr[i];
        }
        else if(arr[i]<ssmin){
            ssmin=arr[i];
        }
       }
       
       cout<<ssmin<<endl;

    }
    
    

/*
int main()
{
    int arr[]={-10,-16,8,3,2};
    int first = INT_MAX;
    int second = INT_MAX;
    int third = INT_MAX;
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //first smallest element
    for(int i=0;i<n;i++){
        first = min(first,arr[i]);
    }
    
    //2nd smallest element
    for(int i=0;i<n;i++){
        if(arr[i] != first) {
            second = min(second,arr[i]);
        }
    }
    
    //3rd smallest element
    for(int i=0;i<n;i++){
        if(arr[i] != first && arr[i] != second){ 
            third = min(third, arr[i]);
        }
    }

    cout<<"third smallest element is "<< third;
    return 0;
}

*/

/*
Given an array of integers, find the 3rd largest element in it.

int main()
{
    int arr[]={5,6,8,3,2};
    
    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;
    
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    //first max element
    for(int i=0;i<n;i++){
        first = max(first,arr[i]);
    }
    
    //2nd max element
    for(int i=0;i<n;i++){
        if(arr[i] != first) {
            second = max(second,arr[i]);
        }
    }
    
    //3rd largest element
    for(int i=0;i<n;i++){
        if(arr[i] != first && arr[i] != second){ 
            third = max(third, arr[i]);
        }
    }

    cout<<"third_max is "<< third;
    return 0;
}


*/

/*
    Given an array of integers, reverse the array in gorups of k. 
    a = {3, 5, 1, 4, 7, 8, 5, 8}, k =3
    



int main() {
    int a[] = {3,5,1,4,7,8,5,8};
    int n = sizeof(a)/sizeof(a[0]);
    int k = 3;

    for(int i = 0; i < n; i = i+k) {
        int l = i;
        int r = (i + k - 1 < n) ? (i + k - 1) : (n - 1);

        while(l < r) {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            l++;
            r--;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
        
        
    return 0;
}

*/

/*
    Given an array of integers, put all the 1s to the end of the array, while maintaining the relative position of all the other elements.
    
        
        a[] = {3, 1, 5, 6, 1, 1, 2, 1, 4}
        op: {3, 5, 6, 2, 4, 1, 1, 1, 1}
        

int main(){
    
    int a[]={5,6,1,4,1,8,1,9};
    int pos=0;
    int n= sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++)
    {
        if(a[i]!=1)
        {
           a[pos]=a[i];
           pos++;
        }
    }
    
    while(pos<n){
        a[pos]=1;
        pos++;
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

*/




/*
    Given an array of 0s and 1s, find the longest consecutive sequence 
    of all 1s or all 0s.



#include<bits/stdc++.h>
using namespace std;

int main() {
  
    int a[]={0,0,0,0,0,1,1,1,1,0,0,0, 1, 1};
    int maxLen = 0, count = 1;
    
    int n = sizeof(a)/sizeof(a[0]);
    
    
    for(int i = 1; i < n; i++) {
        cout << count << endl;
        if(a[i] == a[i-1])
            count++;
        else
            count = 1;

        if(count > maxLen)
            maxLen = count;
    }

    cout << maxLen;
    return 0;
}

*/



/*
    Left rotate the given array by d positions on left.
    TC: O(n)
    SC: O(1)
    
        int arr[] = {3, 4, 1, 0, 2, 6};
        op arr = [1 0 2 6 3 4]
        
        step1: reverse entire array: [6 2 0 1 4 3]
        step2: reverse first n-d elements --> [1 0 2 6 4 3]
        step3: reverse last d elements --> [1 0 2 6 3 4]
        
        
  
   

   void reverse(int arr[],int l,int r)
   {
     
     while(l<r)
     {
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
        
        l++;
        r--;
    }
}



int main()
{
    int arr[] = {3, 4, 1, 0, 2, 6};
    int d = 2;
    int n=sizeof(arr)/sizeof(arr[0]);
    
    reverse(arr,0,n-1);
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
}


*/ 
