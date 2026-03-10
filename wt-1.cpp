#include <bits/stdc++.h>
using namespace std;


HW - Try this out
int main() { 
    stack<int> s; 
    queue<int> q; 
 
    for(int i=1;i<=5;i++) { 
        if(i%2) s.push(i); 
        else q.push(i); 
    } 
 
    while(!s.empty()) { 
        q.push(s.top()); 
        s.pop(); 
    } 
 
    while(!q.empty()) { 
        cout << q.front() << " "; 
        q.pop(); 
    } 
}




int main() { 
    stack<int> s; 
    int i = 1; 
 
    while(i <= 4) { 
        s.push(i++ * 2 + 1); 
    } 
 
    int res = 0; 
    
    while(!s.empty()) 
    { 
        res += s.top() % 3; 
        s.pop(); 
    } 
    cout << res; 
}






/*

 
int main() {
    
    queue<int> q; 
    int x = 5; 
 
    while(x--) { 
        if(x % 2 == 0) 
            q.push(x); 
        else if(!q.empty()) 
            q.pop(); 
    } 
 
    cout << q.size(); 
} 

*/



/*

int main() 
{ 
    stack<int> s; 
    int a[2][3] = {
                    {1,2,3},
                    {4,5,6}}; 
 
    for(int i=0;i<2;i++) 
        for(int j=0;j<3;j++) 
        {
            cout << a[i][j] + i + j << endl;
            
            if((a[i][j] + i + j) % 3 == 0) 
                s.push(a[i][j]);
                
        }
        
    int sum = 0; 
    while(!s.empty()) 
    { 
        sum += s.top(); 
        s.pop(); 
    } 
    cout << sum; 
} 
*/



/*

// Find the output considering stack–string interaction. 


int main() { 
    stack<char> s; 
    string str = "aB3cD"; 
 
    for(char c : str) 
    { 
        if(isupper(c)) 
            s.push(c); 
        else if(isdigit(c) && !s.empty()) 
            s.pop(); 
    } 
 
    while(!s.empty()) { 
        cout << s.top(); 
        s.pop(); 
    } 
} 
*/



/*

// What is the output of the following program? 
 
int main() { 
    queue<int> q; 
    int i = 1; 
 
    do { 
        q.push(i * i); 
        i++; 
    } while(i <= 4); 
 
    while(q.size() > 2) 
        q.pop(); 
 
    cout << q.front() << " " << q.back(); 
} 

*/


/*

int main() { 
    stack<int> s; 
    int arr[] = {3, 1, 4, 1, 5}; 
 
    for(int i = 0; i < 5; i++) 
    { 
        if(arr[i] % 2) 
            s.push(arr[i]); 
        else if(!s.empty()) 
            s.pop(); 
    } 
 
    while(!s.empty()) { 
        cout << s.top() << " "; 
        s.pop(); 
    } 
}
*/



/*

// Consider the following highly tricky program using self-dependent indexing. 
// What is printed? 

 
int main() { 
    char s[] = "012345"; 
    int i = 0, sum = 0; 
 
    while (s[i]) { 
        sum += s[s[i] - '0'] - '0'; 
        i++;
        cout << sum << endl;
    } 
    cout << sum; 
} 
*/



/*

// Analyze the following program with reverse traversal and conditions. 
// Determine the output. 

int main() { 
    char s[] = "GATE"; 
    int i = 3, sum = 0; 
 
    while (i >= 0) { 
        if (i % 2 == 0) 
            sum += s[i]; 
        else 
            sum -= s[i]; 
        
        i--; 
        
        cout << sum << endl;
    } 
    cout << sum; 
} 

// dry run: G-A+T-E

*/

// Consider the following mixed conditional string program. 
// What is the output? 


