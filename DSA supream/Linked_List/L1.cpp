#include<iostream>
using namespace std;

class Node{
public:
   int data;
   Node* next;

  Node(){
    cout<<"I'm insid etge default constructor"<<endl; 
    this->data = data;
    this->next = NULL;
  }
  
  Node(int data){
    this->data = data;
    this->next = NULL;
  }



};

int findLength(Node* &head ) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp->next;
                len++;
        }
        return len;
}

void InsertAtHead(Node* &head , Node* &tail ,  int data){
   if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
   }else{
    //1. Create a Node 
    Node* newNode = new Node(data);
    //2. POint temp->necxt to head; 
    newNode->next = head;
    //3.actuallt place the head to the newNode node 
    head = newNode;
   }


}

void InsertAtTail(Node* &head , Node* &tail , int data){
      if(tail == NULL){
    cout<<"hey"<<endl;
    Node* newNode = new Node(data);
    tail = newNode;
    head = newNode;
      }else{

        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
      }
}

void InsertAtAnyPos(Node* &head , Node* &tail , int data ,int pos){
    int len = findLength(head);
    if(pos == 1){
        InsertAtHead(head,tail,data);
        return;
    }
    else if(pos > len){
        InsertAtTail(head,tail,data);
        return;
    }else{
        Node* curr = head;
        Node* prev = NULL;
        Node* newNode = new Node(data);

        while (pos != 1)
        {
            prev = curr;
            curr = curr->next;
            pos--;
        }
        
        prev->next = newNode;
        newNode->next = curr;


    }
}



void PrintLL(Node* head){
  Node* temp;
    temp = head;

    while (temp != NULL)
    {
        cout<< temp->data<< "-> ";
        temp = temp->next;
    }
    

}

int main(){

// Node* first = new Node(10);
// Node* second = new Node(20);
// Node* third = new Node(30);
// Node* fourth = new Node(40);
// Node* fifth = new Node(50);

// first->next = second;
// second->next = third;
// third->next = fourth;
// fourth->next = fifth;

//Starting value of head and tail in LL:

Node* head = NULL;
Node* tail = NULL;


// InsertAtHead(head , tail , 200);
// InsertAtHead(head , tail , 300);
// InsertAtHead(head , tail , 400);
// InsertAtHead(head , tail , 500);
// InsertAtHead(head , tail , 600);
// InsertAtHead(head , tail , 700);
// InsertAtHead(head , tail , 800);


// InsertAtTail(head , tail , 200);
// InsertAtTail(head , tail , 300);
// InsertAtTail(head , tail , 400);
// InsertAtTail(head , tail , 500);
// InsertAtTail(head , tail , 600);
// InsertAtTail(head , tail , 700);
// InsertAtTail(head , tail , 800);

InsertAtAnyPos(head,tail,800,2);
InsertAtAnyPos(head,tail,700,2);
InsertAtAnyPos(head,tail,600,1);
InsertAtAnyPos(head,tail,500,2);
InsertAtAnyPos(head,tail,900,89);
InsertAtAnyPos(head,tail,1000,5);



PrintLL(head);

return 0;

}
