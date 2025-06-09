#include <iostream>

using namespace std;
string convertCamelCase(string s){
    string res="";
    bool capNext=false;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            capNext=true;
        }
        else if(capNext==true){
            res+=toupper(s[i]);
            capNext=false;
        }
        else{
            res+=s[i];
        }
    }
    return res;
}
int main() {
  string s;
  getline(cin,s);
  cout<<convertCamelCase(s)<<endl;

    return 0;
}