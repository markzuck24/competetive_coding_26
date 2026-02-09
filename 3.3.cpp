#include <bits/stdc++.h>
using namespace std;
 
 /*
 
Split array into three equal sum segments:

Given an integer array arr[], the task is to divide the array into three non-empty contiguous segments with equal sum. In other words, we need to return an index pair [i, j], such that sum(arr[0...i]) = sum(arr[i+1...j]) = sum(arr[j+1...n-1]).

Note: If it is impossible to divide the array into three non-empty contiguous segments, return [-1, -1].

 
 eg: [1, 6, 2] --> sum = 9
 op: [-1,-1]
 */
 
 
 #include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long total = 0;
    for (int x : arr) total += x;

    // If not divisible by 3
    if (total % 3 != 0) {
        cout << "-1 -1";
        return 0;
    }

    long long target = total / 3;
    long long sum = 0;
    int i = -1, j = -1;

    for (int idx = 0; idx < n; idx++) {
        sum += arr[idx];

        if (sum == target && i == -1) {
            i = idx;
        }
        else if (sum == 2 * target && i != -1) {
            j = idx;
            break;
        }
    }

    // Check third segment non-empty
    if (i != -1 && j != -1 && j < n - 1) {
        cout << i << " " << j;
    } else {
        cout << "-1 -1";
    }

    return 0;
}


 /*
 //TC: O(n)
 int main()
{
    int a[] = {2, 2, 1, 3, 3, -1, 6,-1};
    int n = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    int res[2];
    
    for(int i = 0; i < n;i++)
    {
        sum += a[i];
    }
    
    int frac_sum = sum / 3;
    
    if(frac_sum * 3 != sum)
    {
        cout << "-1, -1" << endl;
        return 0;
    }
    
    
   int temp_sum = 0, j = 0;
   
    for(int i = 0; i < n; i++)
    {
        temp_sum += a[i];
        if(temp_sum == frac_sum)
        {
            res[j] = i;
            j++;
            temp_sum = 0;
        }
    }
    
    cout << res[0] << " " << res[1] << endl; 
}
 
*/
/* 
Product of Array Except Self

    Given an array arr[] of n integers, construct a product array res[] (of the same size) such that res[i] is equal to the product of all the elements of arr[] except arr[i]. 
*/



/*
case by case analysis -
1- there are zero 0s -> res[i] = prod_all/a[i]
2- there is exactly one 0 -> 
    a-> prod_all expect 0.
    b-> make all res[i] = 0 except for the i where a[i] = 0 as this will be prod_all.
3- there are more than one 0s.
put all res[i] = 0.


//TC: O(n)
#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {0,4,1,0,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result[n];

    int zeroCount = 0;
    long long product = 1;


    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        } else {
            product *= arr[i];
        }
        
        result[i] = 0;
    }

    if (zeroCount == 0) {
        // No zeros: divide total product
        for (int i = 0; i < n; i++) {
            result[i] = product / arr[i];
        }
    }
    else if (zeroCount == 1) {
     
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                result[i] = product;
                break;
            }
        }
    }
    // zeroCount > 1 → result stays all 0

    // Output
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}

*/

/*

//gives incorrect answer when there is atleat 1 zero,
// if there are no 0s, then this code gives correct ans
int main()
{
    int arr[] = {2,4,0,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int res[n];
    int total_mul = 1;
    
    for(int i = 0; i < n; i++)
    {
        total_mul *= arr[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        res[i] = total_mul / arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}

*/

/*
//TC: O(n^2)

int main()
{
    int arr[] = {2,4,6,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int res[n];
    
    for(int i = 0; i < n; i++)
    {
        res[i] = 1;
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }
            
            res[i] *= arr[j];
            cout << res[i] << " ";
        }
        cout << endl;
    }

    cout << endl;
    
    for(int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
}

*/
