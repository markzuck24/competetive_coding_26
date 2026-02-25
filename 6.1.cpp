#include <bits/stdc++.h>
using namespace std;

/*

Counting frequencies of array elements

Given an array arr[] of non-negative integers which may contain duplicate elements. Return the frequency of each distinct element present in the array.

Examples: 

Input:  arr[] = [10, 20, 10, 5, 20]
Output: [[5, 1], [10, 2], [20, 2]]
Explanation: Here 5 occurs once, 10 occurs 2 times and 20 occurs 2 times.

Input: arr[] = [10, 20, 20]
Output: [[10, 1], [20, 2]] 
Explanation: Here 10 occurs 1 time, 20 occurs 2 times.

1- Brute force: TC: O(n^2)
2- better solution using sorting.
3- using Unordered map.
*/
int main()
{
    int a[] = {10,20,10,5,20};
    int  n = sizeof(a)/sizeof(a[0]);
    int visited[n] = {false};
    int count = 0;
    
    for(int i=0; i<n; i++)
    {
        if(visited[i] == true)
        {
            continue;
        }
        
        count = 1;
        
        for(int j = i+1; j<n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = true;
            }
        }
        
        cout << a[i] << " -> " << count << endl;
        
        
    }
    

    
    return 0;
}



/*

Merge two sorted arrays

Given two sorted arrays arr1[] of size n and arr2[] of size m. Merge these two arrays.
After the merge, the first n smallest elements of the combined sorted array should be stored in arr1[], and the remaining m largest elements should be stored in arr2[]. After the merging process, both arr1[] and arr2[] must remain sorted in non-decreasing order.
Examples: 

Input: arr1[] = [1, 3, 4, 5], arr2[] = [2, 4, 6, 8] 
Output: arr1[] = [1, 2, 3, 4], arr2[] = [4 5, 6, 8] 
Explanation: Combined sorted array = [1, 2, 3, 4, 4, 5, 6, 8], array arr1[] contains smallest 4 elements: 1, 2, 3, 4, and array arr2[] contains the remaining 4 elements: 4, 5, 6, 8.

Input: arr1[] = [5, 8, 9], arr2[] = [4, 7, 8] 
Output: arr1[] = [4, 5, 7], arr2[] = [8, 8, 9] 
Explanation: Combined sorted array = [4, 5, 7, 8, 8, 9], array arr1[] contains smallest 3 elements: 4, 5, 7, and array arr2[] contains the remaining 3 elements: 8, 8, 9.


1- Brute force: (n1+n2)log(n1+n2)
2- Optimised: O(n1+n2)
*/

/*

2- Optimised: O(n1+n2)
int main() {

    int a1[] = {1, 3, 4, 5};
    int a2[] = {2, 4, 6, 8};


    int  n1 = sizeof(a1)/sizeof(a1[0]);
    int  n2 = sizeof(a2)/sizeof(a2[0]);
    int merge[n1 + n2];

    int i= 0, j= 0, k= 0;

    while (i <n1 && j< n2) 
    {
        if (a1[i] < a2[j]) {
            merge[k++]= a1[i++];
        } else {
            merge[k++]= a2[j++];
        }
    }

    while (i < n1) {
        merge[k++]=a1[i++];
    }

    while (j < n2) {
        merge[k++] =a2[j++];
    }

    for(int i=0; i<n1; i++)
    {
        a1[i] = merge[i];
    }
    
    
    for(int i=0; i<n2; i++)
    {
        a2[i] = merge[n1+i];
    }
    
    cout << "a1 is: ";
    for(int i=0; i<n1 ; i++)
    {
        cout << a1[i] << " ";
    }
    
    cout << endl;
    
    cout << "a2 is: ";
    for(int i=0; i<n2 ; i++)
    {
        cout << a2[i] << " ";
    }
    
    

    return 0;
}
*/


