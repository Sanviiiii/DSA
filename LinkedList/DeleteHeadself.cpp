#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1 , Node* next1){
        
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertArrtoll(vector<int> &arr){
    if (arr.empty()) return nullptr;
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
       Node* temp= new Node(arr[i]);
       mover->next = temp;
       mover=temp;
    }
    return head;
}

Node* RemoveHead(Node* head){
    if(head==nullptr) return nullptr;
    Node *temp=head;
    head=head->next;
    delete temp;
    return head;
}
int main() {
    vector<int> arr={2,3,2,1,3,4};
    Node* head=convertArrtoll(arr);
    cout<<"Intial head "<<head->data<<endl;
    head=RemoveHead(head);
    cout<<"After removal, new head "<<head->data;
    return 0;
}