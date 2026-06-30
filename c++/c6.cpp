#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;

    cout<<"a&b "<<(a&b) <<endl;
    cout<<"a|b "<<(a|b) <<endl;
    cout<<"~a "<<(~a) <<endl;
    cout<<"a^b "<<(a^b) <<endl;

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(21<<2)<<endl;

    int i =7;
    cout<<(++i)<<endl;
    //8
    cout<<(i++)<<endl;
    //8,i=9
    cout<<(i--)<<endl;
    //9,i=8
    cout<<(--i)<<endl;
    //7,i=7
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            //cout<<" not a prime number"<<endl;
            isprime=0;
            break;
        }
    }
    if(isprime==0)
    {
            cout<<"not a prime number";
    }
     else{
            cout<<"is a prime number";
     }

 }


 #include<iostream>
 using namespace std;
  int main(){
    for (int i=0;i<5;i++){
        for (int j=i;j<=5;j++){
            cout<<i << " "<< j <<endl;
        }
    }
  }