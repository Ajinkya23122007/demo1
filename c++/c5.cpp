#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int star=i-1;
        while(star){
            cout<<"*";
            star=star-1;
        }
        int space=i-1;
        while(space){
            cout<<"*";
            space=space-1;
        }
        int k=1;
        while(k<=n-i+1){
            cout<<n+2-k-i;
            k=k+1;
        }
        cout<<endl;
        i=i+1;

    }

}