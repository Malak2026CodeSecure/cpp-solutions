#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,p=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
      int x=0;
        
        int c=i;//4
        while(c>0){
          int y=c%10;
          if(y!=4 && y!=7)
           x++;
           c/=10;
        }
        if(x==0){
           cout<<i<<" ";
            p++;
        }
          
           
       
    }
    if(p==0)
    cout<<-1<<endl;
}