#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    while(t>0){
        cin>>n;
        if(n%3==0)
        cout<<"Second"<<endl;
        else
        cout<<"First"<<endl;
        t--;
    }
}