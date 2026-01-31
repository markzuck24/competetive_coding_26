#include <bits/stdc++.h>
using namespace std;


/*
Given a positive number, check if it is even or odd.
*/


int main(){
    int n= 39;
    
    if (n%2 == 0) 
    {
        cout<<"it's even"<<endl;
    }
    else 
    {
        cout<<"it's odd"<<endl;
    }
    
    return 0;
}



/*
Given an array of integers, print the minimum and the maximum element in it.

int main()
{
    int a[]={1,2};
    int length=sizeof(a)/sizeof(a[0]);
   
    int max=a[0];
    int min=a[0];
    
    for(int i=1; i<length; i++)
    {
        if(a[i]>max)
        {
            max=a[i]; 
        }
        else if(a[i]<min)
        {
            min=a[i]; 
        }
    }
    
    cout<<"minimum element :"<<min<<endl<<"maiximum:"<<max;
}
*/



/*
Given an array of integers, find the max element in it.



int main(){
    int arr[] = {1,2,3,1};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = arr[0];
    
    for(int i=0;i<n;i++){
       if(arr[i]>max){
          max = arr[i];
       }
    }
    cout << max ;
    
    return 0;
}

*/

/*
    Given an array of integers, find the minimum element in it.



int main(){
    int arr[]={1,2,3,4,5};
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int min=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
        cout<<min<<endl;
}
*/


/*
    Given an array of integers, find the average of all the numbers in it.



int main(){
    
    int arr[] = {1,2};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    double sum=0.0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double avg = sum/n;

    cout << avg << endl;
    return 0;
}

*/
/*
Ques: Given an array of integers, find the sum of all the elements in it.



int main(){
    
    int arr[] = {3,5,6,7,4};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int sum=0;
   
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<sum;
}


// chocolate box = 100rs
// each chocolate price = 5rs
// number of cholocaltes = box price/chocolate price
*/

/*

bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
           return false;
    }

    return true;
}

int main()
{
    int start = 1, end = 1000;

    for (int num = start; num <= end; num++)
    {
        if (isPrime(num))
        {
            cout << num << endl;
        }
    }

    return 0;
}

*/

/*
Display Prime numbers between start and end range:
start = 1, end = 1000 

100 

1*100
2*50
4*25
5*20
10*10

i , n/i



#include <bits/stdc++.h>
using namespace std;

int main() {
    int start = 2, end = 1000;
    
    for (int n = start; n <= end; n++) {
        
        bool is_prime = true;

        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0)
            {
                is_prime = false;
                break;
            }
                
        }
        if (is_prime)   // prime number
            cout << n << endl;
    }
    
    return 0;
    
    
    
}

*/




/*
HW2: Print Inverted full pyramid

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *



int main()
{
    int n = 5;
    
    for(int i=n; i>=1 ; i--)
    {
        for(int s=0; s<=n-i; s++)
        {
            cout << "  ";
        }
        
        for(int j= 1; j<=2*i -1; j++)
        {
            cout << "* ";
        }
        
        
         cout << endl;
    }
   
}


*/



/*
int main()
{
    int n = 5;
    
    for(int i=n; i>=1 ; i--)
    {
        for(int s=0; s<=n-i; s++)
        {
            cout << "  ";
        }
        
        for(int j= i; j<=2*i -1; j++)
        {
            cout << "* ";
        }
        
        for(int j = 0; j<i-1;j++)
        {
            cout << "* ";
        }
        
         cout << endl;
    }
   
}
*/



/* Inverted Right angled half pyramid


  * * * * * 
    * * * * 
      * * * 
        * * 
          *
          
          
int main()
{
    int n = 5;
    
    for(int i=n; i>=1 ; i--)
    {
        for(int s=0; s<=n-i; s++)
        {
            cout << "  ";
        }
        
        for(int j= i; j<=2*i -1; j++)
        {
            cout << "* ";
        }
        
         cout << endl;
    }
   
}

*/


/*
//Implement power function pow() without using system defined pow():
int main() {
    int a, b;
    long long power = 1;

    cin >> a;
    cin >> b;

    //a^b
    for (int i = 1; i <= b; i++) {
        power = power * a;
    }

    cout << "Result = " << power;
    return 0;
}
*/
