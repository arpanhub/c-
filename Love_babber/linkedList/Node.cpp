// // ////-line 9 taversing to nodes using pointer and next;
// // //-line 54 adding new node
// //--line 78 insert node at starting
// //--line 118 adding new node in between
// // --line 210 reversing ll





// // //-------------------taversing to nodes using pointer and next;
// // #include <iostream>
// // using namespace std;
// // class Node{
// //     public:
// //     int data;
// //     Node* next;
// //     Node(int x)
// //     {
// //         data=x;
// //         next=NULL;
// //     }
// // };
// // void printNodelist(Node* &head)
// // {
// //     Node* temp = head;
// //     while(temp != NULL)
// //     {
// //         cout<<temp->data<<endl;
// //         temp= temp->next;
// //     }
// // }
// // int main()
// // {   
// //     Node* n1=new Node(12);
// //     Node* n2=new Node(13);
// //     Node* n3=new Node(14);
// //     Node* n4=new Node(15);
// //     Node* n5=new Node(16);
// //     n1->next=n2;
// //     n2->next=n3;
// //     n3->next=n4;
// //     n4->next=n5;
// //     Node* head = n1;
// //     printNodelist(head);
// //     return 0;
// // }








// // //-------------------------------adding new node
// // #include<iostream>
// // using namespace std;

// // class Node{
// // public:
// // int data;
// // Node* next;

// // Node(int x){
// // data = x;
// // next = NULL;
// // }

// // };






//-------------------------------insert node at starting
// // void insertNodeAtStarting(Node* &head, int x){
// // Node* newNode = new Node(x);
// // newNode->next = head;
// // head = newNode;
// // }

// // void printNodeList(Node* &head){
// // Node* temp = head;
// // while (temp !=NULL) {
// // cout<<temp->data<<endl;
// // temp = temp->next;
// // }
// // }
// // int main(){

// // Node* n1 = new Node(12);
// // Node* n2 = new Node(24);
// // Node* n3 = new Node(36);
// // Node* n4 = new Node(48);
// // Node* n5 = new Node(60);
// // n1->next = n2;
// // n2->next = n3;
// // n3->next = n4;
// // n4->next = n5;

// // Node* head = n1;
// // cout <<"befour adding of newnode : "<<endl;
// // printNodeList(head);
// // insertNodeAtStarting(head, 100);
// // cout<<"After adding of Newnode : "<<endl;
// // printNodeList(head);

// // return 0;
// // }








// //----------------------------adding new node in between
// // #include <iostream>
// // using namespace std;
// // class Node{
// //     public:
// //     int data;
// //     Node* next;
// //     Node(int x)
// //     {
// //         data=x;
// //         next=NULL;
// //     }
// // };
// // void printNodelist(Node* &head)
// // {
// //     Node* temp = head;
// //     while(temp != NULL)
// //     {
// //         cout<<temp->data<<endl;
// //         temp= temp->next;
// //     }
// // }
// // void insertatposition(Node* &head,int position,int value){
// //     Node* temp=head;
// //     for(int i=0;i<position-1;i++)
// //     {
// //         temp=temp->next;
// //     }
// //     Node* newNode = new Node(value);
// //     newNode->next = temp->next;
// //     temp->next =newNode;()
// // }
// // int main()
// // {   
// //     Node* n1=new Node(12);
// //     Node* n2=new Node(13);
// //     Node* n3=new Node(14);
// //     Node* n4=new Node(15);
// //     Node* n5=new Node(16);
// //     n1->next=n2;
// //     n2->next=n3;
// //     n3->next=n4;
// //     n4->next=n5;
// //     Node* head = n1;
// //    int position = 3;
// //     int value = 100;
// //     cout<<"before adding of Newnode : "<<endl;
// //     printNodelist(head);
// //     insertatposition(head , position,value);
// //     cout<<"after adding of Newnode : "<<endl;
// //     printNodelist(head);
// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int x)
//     {
//         data =x;
//         next=NULL;
//     }
// };
// void reverse(Node* &head){
//     Node* prev = NULL;
//     Node* p = NULL;
//     Node* prev = NULL;
    
// }
// void print (Node* &head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     Node* n1 = new Node(12);
//     Node* n2 = new Node(13);
//     Node* n3 = new Node(14);
//     Node* n4 = new Node(15);
//     Node* n5 = new Node(16);
// }





//---------------------------------------reversing ll
// #include <iostream>
// using namespace std;

// class Node {
// public:
// int data;
// Node* next;

// Node(int x) {
// data = x;
// next = NULL;
// }
// };

// void reverse(Node* &head) {
// Node* prev = NULL;
// Node* current = head;
// Node* nextNode = NULL;

// while (current != NULL) {
// nextNode = current->next;
// current->next = prev;
// prev = current;
// current = nextNode;
// }

// head = prev;
// }

// void print(Node* head) {
// Node* temp = head;
// while (temp != NULL) {
// cout << temp->data << " ";
// temp = temp->next;
// }
// cout << endl;
// }

// int main() {
// Node* n1 = new Node(12);
// Node* n2 = new Node(13);
// Node* n3 = new Node(14);
// Node* n4 = new Node(15);
// Node* n5 = new Node(16);

// n1->next = n2;
// n2->next = n3;
// n3->next = n4;
// n4->next = n5;

// Node* head = n1;

// cout << "Original linked list: ";
// print(head);

// reverse(head);

// cout << "Reversed linked list: ";
// print(head);

// return 0;
// }


#include <iostream>
using namespace std;
class Node{
    public:
    Node* prev;
    int data;
    Node* next;
    
    Node(int x){
        prev = NULL;
        data = x;
        next = NULL;
    }
};
void printNodelist(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data;
        temp= temp->next;
    }
}
void del(Node* head,int n){
        Node* temp = head;
    for(int i=0; i<n-2; i++)
    temp = temp->next;
    temp->next = temp->next->next;
}
int main() {
	Node* n1 = new Node(10);
	Node* n2 = new Node(20);
	Node* n3 = new Node(30);
	Node* n4 = new Node(40);
	Node* n5 = new Node(50);
	Node* n6 = new Node(60);
	n1->next = n2;
	n2->prev = n1;
	n2->next = n3;
	n3->prev = n2;
	n3->next = n4;
	n4->prev = n3;
	n4->next = n5;
	n5->prev = n4;
	n5->next = n6;
	n6->prev = n5;
	Node* head = n1;
	Node* temp = n1;
	while(temp!= NULL){
	    cout<<temp->data<<" ";
	    temp = temp->next;
	}
	int n;
	cout<<"Enter the Position you waant to delete: ";
	cin>>n;
	del(head,n);
	printNodelist(head);
	return 0;
}