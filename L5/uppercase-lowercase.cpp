#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='A' and ch<='Z'){
        cout<<"uppercase\n";
    }
    else{
        cout<<"lowercase\n";
    }
    return 0;
}