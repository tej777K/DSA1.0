//pluse 1 to LL

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data ){
        this->data = data ;
        this->next = NULL;
    }
};

Node* rev(Node* head){
    Node* curr =  head;
    Node* prev = NULL;

    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr ;
        curr = nextNode;
    }

    return prev;
}

void add1ToLL(Node* &head){
   head =  rev(head);
   int carry = 1;

   Node* temp = head;
   Node* prev = NULL;

   while(temp != NULL){
    int totalsum = temp->data + carry;
    int digit = totalsum%10;
    temp->data = digit;
    // cout<<temp->data;
    carry = totalsum / 10;
    // cout<<endl;
    // cout<<carry<<endl;
    prev = temp;
    temp = temp->next;

    if(carry == 0){
        break;
    }
   }

    if(carry != 0){
       Node* newNode = new Node(carry);
       prev->next = newNode;
       prev = newNode;
    }

head = rev(head);
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
  
}

int main(){
 
 Node* a1 = new Node(1);
 Node* a2 = new Node(5);
 Node* a3 = new Node(9);


 a1->next = a2;
 a2->next = a3 ;
// a3->next = a4;
// a4->next = a5;

cout<<"Before REV: ";
 printList(a1);

cout<<endl;

add1ToLL(a1);

 cout << "After adding 1: ";
    printList(a1);

    while (a1 != NULL) {
        Node* temp = a1;
        a1 = a1->next;
        delete temp;
    }

    return 0;
  
}