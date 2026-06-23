#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a>=b&&a>=c){
    cout<<"largest:"<<a<<'\n';
  }
  else if(b>=a&&b>=c){
    cout<<"largest:"<<b<<'\n';
  }
  else{
    cout<<"largest:"<<c<<'\n';
  }
    return 0;
}