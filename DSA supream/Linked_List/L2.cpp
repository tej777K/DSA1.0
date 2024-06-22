//ON Doublly linked list 

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;


    Node(){
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data){
          this->data =data;
          this->next = NULL;
          this->prev = NULL;
    }
};

void printLL(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    
}

int findLength(Node* &head) {
  Node* temp = head;
  int len = 0;

  while(temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}

void InsertAtHead(Node* &head , Node* &tail , int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void InsertAtTail(Node* &head , Node* &tail , int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        head = newNode;
    }else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
        
    }
}

void InsertAtAnyPosition(Node* &head , Node* &tail , int data , int pos){
    int len = findLength(head);
     if(head == NULL) {
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
  }
    if(pos <= 1){
        InsertAtHead(head,tail,data);
    }else if(pos > len){
        InsertAtTail(head,tail,data);
    }else{
        Node* newNode = new Node(data);
        Node* prevNode = NULL;
        Node* currNode = head;

       while (pos != 1)
       {
        prevNode = currNode;
        currNode = currNode->next;
        pos--;
       }

       prevNode->next = newNode;
       newNode->prev = prevNode;
       newNode->next = currNode;
       currNode->prev = newNode;
       

    }
}

int main(){

Node* head =NULL;
Node* tail =NULL;

// InsertAtHead(head,tail,200);
// InsertAtHead(head,tail,300);
// InsertAtHead(head,tail,500);
// InsertAtHead(head,tail,600);
// InsertAtHead(head,tail,700);

InsertAtTail(head,tail,200);
InsertAtTail(head,tail,300);
InsertAtTail(head,tail,500);
InsertAtTail(head,tail,600);
InsertAtTail(head,tail,700);

printLL(head);
cout<<endl;

InsertAtAnyPosition(head,tail,2 , 1);
InsertAtAnyPosition(head,tail,3, 2);
InsertAtAnyPosition(head,tail,5 , 3);
InsertAtAnyPosition(head,tail,6, 4);
InsertAtAnyPosition(head,tail,7 ,5);
InsertAtAnyPosition(head,tail,10 ,11);


printLL(head);

}