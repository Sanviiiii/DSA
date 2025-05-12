
#include <bits/stdc++.h>
using namespace std;
struct Node{
    public :
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* RemoveHead(Node* head){
    if(head==nullptr) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
int main() {
  vector<int> arr={1,2,3,6};
  Node* head = convertArr2LL(arr);
head=RemoveHead(head);
print(head);
    return 0;
}
/*class Solution {
public:
    ListNode* insertAtHead(ListNode* &head, int X) {
     ListNode* newNode = new ListNode(X);
     newNode->next=head;
     head=newNode;
     return head;
    }
};*/