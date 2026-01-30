#include <bits/stdc++.h>
using namespace std;



/*
HW - Print reverse full Pyramid

* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
        
        
*/


/*
Pattern printing: 5- Full Pyramid

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/


int main()
{
    int n = 5;
    
    for(int i=1; i<= n ; i++)
    {
        //number of spaces on the ith row
        for(int space = 1; space <= n-i; space++)
        {
            cout << "  ";
        }
        
        int k = 0;
        
        //number of * on ith row.
        while(k!= 2*i-1)
        {
            cout << "* ";
            k++;
        }
        
        cout << endl;
    }
}


/*
Pattern printing: 4- Inverted Half Numerical Pyramid

1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1



int main()
{
    int row = 7;
    
    for(int i=row; i>=1; i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

*/



/*
Pattern printing: 3- Half Numerical Pyramid

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5




int main() {
    // Write C++ code here
    int n = 7;

    int i,j;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
*/


/*
Pattern printing: 2- Inverted Half Pyramid 

* * * * *
* * * *
* * * 
* *
*



int main()
{
    int n = 5;
    
   for(int i=n; i>=1; i--)
   {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
   }
    return 0;
}

*/

/*
int main (){
    int  n = 5 ;
    int i , j ;
    for( i = 1 ; i <=5 ; i++){
        for( j = 0 ; j <= 5-i; j++){
        
            cout << "* ";            
        }
        
        cout << "  " << i << " " << j;
        cout << endl ;
    }  
}
*/


/*
Pattern printing: 1- Half Pyramid 
*
* *
* * *
* * * *
* * * * *


int main(){
    int n = 7;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
}


*/
/*
bool isArmstrong(int num)
{
    int temp=num,sum=0,count=0;
        
        while(temp>0){
            count++;
            temp/=10;
        }
        
        temp=num;
        
        while(temp>0)
        {
            int p= temp % 10;
            sum += pow(p,count);
            temp /= 10;
        }
        
       return (sum == num);
}

int main()
{
    //Given two integers: start and end, find all the armstrong numbers between start and end, including both.
    
    int start=1,end=10000;
    
    for(int num=start;num <=end;num++)
    {
        
         if(isArmstrong(num))
         {
             cout << num << endl;
         }

    }
}

*/

/*
int main()
{
    //Given two integers: start and end, find all the armstrong numbers between start and end, including both.
    
    int start=1,end=10000;
    
    for(int num=start;num <=end;num++)
    {
        
        int temp=num,sum=0,count=0;
        
        while(temp>0){
            count++;
            temp/=10;
        }
        
        temp=num;
        
        while(temp>0)
        {
            int p= temp % 10;
            sum += pow(p,count);
            temp /= 10;
        }
        
        if (sum ==num)
        {
            cout<<num << endl;
        }
         

    }
}

*/
/*

int main()
{
    //LCM using GCD
 
    int x = 20;
    int y = 30;
    
    int gcd = 1;
    
    int mini = min(x,y);
    
    for(int i = mini; i >= 2; i--)
    {
        if(((x%i) == 0) && (y%i == 0))
        {
            gcd = i;
            break;
        }
    }
    cout << "GCD: " << gcd << endl;
    
    cout << "LCM: " << x*y/gcd;
    
}
*/

/*
int main()
{
    //Given two numbers, find their LCM.
    
    int a=50,b=100;
    
    int lcm;
    
    lcm=max(a,b);
    
    while(true)
    {
        if(lcm % a==0 && lcm % b ==0)
        {
            break;
        }
        
        lcm++;
    }
    
    cout<<" LCM is: "<<lcm;
    
}
*/

/*
int main() {
   int a=20,b=30;
   
   while(a != b)
   { 
       
    cout << a << " " << b << endl;
       
    if(a>b) 
    {
        a=a-b;
    }
        
    else
    {
        b=b-a;
    }
    
   }

    cout<<"gcd is "<<a;
}

*/


/*
int main()
{
 
    int x = 20;
    int y = 30;
    
    int gcd = 1;
    
    int mini = min(x,y);
    
    for(int i = mini; i >= 2; i--)
    {
        if(((x%i) == 0) && (y%i == 0))
        {
            gcd = i;
            break;
        }
    }
    cout << "GCD: " << gcd;
    
}

*/


/*
int main() {
    // Given 2 numbers, find their GCD/HCF
    
    int a = 8;
    int b = 12;
    int i,gcd=1;
    
    int mini = min(a,b);
    
    for(i=1; i<=mini ;i++)
    {
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    
    cout<<gcd<<endl;
    
    return 0;
}
*/


/*
int main() {
    // Given 2 numbers, find their GCD/HCF
    
    int a = 8;
    int b = 11;
    int i,gcd=1;
    
    for(i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    
    cout<<gcd<<endl;
    
    return 0;
}
*/
