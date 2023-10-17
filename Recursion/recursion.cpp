//recursion programs
//--line-6--------------------------------sum using recursion-------------------
//--line 24-------------------------------factorial-----------------------------
//--line 41-------------------------------fibonacci series----------------------
//--LINE 67-------------------------------sum of array using recursion----------
// -line 134------------------------------find char in string using rekrusion---
// #include <iostream>
// using namespace std;
// int sumNumber(int);
// int sumNumber(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//     return n + sumNumber(n-1);
// }  
// int main()
// {
//     int n=3;
//     int sum=sumNumber(n);
//     cout<<sum;
//     return 0;
//  }
// // ----------------------------------------------factorial------------------------
// int fact(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     return n * fact(n-1);
// }
// int main()
// {
//     int n=3;
//     int factorial=fact(n);
//     cout<<factorial;
// }
//-----------------------------------------fibonacci series---------
// #include <iostream>
// using namespace std;
// int fibo(int);
// int fibo(int n)
//     {
//         if(n==0 || n==1)
//         {
//         return n;
//         }
//         else
//         {
//          return fibo(n-1) + fibo(n-2);
//         }
         
//     }
// int main()
// {   
//     int n;
//     cout<<"Enter the number of elements in fibonacci series: ";
//     cin>> n;
//     for(int i=0;i<n;i++)
//     {
//         int k=fibo(i);
//         cout<<k;
//     }

// }
//------------------------------------------sum of array using recursion--------
// #include <iostream>
// using namespace std;
// int arraysum(int,int);
// int arraysum(int* arr,int n)
//     {
//         if(n==0)
//         {
//         return 0;
//         }
//         else
//         {
//          return arr[n-1] + arraysum(arr,(n-1));
//         }
         
//     }
// int main()
// {   
//     int n;
//     cout<<"Enter the number of elements in array series: ";
//     cin>> n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//        cin>>arr[i];
//     }
//     int sum=arraysum(arr,n);
//     cout<<"Sum is : "<<sum;

// }
//----------------------------finding element in array using recursion--------
// #include <iostream>
// using namespace std;
// int check(int,int);
// int check(int* arr,int n,int t,int i){
//         if(i==(n-1)){
//         return -1;
//         }
//         else if(t==arr[i]){
//          return i;
//         }
//         else
//         return check(arr,n-1,t,++i);
//     }
// int main(){   
//     int n;
//     cout<<"Enter the number of elements in array series: ";
//     cin>> n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//        cin>>arr[i];
//     }
//     cout<<"enter the target number: ";
//     int t;
//     cin>>t;
//     int i=0;
//     int result=check(arr,n,t,i);
//     if(result== -1){
//         cout<<"not present"<<endl;
//     }
//     else{
//     cout<<"yes present at "<<result+1;
//     }
// }
// -----------------------------------------find char in string using rekrusion
#include <iostream>
using namespace std;
int check(int,int);
int check(string s1,char c,int i,int n){
        if(i==(n-1)){
        return -1;
        }
        else if(tolower(c)== s1[i]){
         return i;
        }
        else
        return check(s1,c,++i,n-1);
    }
int main(){   
    string s1;
    cout<<"Enter the string ";
    cin>> s1;
    int n=s1.length();
    char c; 
    cout<<"enter character to check: ";
    cin>>c;
    int i=0;
    int result=check(s1,c,i,n);
    if(result== -1){
        cout<<"not present"<<endl;
    }
    else{
    cout<<"yes present at "<<result+1;
    }
}