//totsl number of setbit in a snd b
#include<iostream>
using namespace std;
int setbitA(int a){
    int count1=0;
    while(a!=0){
        if(a&1){
            count1++;

        }
        a>>1;
    }
    return count1;

}
int setbitB(int b){
    int count2=0;
    while(b!=0){
        if(b&1){
            count2++;
        }
        b>>1;

    }
    return count2;
} 
int main(){
    int a ,b;
    cout<<"enter a value for a;
    cin>>a;
    cout<<"enter a value for b";
    cin>>b;
    int ans1=setbitA(a);
    int ans2=setbitB(b);
    int ans=ans1+ans2;
    cout<<"set bit of a and b is"<<ans;
    return 0;
}