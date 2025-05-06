#include <iostream>
using namespace std;
class Node{
  public:
    int data;
    Node* next;

    // constructor
    Node(){
      this->data=0;
      this->next=NULL;
    }
    Node(int data){
      this->data=data;
      this->next=NULL;
    }
};
void arrToLinkedlist(Node* head,int* arr,int size){
  Node * mover=head;
  for(int i=1;i<size;i++){
    Node* temp=new Node(arr[i]);
    mover->next=temp;
    mover=mover->next;
  }
}
void print(Node* head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}
Node* deleteHead(Node* head) {
    if (head == NULL) {
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;  // Correct way in C++
    return head;
}

int main() {
  int arr[]={1,2,3,4,5,6,7,8,9};
  int size=9;
  Node* head=new Node(arr[0]);
  arrToLinkedlist(head,arr,size);
  print(head);
  deleteHead(head);
  cout<<head->data<<endl;
  return 0;
}