/*
 
int main() { 
    char s[] = "a1b2C3"; 
    int i = 0, cnt = 0; 
 
    while (s[i]) 
    { 
        if (s[i] >= 'a' && s[i] <= 'z') 
            cnt++; 
        else if (s[i] >= '0' && s[i] <= '9') 
            cnt += (s[i] - '0'); 
        else 
            cnt += 2; 
            
        i++; 
        
        cout << cnt << endl;
    } 
    
    cout << cnt; 
} 

*/



/*

// Consider the following string modification using do–while. 
// What is the final output? 

int main() { 
    char s[] = "abcdef"; 
    int i = 0; 
 
    do { 
        if (s[i] % 2 == 0) 
            s[i] -= 1; 
        else 
            s[i] += 1; 
        i++; 
    } while (s[i] != 'e'); 
 
    cout << s; 
}

*/


/*

// Analyze the following program involving nested loops on strings. 
// Determine the output. 

int main() { 
    char s[] = "LEVEL"; 
    int count = 0; 
 
    for (int i = 0; s[i]; i++) { 
        for (int j = i + 1; s[j]; j++) { 
            
            if (s[i] == s[j]) 
                count += (j - i); 
        } 
        
        cout << count << endl;
    } 
    cout << count; 
} 
*/




/*

// Consider the following C++ program. 
// What will be printed after execution? 

 
int main() { 
    char s[] = "aB3dE"; 
    int i = 0, sum = 0; 
 
    while (s[i]) 
    { 
        if (s[i] >= 'a' && s[i] <= 'z') 
            sum += (s[i] - 'a'); 
        else if (s[i] >= 'A' && s[i] <= 'Z') 
            sum += (s[i] - 'A'); 
        else 
            sum += (s[i] - '0') * 2; 
            
        cout << sum << endl;
        i++; 
    } 
    cout << sum; 
} 
*/



/*

// Consider the following program mixing array indexing and operators. 
// What is the output? 

int main() { 
    
    int a[5] = {0, 1, 2, 3, 4}; 
    
    int sum = 0; 
 
    for (int i = 0; i < 5; i++) { 
        sum += a[a[i]]++; 
        
        cout << sum << endl;
    } 
    
    cout << sum; 
} 
*/



/*

// Analyze the following 2D array program with nested while loops. 
// Determine the output. 
 
 
int main() { 
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; 
    int i = 0, sum = 0; 
 
    while (i < 3) 
    { 
        int j = 0;
        
        while (j <= i) 
        { 
            sum += a[i][j]; 
            j++; 
        } 
        
        i++; 
    } 
    cout << sum; 
}
*/



/*

int main() 
{ 
    int a[6] = {1, 2, 3, 4, 5, 6}; 
    
    int i = 0, count = 0; 
 
    while (i < 6) 
    { 
        if (a[i] > 2 && a[i] % 2 == 0) 
            count++; 
        else if (a[i] < 5 || a[i] == 6) 
            count += 2; 
        i++; 
        
        cout << count << endl;
    } 
    cout << count; 
} 


*/

/*
// Examine the following mixed data-type program. 
// What value is printed? 

 
int main() 
{ 
    char a[5] = {'A', 'B', 'C', 'D', 'E'}; 
    int i = 0, sum = 0; 
 
    while (i < 5) { 
        
        cout << sum << endl;
        if (a[i] % 2 == 0) 
            sum += a[i]; 
        else 
            sum -= a[i]; 
         
        i++; 
    } 
    cout << sum; 
} 

*/




// Analyze the following program involving nested loops and a 2D array. 
// Determine the output. 



// Consider the following program using do–while, array mutation, and conditions. 
// What is the output? 

/* 
int main() { 
    int a[5] = {2, 4, 6, 8, 10}; 
    int i = 0, sum = 0; 
 
    do { 
        if (i % 2 == 0) 
            a[i] /= 2; 
            
        sum += a[i]; 
        i++; 
    } while (i < 5); 
 
    cout << sum; 
}
*/

// dry run: 1 + 4 + 3 + 8 + 5

