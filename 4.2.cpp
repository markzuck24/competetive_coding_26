#include <bits/stdc++.h>
using namespace std;



/*

Sum of all Subarrays

Given an integer array arr[], compute the sum of all possible sub-arrays of the array. A sub-array is a contiguous part of the array.


1- Brute force code.

Input: arr[] = [1, 4, 5]
op: 34

Explanation:
1 --> 1
1,4 --> 5
1,4,5 --> 10

4 --> 4
4,5 --> 9

5 --> 5


ans = 34

*/


//Brute force: O(n^2)


int main() {
    int arr[] = {1,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int totalSum = 0;

    for(int i = 0; i < n; i++) {
    int currSum = 0;
    
    for(int j = i; j < n; j++){
        currSum += arr[j];
        totalSum += currSum;
       }
   }
    cout << totalSum;
    
    return 0;
}



/*
int main()
{
    int arr[]={1,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
        }
    }
    cout<<sum;
}
*/


/*
int main()
{
    int arr[] = {1,4,5};
    
    int n = sizeof(arr)/sizeof(arr[0]);
    int totalSum = 0;
    
    for (int i=0;i<n;i++)
    {
        int currentSum = 0;
        
        for (int j=i;j<n;j++)
        {
            currentSum+= arr[j];
            totalSum+= currentSum;
            
            cout << "curr: " << currentSum << " -- total_sum = " << totalSum << endl; 
        }
        
         
    }
    cout<<"Sum of all subarrays=" <<totalSum<<endl;
}

*/

/*
    Create a realistic example of Queue of strings.
    use the push, pop, front, back, size and empty functions in this example.
   
   
   
int main()
{
    queue<string>bankline;

    bankline.push("neha");
    bankline.push("Pranav");
    bankline.push("Palak");
    bankline.push("Piyush");
    bankline.push("Mayank");
    bankline.push("Nidhi");

    cout<<"First person "<<bankline.front()<<endl;
    cout<<"Last person "<<bankline.back()<<endl;

    bankline.pop();
    bankline.pop();
    bankline.pop();

    bankline.front()="nilesh";
    cout<<"First person "<<bankline.front()<<endl;
    
    cout<<"size of bankline "<<bankline.size()<<endl;

    if(bankline.empty()){
        cout<<"No person left"<<endl;
    }
    else{
        cout<<"people are left"<<endl;
    }

    return 0;

}

   
#include <bits/stdc++.h>
using namespace std;

queue<string>process_Id;
queue<float>process_arrivalTime;
    

void process_register(string PID,float arrivaltime)
{
    process_Id.push(PID);
    process_arrivalTime.push(arrivaltime);
}

void FCFS()
{
    cout<<"Process_executed:"<<endl;
    while(process_Id.size() !=0)
    {
        cout<<process_Id.front()<<endl;
        process_Id.pop();
        // process_arrivalTime.pop();
    }
}

int main()
{
  process_register("P0",0.0);
  process_register("P1",1.2);
  process_register("P2",2.0);
  
  FCFS();
  
}


 

int main()
{
    queue<string> food_order;
    food_order.push("Pizza");
    food_order.push("Burger");
    food_order.push("Pasta");
    food_order.push("Noodles");

    cout << "No of orders: " << food_order.size() << endl;
    cout << "Current order: " << food_order.front() << endl;
    
    food_order.pop();
    
    cout << "After serving first order, " << endl;
    cout << "No of orders: " << food_order.size() << endl;
    cout << "Current order: " << food_order.front() << endl;
    cout << "Current Customer changed their order" << endl;
    food_order.front() = "Momos";
    cout << "Modified order: " << food_order.front() << endl;

    cout << "Last order: " << food_order.back() << endl;

    cout << "After serving second order, No of orders: " << food_order.size() << endl;
    cout << "After serving all orders: " << endl;
    while (food_order.empty() != 1)
    {
        food_order.pop();
    }
    cout << "No of orders: " << food_order.size() << endl;
}



int main() {
    queue <string> photo_delete;
    
    if(photo_delete.empty()){
        cout << "No photo selected for deletion." << endl;
    }

    photo_delete.push("img_1.jpg");
    photo_delete.push("img_2.jpg");
    photo_delete.push("img_3.jpg");

    cout << "Total photos: " << photo_delete.size() << endl;
    cout << "Last selected: " << photo_delete.back() << endl;
    cout << "Next delete: " << photo_delete.front() << endl;

    cout << "Deleting photo: " << photo_delete.front() << endl;
    photo_delete.pop();

    cout << "Now next photo: " << photo_delete.front() << endl;
    cout << "Remaining photos: " << photo_delete.size() << endl;
    
    return 0;
}


int main()
{
    queue<string> opdQueue;
    opdQueue.push("Ashish");
    opdQueue.push("Priya");
    opdQueue.push("Rahul");
    cout<<"Patient being consulted:"<<opdQueue.front()<<endl;
    cout<<"Last patient waiting:"<<opdQueue.back()<<endl;
    cout<<"Total patients waiting:"<<opdQueue.size()<<endl;
    
    
    opdQueue.pop();
    
    cout<<"Next patient to be consulted:"<<opdQueue.front()<< endl;
    
    if(opdQueue.empty())
    {
        cout << "No patients waiting" << endl;
    } 
    else
    {
        cout << "Patients are still waiting" << endl;
    }
}
    
*/

//Queues

/*

int main()
{
    queue <int > num;
    num.push(5);
    num.push(3);
    num.push(2);
    num.push(4);
    
    cout << num.front() << endl;
    cout << num.back() << endl;
    
    num.front() = 10;
    
    cout << num.front() << endl;
    
    num.back() = 50;
    
    cout << num.back() << endl;
    
    num.pop();
    
    cout << num.front() << endl;
    
    cout << num.size() << endl;
    cout << num.empty() << endl;
    
}
*/

/*
    Create a realistic example of stack of strings.
    use the push, pop, top, size and empty functions in this example.
    */
    
    
/*

int main() {
    stack <string> attendance;

    attendance.push("Anchal");
    attendance.push("Nidhi");
    attendance.push("Payal");
    attendance.push("Priya");
    
    cout << "last :" << attendance.top() << endl;
    cout << "Wrong person entered (removed)" << endl;
    attendance.pop();

    cout << "Total student present :" << attendance.size() << endl;
    cout << "New Student:";
    attendance.push("Nancy");
    cout << attendance.top();
    
    return 0;
}



int main()
{

    stack<string> plates;
    plates.push("Dinner Plate");
    plates.push("Salad Plate");
    plates.push("Dessert Plate");
    cout<<plates.top()<<endl;
    cout<<plates.size()<< endl;
    plates.pop();
    cout<< plates.top() << endl;
    if(plates.empty())
    {
        cout<<"no plate left"<<endl;
    }
    else{
        cout<<"Plates available"<< endl;
    }
    
}
    
    
    
int main()
{
    stack<string> browser_history;
    browser_history.push("www.google.com");
    browser_history.push("www.instagram.com");
    browser_history.push("www.pw.live");
    cout << "No of opened pages: " << browser_history.size() << endl;
    cout << "Current page: " << browser_history.top() << endl;
    browser_history.pop();
    cout << "After closing current page: " << browser_history.size() << endl;
    cout << "Current page: " << browser_history.top() << endl;
    cout << "Is your history clear? " << browser_history.empty() << endl;
    
}


int main() {
    
    stack<int> st;
    
    st.push(2);
    st.push(1);
    st.push(5);
    st.push(4);
    
    
    cout << st.top() << endl;
    cout << st.top() << endl;
    
    st.pop();
    
    cout << "size: " << st.size() << endl;
    
    cout << st.top() << endl;
    st.push(10);
    
    cout << st.top() << endl;
    
    cout << "size: " << st.size() << endl;
    
    cout << st.empty() << endl;

}
*/
