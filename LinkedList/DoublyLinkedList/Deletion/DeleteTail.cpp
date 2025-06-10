// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1,Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* ConvertTo2DLl(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
} 
void PrintLl(Node* head){
    
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* DeleteTail(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* tail =head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node* prev = tail->back;
    prev->next=nullptr;
    tail->back=nullptr;
    free(tail);
    return head;
}
int main() {
    vector<int> arr={1,2,3,4,5};
    Node* head=ConvertTo2DLl(arr);
    PrintLl(head);
    cout<<endl<<"Delete Tail"<<endl;
    head=DeleteTail(head);
    PrintLl(head);
    return 0;
}