#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,digit,ans=0,i=0;
    cout<<"enter a binary number";
    cin>>n;
    while(n!=0){
        digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;

    }
    cout<<"the answer is "<<ans<<endl;
}


#include<iostream>
#include<math.h>
int main(){
    int n,rem;
    cout<<"enter a decimal number";
    cin>>n;
    while(n!=0){
        rem=n/10;
    }
}