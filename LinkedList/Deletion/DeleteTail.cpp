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

/*Node* RemoveHead(Node* head){
    if(head==nullptr) return nullptr;
    Node *temp=head;
    head=head->next;
    delete temp;
    return head;
}*/
Node* RemoveTail(Node *head){
    if(head == nullptr || head->next==nullptr) return nullptr;
    Node* temp= head;
    while(temp->next->next != nullptr){
        temp=temp->next;
    }
    free(temp->next);
    temp->next = nullptr;
    return head;
}
void printLL(Node* head){
    Node* temp = head;
    
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main() {
    vector<int> arr={2,3,2,1,3,4};
    Node* head=convertArrtoll(arr);
    printLL(head);
    cout<<endl<<"Intial head "<<head->data<<endl;
    
    head=RemoveTail(head);
    cout<<endl<<"After removal, new head "<<head->data<<endl;
    printLL(head);
    return 0;
}