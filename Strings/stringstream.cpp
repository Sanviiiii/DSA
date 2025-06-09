#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string line="I love Apple";
    string word;
    stringstream ss(line);
    while(ss>>word){
        cout<<word<<endl;
    }
    return 0;
}

#include<iostream>
#include<sstream>
using namespace std;
int main(){
    string line="I*love*Apple";
    string word;
    stringstream ss(line);
    while (getline(ss,word,'*')){
        cout<<word<<endl;
    }
    return 0;
}