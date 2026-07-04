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


//program to checnk armstrong number 
#include<iostream>
using namespace std;
int main(){
int n,temp,sum=0,digit;
cin>>n;
temp=n;
while(n!=0){
  digit=n%10;
  sum=sum+ digit*digit*digit;
  n=n/10;
}
if(sum==temp){
  cout<<"its a armstrong number";
}
else{
  cout<<"not a armstrong number";
}
}  


#include<iostream>
using namespace std;
int main(){
int n,temp,sum=0,digit;
cin>>n;
temp=n;
while(n!=0){
  digit=n%10;
  sum=sum+digit;
  n=n/10;
}

cout<<"sum of digit is"<<sum