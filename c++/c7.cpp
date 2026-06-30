#include<iostream>
 using namespace std;

  int main(){
    int res=1;
    int a,b;
    cin>>a;
    cin>>b;
    for (int i=1;i<=b;i++){
        res=res*a;
    }
    cout<<"a to the power is"<<res;
  }