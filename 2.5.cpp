#include <bits/stdc++.h>
using namespace std;


Stock Buy and Sell - Multiple Transaction Allowed


Given an array prices[] representing stock prices, find the maximum total profit that can be earned by buying and selling the stock any number of times.

Note: We can only sell a stock which we have bought earlier and we cannot hold multiple stocks on any day.

Input: prices[] = [100, 180, 260, 310, 40, 535, 695]
//ans = 865

explanation:
profit = 
(310-100 = 210) 
(695 - 40 = 655)

total profit = 210 + 655 = 865

/*
Stock Buy and Sell - Max one Transaction Allowed

Given an array prices[] of non-negative integers, representing the prices of the stocks on different days, find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.

Note: Stock must be bought before being sold.

Input: prices[] = [7, 10, 1, 3, 6, 9, 2]
Output: 8

Input: prices[] = [7, 6, 4, 3, 1]
Output: 0

*/



/*
//TC:O(n)
int main() {

    int price[] = {7,10,1,3,6,9,2};
    int n = sizeof(price)/sizeof(price[0]);

    int minprice = INT_MAX;
    int maxprofit = 0;

    for(int i=0; i<n; i++){

        minprice = min(minprice, price[i]);
        
        maxprofit = max(maxprofit, price[i] - minprice);
    }

    cout <<  maxprofit;

    return 0;
}
*/

/*
//TC:O(n^2)

int main()
    {
        int a[] = {7,10,1,3,6,9,2};
        int n = sizeof(a) / sizeof(a[0]);
        int profit = 0;

        for(int i = 0; i < n; i++){
            for(int j = i+1 ; j < n ; j++ )
            {
                if(a[i] < a[j])
                {
                    int ans = a[j] - a[i];
                    profit = max(profit , ans);
                }
            }
        }
        cout << profit;
        return 0;
    }

*/

/*
    Given an array of distinct integers, find the maximum possible product of any 3 elements in it. cannot consider the same element more than once.
    
    
*/


/*
//TC: O(n^3)

int main()
{
    int a[] = {4, -5, 10, 6, -3, -2, -10};
    int n = sizeof(a)/sizeof(a[0]);
    //ans = 540
    int mx = INT_MIN;
    
    for(int i =0;i<n;i++)
    {
        for(int j =i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                mx = max(mx, a[i]*a[j]*a[k]);
            }
        }
    }
    
    cout << mx;
}
*/


/*
//TC: O(n)
int main()
{
    int arr[]={4,-5,6,10,0,-2,-10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN,smax=INT_MIN,tmax=INT_MIN,min=INT_MAX,smin=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            tmax=smax;
            smax=maxi;
            maxi=arr[i];
        }
        
        else if(arr[i]>smax)
        {
            tmax=smax;
            smax=arr[i];
        }
        
        else if(arr[i]>tmax)
        {
            tmax=arr[i];
        }
    }

     
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            smin=min;
            min=arr[i];
        }
        
        else if(arr[i]<smin)
        {
            smin=arr[i];
        }
    }
    
   
     
    
    int product = max((maxi*smax*tmax),(min*smin*maxi));
    
    cout<<product;
    

}
*/

/*
//TC: O(nlogn)
int main() {
    int a[] = {4, -5, 10, 6, -3, -2, -10};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a + n);

    int product1 = a[n-1] * a[n-2] * a[n-3];   // 3 largest
    int product2 = a[0] * a[1] * a[n-1];       // 2 smallest * largest

    int ans = max(product1, product2);

    cout << "Maximum product of 3 elements = " << ans;

    return 0;
}
*/

/*
//only works when all the elements are positive
int main() {
    int a[] = {4, -5, 10, 6, -3, -2, -10};
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a+n);   // sort array

    int ans = a[n-1] * a[n-2] * a[n-3];
    cout << "Maximum product of 3 elements = " << ans;

    return 0;
}
*/

/*
Given an array arr[] of size n, the task is to find all the Leaders in the array. An element is a Leader if it is greater than or equal to all the elements to its right side.

Note: The rightmost element is always a leader.


TC: O(n)

int main() {

    int arr[] = {4,10,6,3,6,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxLeader = arr[n-1];

    cout << "Leaders: ";
    cout << maxLeader << " ";  // rightmost leader

    for(int i=n-2; i>=0; i--){

        if(arr[i] >= maxLeader){
            maxLeader = arr[i];
            cout << maxLeader << " ";
        }
    }

    return 0;
}

*/


/*

//TC: O(n^2)

int main() {
    int a[] = {10, 8, 6, 4, 2};
    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++) {
        bool Leader = true;

        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                Leader = false;
                break;
            }
        }
        
        if (Leader) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
*/