/*
int main() 
{ 
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}}; 
    int sum = 0; 
 
    for (int i = 0; i < 2; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            if ((i + j) % 2 == 0) 
                sum += a[i][j]; 
            else 
                sum -= a[i][j]; 
        } 
    } 
    cout << sum; 
} 


// dry run: 1 + 3 + 5 - 2 - 4 -6

// 00-0 01-1 02-2
// 10-1 11-2 12-3
*/

/*

int main() { 
    int a[5] = {1, 2, 3, 4, 5}; 
    int i = 0, sum = 0; 
 
    while (i < 5) { 
        if (a[i] % 2 == 0) 
            sum += a[i]; 
        else 
            sum -= a[i]; 
            
        i++; 
    } 
    cout << sum; 
} 

// dry run: 0 -1 + 2 -3 +4 -5 = -3

*/

/*

int main() { 
    int i = 0, a[4] = {1, 3, 5, 7}; 
    int res = 0; 
 
    while (i < 4) { 
        res += a[i]; 
        cout << res << endl;
        if (res % 2 == 0) 
            i += 2; 
        else 
            i++; 
    } 
    cout << res; 
} 
*/


// dry run: 
// res = 1,i=1
// res = 4, i=3
// res = 11, i=4

/*

int main() { 
    int a[2][2] = {{1,2},{3,4}}; 
    int x = 0; 
 
    for(int i=0;i<2;i++) 
    { 
        for(int j=0;j<2;j++) 
        { 
            if(i == j) 
                x += a[i][j] * (i + 1); 
            else 
                x -= a[j][i]; 
                
            cout << x << endl;
        } 
    } 
    cout << x; 
} 
*/




/*

int main() { 
    int a[] = {2, 5, 8, 3}; 
    int ans = 0; 
 
    for(int i=0;i<4;i++) 
    { 
        if(a[i]-- > 4) 
            ans += a[i]; 
        else 
            ans -= ++a[i]; 
            
        cout << ans << endl;
    } 
 
    cout << ans; 
} 
*/

/*

int main() { 
    int a[3] = {1,2,3}; 
    int b[3] = {3,2,1}; 
    int sum = 0; 
 
    for(int i=0;i<3;i++) 
    { 
        for(int j=0;j<=i;j++) 
        { 
            cout << a[i] << " " << b[j] << endl;
            if(a[i] > b[j]) 
                sum += a[i] * b[j]; 
            else 
                sum -= a[j]; 
        } 
    } 
    cout << sum; 
}
*/


// What is printed by the program below? 
 
/*
int main() { 
    int a[] = {1, 3, 5, 7, 9}; 
    int i = 0, res = 0; 
 
    while(i < 5) { 
        if(i % 2 == 0) 
            res += a[i]; 
        else 
            res -= a[i]; 
            
        i++; 
    } 
 
    cout << res; 
} 
*/

// dry run: 1 - 3 + 5 -7 + 9 = 5

/*

int main() { 
    int arr[2][3] = {   {1,2,3},
                        {4,5,6}}; 
    
    int cnt = 0; 
 
    for(int i=0;i<2;i++) 
    { 
        for(int j=0;j<3;j++) 
        { 
            cout << arr[i][j] + i + j << " ";
            if((arr[i][j] + i + j) % 2) 
                cnt += arr[i][j]; 
            else 
                cnt -= arr[i][j]; 
                
            cout << "cnt = " << cnt << endl;
        } 
    } 
    cout << cnt; 
} 

*/



/*
// Determine the final output of the following code.

 
int main() { 
    int a[] = {2, 4, 6, 8, 10}; 
    int sum = 0; 
 
    for(int i = 0; i < 5; i++) 
    { 
        if(a[i] % 4 == 0) 
            sum += a[i] / 2; 
        else 
            sum += ++a[i]; 
    } 
 
    cout << sum; 
} 


dry run:
3 + 2 + 7 + 4 + 11 = 27
*/
