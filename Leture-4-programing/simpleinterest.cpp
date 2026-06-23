#include<iostream>
using namespace std;
int main(){
    /*1.creat the bucket*/
    int p,r,t;
    float si;
    /*
    cin >>p;
    cin >>r;
    cin >>t;
    */
   /*2.take input*/
   cin>>p>>r>>t;
   /*3.calculate*/
   si =(p*r*t)/100.0;
   /*4.output*/
   cout<<"Simple interest:" <<si<<'\n';

   return 0;
}