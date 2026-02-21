#include<iostream>
using namespace std;
int main(){
    int n,t;
    cin>>t;
    while(t>0){
        cin>>n;
        int x=10;
        int n1=n;
        while(x>0){
            n--;
            n1++;
            if(n1%3==0){
                cout<<"First"<<endl;
                break;
            }
        }
        if(x==0 && n%3!=0)
        cout<<"Second"<<endl;
        t--;
    }
}