//line->2------------------Stack implementation using array-------------------
// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack{ 
//     public:
//         int *arr;
//         int top;
//         int size;
//     Stack(int size){
//         this-> size=size;
//         arr= new int[size];
//         top = -1;
//     }
//     void push(int element){
//         if(size - top>1){
//             top++;
//             arr[top]=element;
//         }
//         else{
//             cout<<"Stack Overflow"<<endl;
//             }
//     }

//     void pop(){
//         if(top >= 0){
//                 top--;
//         }
//         else{
//             cout<<"stack underflow"<<endl;

//         }
//     }
//     int peek(){
//         if(top > -1 && top<size){
//             return arr[top];
//         }
//         else{
//             cout<<"Stack is empty:)"<<endl;
//             return -1;
//         }
//     }

//     bool isEmpty(){
//         if(top==-1){
//             return true;

//         }
//         else
//         return false;

//     }

// };
// int main(){
//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(3);
//     st.push(3);
//     cout<<st.peek()<<endl;
//     st.pop();
//      cout<<st.peek()<<endl;
//      st.pop();
//      cout<<st.peek()<<endl;
//      st.pop();
//      st.pop();
//     cout<<st.peek()<<endl;
//     if(st.isEmpty()){
//         cout<<"stack is empty broski";
//     }
//     else{
//         cout<<"stack is not empty broski";
//     }
// }
//------------------------------------------------------------------------------






//Design o data structure. which represents two stocks using only one array common for both
#include <iostream>
#include <stack>
using namespace std;
class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    //inititlaiseing two stack
    public:
    TwoStack(int size){
        this-> size= size;
        top1= -1;
        top2= size;
        arr = new int[size];
    }
    void push1(int num){
        //atleaste ine empty space is avalbale 
        if(top2-top1 > 1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"bhai stack is full:overflow"<<endl;
        }
    }
    void push2(int num){
        //atleaste ine empty space is avalbale 
        if(top2-top1 > 1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"bhai stack is full:overflow"<<endl;
        }
    }
    int pop1(){
        if(top1>-1){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }        
    }
    int pop2(){
        if(top2< size){
            int ans=arr[top1];
            top2++;
            return ans;
                
        }
        else{
            return -1;
        }        
    }
    int peek1() {
        if (top1 > -1) {
            return arr[top1];
        }
        else {
            cout << "Stack 1 is empty" << endl;
            return -1;
        }
    }

    int peek2() {
        if (top2 < size) {
            return arr[top2];
        }
        else {
            cout << "Stack 2 is empty\n";
            return -1;
        }
    }
    void display(){
        int start=top1;
        int end=top2;
       
}};
int main(){
    TwoStack st(5);
    st.push1(1);
    st.push2(5);
    st.push2(4);
    st.push2(5);
    st.push1(3);
    st.push1(6);
    cout << "Peek Stack 1: " << st.peek1() << endl;
    cout << "Peek Stack 2: " << st.peek2() << endl;
    return 0;
}


//Implement stack in arra using linke list