/*

int main()
{
    int a1[] = {1, 3, 4, 5};
    int a2[] = {2, 4, 6, 8};
    
    int n1 = sizeof(a1)/sizeof(a1[0]);
    int n2 = sizeof(a2)/sizeof(a2[0]);
    
    int a3[n1+n2];
    
    for(int i=0; i<n1; i++)
    {
        a3[i] = a1[i];
    }
    
    for(int j=0; j<n2; j++)
    {
        a3[n1+j] = a2[j];
    }
    
    
    sort(a3, a3+n1+n2);
    
    // for(int i=0; i<n1+n2; i++)
    // {
    //     cout << a3[i] << endl;
    // }
    
    
    for(int i=0; i<n1; i++)
    {
        a1[i] = a3[i];
    }
    
    for(int i=0; i<n2; i++)
    {
        a2[i] = a3[n1+i];
    }
    
    cout << "a1 is: ";
    for(int i=0; i<n1; i++)
    {
        cout << a1[i] << " ";
    }
    
    cout << endl;
    
    cout << "a2 is: ";
    for(int i=0; i<n2; i++)
    {
        cout << a2[i] << " ";
    }
    
}
*/

/*
Unordered map --> Hashmap

int main()
{
    unordered_map<int , string> m = {{1, "a"}, {2, "c"}, {3, "f"}};

    for(auto i: m)
    {
        cout << i.first << " " << i.second << endl;
    }
    
    return 0;
}
*/

/*
int main()
{
    unordered_map<int, double> m = {
        {101, 499.99},
        {102, 999.50},
        {103, 189.75}
    };
        
    for(auto i : m)
    {
        cout << "Product ID: "<<i.first 
             << " Price: " <<i.second << endl;
    }

    return 0;
}
*/


/*

int main()
{
    unordered_map<int, double> m = {
        {101, 15999.00}, 
        {102, 20999.50},   
        {103, 18999.75},   
        {104, 9999.00}     
    };

    cout << "------ Welcome to Mobile Shop ------\n";
    cout << "Available Products:\n\n";

    for(auto i : m)
    {
        cout << "Product ID: " << i.first 
             << " | Price: Rs " << i.second << endl;
    }

    cout << "\n------------------------------------\n";

    return 0;
}
*/

//create an example with key as string.

/*

int main()
{
    unordered_map<string, int> m = {
        {"Milk",70},
        {"Bread",40},
        {"Rice",120},
        {"Sugar",48}
    };
    cout <<"Grocery Store Price List"<<endl;
    cout<<endl;
    for(auto i : m)
    {
        cout << i.first<<"-->"<<" Price: Rs" << i.second<< endl;
    }
    return 0;
}
*/

/*
int main()
{
    unordered_map<string, long> m = {
        {"Rohit", 15000}, 
        {"Mohit", 20000},   
        {"Lohit", 32000},   
        {"Balu", 9999.00}     
    };

    cout << "Monthly salary of Employees\n";

    for(auto i : m)
    {
        cout << "Employee Name: " << i.first 
             << " -> Salary: " << i.second << endl;
    }


    return 0;
}
*/

/*
int main() {

    unordered_map<string, string> country;
    country = {{"India","IN"},{"America","US"}};


    for (auto x : country) {
        cout << x.first <<" --" << x.second << endl;
    }
} 
*/

/*

int main() {

    int arr[] = {1, 2, 3, 2, 1, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        freq[ arr[i] ]++;
    }

    for (auto x : freq) {
        cout<< x.first<< " appears "<< x.second<< " times" << endl;
    }

}
*/


/*
min-heap

int main() {
	
	priority_queue<int, vector<int> , greater<int>> pq; //min-heap
	
	pq.push(30);
	pq.push(10);
	pq.push(50);
	pq.push(20);
	
	cout << pq.size() << endl;
 
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}
*/



/*
max-heap

int main() {
	
	priority_queue<int> pq; //max-heap
	
	pq.push(30);
	pq.push(10);
	pq.push(50);
	pq.push(20);
	
	cout << pq.size() << endl;
 
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
}
*/
