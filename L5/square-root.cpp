#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int precision =2;
    int cp=1;
    float i=0;
    float inc=1;
     
    while(cp <= precision + 1){
        while(i*i<=n){
            i = i + inc;
        }
        i = i - inc;
        inc = inc/10;
        cp = cp + 1;
    }
    cout<<i<<endl;
   

    return 0;
}