#include<iostream>
using namespace std;
int main (){

    int n ;
    cin>>n;
    int i=2;
    while (i<n){
        //divide ho gya toh prime nahi hoga
        if(i%n==0){
            cout<<" Not Prime for :"<<i<<endl;
        }else{
            cout<<"Prime for :"<<i<<endl;
                }
        i=i+1;
    }
}