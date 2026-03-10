#include <bits/stdc++.h>
using namespace std;



HW-1

int main() {
 string s = "abcdef";
 string t = "";
 for(int i = 0; i < s.length(); i++) 
 {
     if(i % 3 == 0)
        t += s[i];
     else if(i % 2 == 0)
        t += '*';
 }
 cout << t;
}



HW-2
int main() {
 int i = 1, sum = 0;
 while(i <= 10) {
     if(i % 3 == 0) {
        i += 2;
        continue;
     }
     
     sum += i;
     i++;
 }
 cout << sum;
}



HW-3
int main() 
{
 int x = 3, y = 0;
 for(int i = 1; i <= 4; i++) {
     if(x % 2 == 0)
        y += x;
     else
        y -= i;
        
    x++;
    }
 cout << y;
}



HW-4
int main() {
 string s = "Level";
 int count = 0;
 for(int i = 0; i < s.length(); i++) 
 {
 if(s[i] >= 'A' && s[i] <= 'Z')
    count += i;
 else
    count -= 1;
 }
 
 cout << count;
 return 0;
}



HW-5

int main() {
 int n = 12;
 int sum = 0;
 for(int i = 1; i <= n; i++) {
     if(n % i == 0) 
    {
     if(i % 2 == 0)
        sum += i;
     else
        sum -= 1;
    }
 }
 cout << sum;
 return 0;
}


/*

int main() {
 bool flag = true;
 
 int count = 0;
 
 for(int i = 1; i <= 5; i++) 
 {
    flag = !flag;
    
    cout << flag << endl;    
    if(flag) 
        count += i;
    else 
        count -= 1;
        

 }
 
 cout << count;

    
}
*/



/*

int main() {
 int x = 10;
 int sum = 0;
 
 for(int i = 0; i < 3; i++) 
 {
    int x = i * 2;
    sum += x;
 }
 
 sum += x;
 cout << sum;

    
}
*/





/*

int main() 
{
 string s = "abcabc";
 int score = 0;
 for(int i = s.length()-1; i >= 0; i--) {
     if(s[i] == 'a')
        score += i;
     else if(s[i] == 'b')
        score -= i;
     else
        score += 1;
 }
 cout << score;
}
*/


/*

int main() {
 string s = "AZaz";
 int sum = 0;
 
 for(int i = 0; i < s.length(); i++) 
 {
     if(i % 2 == 0)
        sum += s[i];
    else
        sum -= s[i];
 }
 
 cout << sum;
}
*/




/*
int main() {
 int count = 0;
 for(int i = 1; i <= 3; i++)
    for(int j = 1; j <= 3; j++)
        for(int k = 1; k <= 3; k++)
            if(i + j + k == 5)
                count++;
 cout << count;
}
*/


/*

int main() {
 string s = "abba";
 int result = 0;
 for(int i = 0; i < s.length(); i++) 
 {
     for(int j = s.length()-1; j >= 0; j--) 
     {
        if(i == j) 
            continue;
            
        if(s[i] == s[j]) 
            result++;
     }
 }
 cout << result;
}

*/



/*

int main() {
 string s = "abcde";
 int count = 0;
 
 for(int i = 0; i < s.length(); i++) 
 {
     if(i % 2 == 0)
        s[i] = s[i] + 1;
     
     if(s[i] > 'c')
        count += i;
     else
        count -= 1;
 }
 cout << count;
}
*/


/*

int main() {
 int sum = 0;
 for(int i = 1; i <= 4; i++) 
 {
     for(int j = 1; j <= 5; j++) 
     {
     if(j == 3) 
        continue;
     if(i * j > 8) 
        break;
        
        
     sum += i + j;
     
     }
 }
 cout << sum;
}
*/


/*
int main() {
 string s = "abacaba";
 int result = 0;
 
 for(int i = 0; i < s.length(); i++) 
 {
     int freq = 0;
     
     for(int j = 0; j < s.length(); j++)
         if(s[i] == s[j]) 
            freq++;
        if(freq % 2 == 0)
            result += i * freq;
        else
            result -= freq;
            
        cout << freq << endl;
 }
 cout << result;
}
*/



/*

int main() {
 int count = 0;
 for(int i = 1; i <= 4; i++) 
 {
     for(int j = 1; j <= 4; j++) {
        
        if(i + j == 5)
            break;
     
     count++;
    }
 }
 cout << count;

    
}
*/




/*

int main() {
 string s = "abcXYZ", t = "";
 for(int i = 0; i < s.length(); i++) 
 {
     
 if(s[i] >= 'a' && s[i] <= 'z')
    t += s[i] - 32;
 else
    t += s[i] + 32;
 }
 
 cout << t;
}
*/



/*

int main() {
 int sum = 0;
 for(int i = 1; i <= 6; i++) 
 {
     if(i % 2 == 0) 
        continue;
        
     for(int j = 1; j <= i; j++)
        sum += j;
        
    cout << sum << endl;
 }
 
 cout << sum;

    
}
*/




/*
int main() {
 string s = "coding", t = "";
 
 for(int i = s.length()-1; i >= 0; i--)
 
 if(i % 2 == 0) 
    t += s[i];
 
 cout << t;
}

dry run: 
i = 5

4
2
0
*/


/*

int main() {
 int sum = 0;
 for(int i = 1; i <= 5; i++)
     for(int j = 1; j <= 5; j++) {
         
         cout << i*j << endl;
     if(i * j > 6) 
        break;
     
     sum += j;
 }
 cout << sum;
}
*/



/*

int main() {
 string s = "AbCdEf";
 int score = 0;
 
 for(int i = 0; i < s.length(); i++) 
 {
     if(isupper(s[i])) 
        score += i;
     else 
        score -= i;
        
     if(i % 2 == 0) 
        score += 1;
        
    cout << score << endl;
        
 }
 cout << score;
}
*/



/*
int main() {
 int n = 4, sum = 0;
 
 for(int i = 1; i <= n; i++)
     for(int j = 1; j <= n; j++)
         if(i == j || i + j == n + 1)
            sum += i;
            
            
 
 cout << sum;

    
}
*/

// dry run:

/*

int main() {
 int x = 5, y = 10, z = 0;
 
 while(x < y) 
 {
     if(x % 2 == 0)
        z += x;
     else
        z -= x;
     
     cout << z << endl;
     x++;
 }
 cout << z;
}
*/



/*

int main() {
 string s = "abbaac";
 int result = 0;
 
 for(int i = 0; i < s.length(); i++) 
 {
     int count = 0;
     
     
     for(int j = 0; j < s.length(); j++)
     if(s[i] == s[j]) 
        count++;
     if(count % 2 == 0)
        result += i;
     else
        result -= i;
    
    cout << count << " ";
 }
 cout << result;
}
*/



/*
int main() {
 int n = 7, sum = 0;
 for(int i = 1; i <= n; i++) 
 {
     for(int j = 1; j <= i; j++) 
     {
        //  cout << (i + j) << endl;
         
         if((i + j) % 2 == 0)
             sum += j;
         else
            sum -= 1;
     }
 }
 cout << sum;
}
*/



/*
int main() 
{
    
 string s = "aAbBcCaaBB";
 int count = 0;
 
 for(int i = 0; i < s.length(); i++) 
 {
     if(s[i] >= 'a' && s[i] <= 'z')
        count += 2;
     else if(s[i] >= 'A' && s[i] <= 'Z')
        count += 1;
     
     if(i % 3 == 0)
        count -= 1;
        
    cout << count << endl;
 }
 
 cout << count;

}

// dry run: 
*/

