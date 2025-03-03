// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector <int> findUnion(vector<int> &a ,vector<int> &b){
    int n1=a.size();
    int n2=b.size();
    set <int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector <int> uion;
    for(auto it: st){
      uion.push_back(it);  
    }
    return uion;
}
int main() {
    vector<int> a={1,1,2,3,4};
    vector<int> b={0,7,9};
    vector<int> un;
un=findUnion(a,b);
cout<<"union"<<endl;
for(auto &it:un){
    cout<<it<<" ";
}

    return 0;
}