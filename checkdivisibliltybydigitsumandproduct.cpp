#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int sum=0;
    int product=1;
    int temp=n;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        product=product*digit;
        n=n/10;
    }
    if(temp%(sum+product)==0){
        cout<<"its true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}