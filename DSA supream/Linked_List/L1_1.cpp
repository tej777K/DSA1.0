#include<iostream>
using namespace std;

 class Node{
    public:
       int data ;
       Node* next;

       Node(){
cout<<"Inside the default constructor"<<endl;
    this->data = data ;
    this->next =  NULL;
       }
    Node(int data){
    this->data = data ;
    this->next =  NULL;
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

 //INsert at the head

 void InsertAtHead(Node* &head , Node* &tail ,int data){
         if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
         }else{
            Node *newNode = new Node(data);
            newNode->next = head;
            head = newNode;
         }
 }

 void InsertAtTail(Node* &head , Node* & tail , int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
 }

 void InsertAtAnyPos(Node* &head , Node* &tail , int data , int pos){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
            int len = findLength(head);

            if(pos <= 1){
                InsertAtHead(head,tail,data);
            }else if(pos > len){
                InsertAtTail(head,tail,data);
            }
            else{
                    Node* newNode = new Node(data);
                   Node* curr = head;
                   Node* prev = NULL;
                   

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
 }

 //Deleting the Node 

 void deleteNode(Node* &head , Node* &tail , int pos){
    int len = findLength(head);
    if(head == NULL){
        cout<<"LL is empty  , nothing to delete"<<endl;
        return;
    }
    else if(head == tail) {
    //single element
    Node* temp = head;
    delete temp;
    head = NULL;
    tail = NULL;
    return;
  }
    else if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else if(pos == len){
        Node* prev = head;
         while(prev->next != tail){
            prev = prev->next ;
         
         }
         prev->next = NULL;
         delete tail;
         tail = prev;
    }else{
        Node* curr = head;
        Node* prev = NULL;

        while (pos != 1)
        {
             prev = curr;
             curr = curr->next;
             pos--;
        }

        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        
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

    // Node *n1 = new Node(21);
    // Node *n2 = new Node(22);
    // Node *n3 = new Node(23);
    // Node *n4 = new Node(24);

    // n1->next = n2;
    // n2->next = n3;
    // n3->next = n4;

    // PrintLL(n1);
    // cout<<endl;


    Node* head = NULL;
    Node* tail = NULL;


InsertAtHead(head , tail , 200);
// InsertAtHead(head , tail , 300);
// InsertAtHead(head , tail , 400);
// InsertAtHead(head , tail , 500);


// InsertAtTail(head , tail , 200);
// InsertAtTail(head , tail , 300);
// InsertAtTail(head , tail , 400);
// InsertAtTail(head , tail , 500);



// InsertAtTail(head , tail , 200);
// InsertAtTail(head , tail , 300);
// InsertAtTail(head , tail , 400);
// InsertAtTail(head , tail , 500);


PrintLL(head);

cout<<endl;
// InsertAtAnyPos(head , tail , 200 , 2);
// InsertAtAnyPos(head , tail , 300 , 2);
// InsertAtAnyPos(head , tail , 400 , 0);
// InsertAtAnyPos(head , tail , 500 , 43);
// InsertAtAnyPos(head , tail , 50 , 4);
// InsertAtAnyPos(head , tail , 520 , 9);

//PrintLL(head);

        cout << endl;
        cout << "Before-> Length of LL is: " << findLength(head) << endl;
        cout << "before -> head -> " << head -> data << endl;
        cout << "Before tail-> " << tail->data << endl;
        deleteNode(head, tail, 1);
        cout << "After Length of LL is: " << findLength(head) << endl;
        cout << "After tail-=> << " << tail->data << endl;
        cout << "After head-=> << " << head->data << endl;


    
    return 0;
}