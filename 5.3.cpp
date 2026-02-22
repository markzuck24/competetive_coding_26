#include <bits/stdc++.h>
using namespace std;

/*

Print 1 to n using Recursion

Given an integer n. Print numbers from 1 to n using recursion.
*/

/*
void recur_print(int n)
{
    if(n==0)
    {
        return;
    }
    
    recur_print(n-1);
    cout << n << " ";
    
}

int main()
{
    int n = 10;
    recur_print(n);
    return 0;
}
*/


/*

Print 1 to n using Recursion

Given an integer n. Print numbers from n to 1 using recursion.
*/


void recur_print(int n)
{
    if(n==0)
    {
        return;
    }
    
    cout << n << " ";
    recur_print(n-1);
    
    
}

int main()
{
    int n = 10;
    recur_print(n);
    return 0;
}


/*

Maximum Depth or Height of a Binary Tree

Given the root of a binary tree, find the maximum depth of the tree.
The maximum depth or height of the tree is the number of edges in the tree from the root to the deepest node.

*/


/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

int height(Node* root) {
    
    if(root == nullptr)
    {
        return -1;
    }
    
    int lheight = height(root->left);
    int rheight = height(root->right);
    
    return max(lheight, rheight) + 1;
        
}



int main() {
  
    // Representation of the input tree:
    //     12
    //    /  \
    //   8   18
    //  / \
    // 5   11
    Node *root = new Node(12);
    root->left = new Node(8);
    root->right = new Node(18);
    root->left->left = new Node(5);
    root->left->right = new Node(11);
    
    cout << height(root);
    
    return 0;
}

*/

/*

3 Sum - Triplet Sum in Array

Given an array arr[] and an integer sum, check if there is a triplet in the array which sums up to the given target sum.

Examples: 

Input: arr[] = [1, 4, 45, 6, 10, 8], target = 13
Output: true
Explanation: The triplet [1, 4, 8] sums up to 13

Input: arr[] = [1, 2, 4, 3, 6, 7], target = 10 
Output: true
Explanation: The triplets [1, 3, 6] and [1, 2, 7] both sum to 10. 

Input: arr[] = [40, 20, 10, 3, 6, 7], sum = 24 
Output: false
Explanation:  No triplet in the array sums to 24.

1- Brute Force. TC: O(n^3)
2- Optimised : TC: O(n^2)


ai + aj + ak = t
aj + ak = t - ai
*/

/*
//TC: O(n^2)
int main(){
    int a[] = {1, 4, 45, 6, 10, 8};
    int target = 1;
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    for(int i = 0; i < n; i++){
        int left = i + 1;
        int right = n - 1;

        while(left < right){
            int sum = a[i] + a[left] + a[right];
            if(sum == target) {
                cout << "True";
                return 0;
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
    }
        cout << "false" ;
    return 0;
}

*/

/*
int main() {
 int arr[] = {1,4,45,6,10,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = 13;

    bool flag = false;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k=j+1;k<n;k++){
                if((arr[i] + arr[j] +arr[k]) == m) {
                flag =true;
                cout << flag << endl;
                return 0;
                }
            }
            
        }
    }
    
    cout<< flag << endl;
    return 0;
    
} 
*/
/*

Count pairs with absolute difference equal to k

Given an array arr[] and a positive integer k, the task is to count all pairs (i, j) such that i < j and absolute value of (arr[i] - arr[j]) is equal to k. 

Examples: 

Input: arr[] = [1, 4, 1, 4, 5], k = 3
Output: 4
Explanation: There are 4 pairs with absolute difference 3, the pairs are [1, 4], [1, 4], [1, 4] and [4, 1]

Input: arr[] = [8, 16, 12, 16, 4, 0], k = 4
Output: 5
Explanation: There are 5 pairs with absolute difference 4, the pairs are [8, 12], [8, 4], [16, 12], [12, 16], [4, 0].


//Optimised - two pointer approach  - O(nlogn)
*/

/*

int main(){
    int a[] = {1,4,1,4,5};
    int k = 3;
    int n = sizeof(a)/sizeof(a[0]);
    
    sort(a, a+n);
    
    int i=0, j = 0;
    int count = 0;

    while(j<n)
    {
        int diff = a[j] - a[i];
        
        if(diff < k)
        {
            j++;
        }
        else if(diff > k)
        {
            i++;
        }
        else
        {
            int p = a[i], q = a[j];
            int c1 = 0, c2= 0;
            
            while(i < n && a[i] == p)
            {
                i++;
                c1++;
            }
            
            while(j < n && a[j] == q)
            {
                j++;
                c2++;
            }
            
            if(p==q)
            {
                count += (c1*(c1-1)/2);
            }
            else
            {
                count += (c1*c2);
            }
            
            
        }
    }
   
    cout << count << endl;

    return 0;
}
*/


/*
1- Brute Force: O(n^2)


int main()
{
    int a[] = {8, 16, 12, 16, 4, 0};
    int k = 4;
    int c = 0;
    int n = sizeof(a)/sizeof(a[0]);
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(abs(a[i] - a[j]) == k)
            {
                c++;
            }
        }
    }
    
    cout << c << endl;
    
}
*/
