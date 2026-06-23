#include<iostream>
using namespace std;
int main(){
    int n, x = 0 , ld;
    cout<<"enter a number to be reverse";
    cin>> n;

    while(n>0){
        ld = n % 10;
        x = x * 10 + ld;
        n = n/10;

    }
    cout<<"reversed mumber is"<<x<<endl;
    return 0;
}