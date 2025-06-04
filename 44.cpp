#include <iostream>
using namespace std;

// //Singly Linked list
// class Node{
//     public:
//     int data;
//     Node* next;
//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }
//     ~Node(){
//         int value = this->data;
//         if(this->next!=NULL){
//             delete next;
//             this->next = NULL;
//         }
//         cout<<"Memory is free for node with data "<<value<<endl;
//     }
// };

// void insertAtHead(Node* &head,int d){
//     Node * temp = new Node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertAtTail(Node* &tail,int d){
//     Node* temp = new Node(d);
//     tail->next=temp;
//     tail=temp;
// }
// void print(Node* &head){
//     if(head==NULL){
//         cout<<"List is empty"<<endl;
//         return;
//     }
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// void insertAtPosition(Node* &tail,Node* &head,int position,int d){
//     if(position==1){
//         insertAtHead(head,d);
//         return;
//     }
//     Node* temp = head;
//     int cnt=1;
//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }
//     if(temp->next==NULL){
//         insertAtTail(tail,d);
//         return;
//     }
//     Node* nodeToInsert =  new Node(d);
//     nodeToInsert->next=temp->next;
//     temp->next=nodeToInsert;
// }
// void deleteNode(int position,Node* &head){
//     if(position==1){
//         Node* temp =head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//         Node* curr =head;
//         Node* prev = NULL;
//         int cnt=1;
//         while(cnt<position){
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;
//     }
// }
// int main(){
//     Node* node1=new Node(10);
//     cout<<node1->data<<endl;
//     cout<<node1->next<<endl;
//     Node*head=node1;
//     Node*tail=node1;
//     print(head);

//     insertAtTail(tail,12);
//     print(head);
//     insertAtTail(tail,15);
//     print(head);
//     insertAtPosition(tail,head,4,22);
//     print(head);

//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;
//     deleteNode(4,head);

//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;  //****
//     print(head);

//     return 0;
// }



// //Doubly Linked List
// class Node{
//     public:
//     int data;
//     Node* prev;
//     Node* next;
//     //Constructor
//     Node(int d){
//         this->data=d;
//         this->prev=NULL;
//         this->next=NULL;
//     }
//     ~Node(){
//         int val = this->data;
//         if(next!=NULL){
//             delete next;
//             next=NULL;
//         }
//         cout<<"Memory free for node with data "<<val<<endl;
//     } 
// };

// //Traversing a linked list
// void print(Node* head){
//     Node* temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// //Gives length of linked list
// int getLength(Node* head){
//     int len=0;
//     Node* temp = head;
//     while(temp!=NULL){
//         len++;
//         temp=temp->next;
//     }
//     return len;
// }
// void insertAtHead(Node* &tail,Node* &head,int d){
//     //Empty list
//     if(head==NULL){
//         Node* temp = new Node(d);
//         head=temp;
//         tail=temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         temp->next=head;
//         head->prev=temp;
//         head=temp;
//     }
// }
// void insertAtTail(Node* &tail,Node* &head,int d){
//     if(tail==NULL){
//         Node* temp = new Node(d);
//         tail=temp;
//         head= temp;
//     }
//     else{
//         Node* temp = new Node(d);
//         tail->next = temp;
//         temp->prev=tail;
//         tail=temp;
//     }
// }
// void insertAtPosition(Node* &tail,Node* &head,int position,int d){
//     //Insert at start
//     if(position==1){
//         insertAtHead(tail,head,d);
//         return;
//     }
//     Node* temp = head;
//     int cnt=1;
//     while(cnt<position-1){
//         temp=temp->next;
//         cnt++;
//     }
//     //Inserting at Last position
//     if(temp->next==NULL){
//         insertAtTail(tail,head,d);
//         return;
//     }
//     //Creating a node for d
//     Node* nodetoInsert = new Node(d);
//     nodetoInsert->next = temp->next;
//     temp->next->prev=nodetoInsert;
//     temp->next = nodetoInsert;
//     nodetoInsert->prev=temp;
// }
// void deleteNode(int position,Node* &head){
//     //deleting first node
//     if(position==1){
//         Node* temp=head;
//         temp->next->prev=NULL;
//         head=temp->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//         //deleting any middle or last node
//         Node* curr=head;
//         Node* prev = NULL;
//         int cnt = 1;
//         while(cnt<position){
//             prev=curr;
//             curr=curr->next;
//             cnt++;
//         }
//         curr->prev=NULL;
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;
//     }
    
// }
// int main(){
//     Node* head = NULL;
//     Node* tail = NULL;
//     print(head);
//     cout<<getLength(head)<<endl;
//     insertAtHead(tail,head,11);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;
//     insertAtHead(tail,head,13);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;
//     insertAtHead(tail,head,8);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;
//     insertAtTail(tail,head,25);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;
//     insertAtPosition(tail,head,2,100);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;
//     insertAtPosition(tail,head,1,101);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;
//     insertAtPosition(tail,head,7,102);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;
//     deleteNode(7,head);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"tail "<<tail->data<<endl;


//     return 0;
// }


// //Circular Linked list
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};
void insertNode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next=newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp = new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* tail){
    Node* temp = tail;
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"List is empty,please check again"<<endl;
        return;
    }
    else{
        Node* prev =tail;
        Node* curr = prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if(curr==prev){
            tail=NULL;
        }
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

bool isCircularList(Node* head){
    //empty list
    if(head==NULL){
        return true;
    }
    Node* temp = head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}

int main(){
    Node* tail = NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    /*
    insertNode(tail,5,7);
    print(tail);
    
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,9,10);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    deleteNode(tail,5);
    print(tail);
    */
   if(isCircularList(tail)){
    cout<<"Linked list is circular in nature"<<endl;
   }
   else{
    cout<<"Linked list is not circular"<<endl;
   }

    return 0;
}



