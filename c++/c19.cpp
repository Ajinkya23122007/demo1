//gdc or hcf 

#include<iostream>
using namespace std;
int gdc(int a,int b){
    if(a==0){
        cout<<"the gdc of two given number is "<<endl;
        return b;
    }
    else if(b==0){
        cout<<"thr gdc of the given number is "<<endl;
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else if(b>a){
            b=b-a;
        }
    }
    cout<<"the gdc of thr given numbers is "<<endl;
    return a;
}    


int main(){
    int a ,b;
    cout<<"enter value for a"<<endl;
    cin>>a;
    cout<<"enter value for b"<<endl;
    cin>>b;
    int ans=gdc(a,b);
    cout <<ans<<endl;
}
