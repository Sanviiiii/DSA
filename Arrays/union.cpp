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

//optimal
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <set>
using namespace std;
vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int n1=a.size();
        int n2=b.size();
        int i=0,j=0;
        vector<int> unionArr;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                if(unionArr.size()==0 || unionArr.back()!=a[i]){
                    unionArr.push_back(a[i]);
                }
              i++;  
            }
            else{
                if(unionArr.size()==0 || unionArr.back()!=b[j]){
                    unionArr.push_back(b[j]);
                }
               j++; 
            }
        }
        while(j<n2){
            if(unionArr.size()==0 || unionArr.back()!=b[j]){
                    unionArr.push_back(b[j]);
                }
               j++;
        }
        while(i<n1){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                    unionArr.push_back(a[i]);
                }
               i++;
        }
        return unionArr;
    }
int main() {
    vector<int> a={1,1,2,3,4,5};
    vector<int> b={1,1,2,3,4,5};
    vector<int> un;
un=findUnion(a,b);
cout<<"union"<<endl;
for(auto &it:un){
    cout<<it<<" ";
}

    return 0;
}