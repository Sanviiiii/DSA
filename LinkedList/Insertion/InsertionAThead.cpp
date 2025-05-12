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
Node* InsertHead(Node* head, int val){
    Node* temp = new Node(val , head);
    
   
    return temp;
}

int main(){
    vector<int> arr={1,2,3,6};
    Node* head = convertArr2LL(arr);
    head = InsertHead(head,14);
     cout<<head->data<<endl;
     
    return 0;
}
