// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
     Node(int data1){
        data=data1;
        next=nullptr;
    }
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
Node* ConvertArrToll(vector<int> arr){
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
        
    }
    return head;
}



void Printll(Node* head){
    Node* temp=head;
   while(temp)
   {
     cout<<temp->data<<"  " ;
     temp=temp->next;
     
   }
   
}
Node* insertHead(Node*head,int val){
    Node* temp =new Node(val,head);
    return temp;
}


Node* insertBeforeValue(Node* head,int ele,int val){
    if(head==nullptr){
       
        return nullptr;
    }
    if(head->data==val){
        return new Node(ele,head);
      
    }
    Node* temp=head;
    
    while(temp->next!=nullptr){
        
        if(temp->next->data==val){
            Node* x =new Node(ele,temp->next);
           // x->next=temp->next;
            temp->next=x;
           break;
        }
        temp=temp->next;
    }
     return head;
} 
int main() {
    
   vector<int> arr={1,12,3,4,5,90,9};
   Node* head =ConvertArrToll(arr);
  // cout<<head->data<<endl;
  cout<<"Original :"<<endl;
   Printll(head);
   //cout<<check(head,133);
  head=insertBeforeValue(head,100,12);
   //cout<<newHead->data<<endl;
    //cout<<endl<<"After Deletion-1 :"<<endl;
   //Printll(newHead);
    //newHead=deleteEle(newHead,3);
    //cout<<endl<<"After Deletion-2 :"<<endl;
    cout<<endl;
   Printll(head);
    return 0;
}