//line->2------------------Stack implementation using array-------------------
//line->86------------------Design o data structure. which represents two stocks using only one array common for both-------------------
//line->187--------------------------Implement stack in arra using linke list



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
// #include <iostream>
// #include <stack>
// using namespace std;
// class TwoStack{
//     int *arr;
//     int top1;
//     int top2;
//     int size;
//     //inititlaiseing two stack
//     public:
//     TwoStack(int size){
//         this-> size= size;
//         top1= -1;
//         top2= size;
//         arr = new int[size];
//     }
//     void push1(int num){
//         //atleaste ine empty space is avalbale 
//         if(top2-top1 > 1){
//             top1++;
//             arr[top1]=num;
//         }
//         else{
//             cout<<"bhai stack is full:overflow"<<endl;
//         }
//     }
//     void push2(int num){
//         //atleaste ine empty space is avalbale 
//         if(top2-top1 > 1){
//             top2--;
//             arr[top2]=num;
//         }
//         else{
//             cout<<"bhai stack is full:overflow"<<endl;
//         }
//     }
//     int pop1(){
//         if(top1>-1){
//             int ans=arr[top1];
//             top1--;
//             return ans;
//         }
//         else{
//             return -1;
//         }        
//     }
//     int pop2(){
//         if(top2< size){
//             int ans=arr[top1];
//             top2++;
//             return ans;
                
//         }
//         else{
//             return -1;
//         }        
//     }
//     int peek1() {
//         if (top1 > -1) {
//             return arr[top1];
//         }
//         else {
//             cout << "Stack 1 is empty" << endl;
//             return -1;
//         }
//     }

//     int peek2() {
//         if (top2 < size) {
//             return arr[top2];
//         }
//         else {
//             cout << "Stack 2 is empty\n";
//             return -1;
//         }
//     }
//     void display(){
//         int start=top1;
//         int end=top2;
       
// }};
// int main(){
//     TwoStack st(5);
//     st.push1(1);
//     st.push2(5);
//     st.push2(4);
//     st.push2(5);
//     st.push1(3);
//     st.push1(6);
//     cout << "Peek Stack 1: " << st.peek1() << endl;
//     cout << "Peek Stack 2: " << st.peek2() << endl;
//     return 0;
// }


//Implement stack in arra using linke list
// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node* next;
// };

// void push(struct Node** top, int value)
// {
//     Node* newNode = new Node();
//     newNode->data = value;
//     newNode->next = *top;
//     *top = newNode;
// }

// void pop(struct Node** top)
// {
//     if (*top == NULL)
//     {
//         cout << "The stack is empty";
//         return;
//     }
//     struct Node* temp = *top;
//     *top = temp->next;
//     free(temp); // Corrected from free(top)
// }

// void display(struct Node* top)
// {
//     struct Node* temp = top;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     struct Node* top = NULL;
//     while (true)
//     {
//         int choice, value;
//         cin >> choice;
//         if (choice == 1)
//         {
//             cin >> value;
//             push(&top, value);
//         }
//         else if (choice == 2)
//         {
//             pop(&top);
//         }
//         else if (choice == 3)
//         {
//             display(top);
//         }
//         else
//         {
//             break; // Changed from exit(0)
//         }
//     }
//     return 0;
// }

//Stack program to The first line contains an integer n, representing the number of elements Lala wants to push onto the stack.
#include <iostream>
using namespace std;
class Stack{
    public:
    int arr[15];
    int top;
    Stack(){
        top=-1;
    }
    void push(int x){
        if(top >=14){
            cout<<"stack Overflow"<<endl;
        }
        else
        {
            arr[++top]=x;
            top++;
        }
    }
    void pop(int &x){
        if(top <0){
            cout<<"stack underflow"<<endl;
        }
        else
        {
            x= arr[top--]=x;
            
        }
    }
    void display(){
        for(int i =0 ;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    bool isEmpty(){
        return top < 0;
    }

};
int main(){
    Stack st;
    int n,x;
    cin>> n;
    for (int i= 0; i<n;i++){
        cin>>x;
        st.push(x);
    }
    st.display();
    if(!st.isEmpty()){
        st.pop(x);
        cout<<"The top element is:"<<x<<endl;;
        st.display();
    }
    else{
        cout<<"stack is empty";
    }
    return 0;

}