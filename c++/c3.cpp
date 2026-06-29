#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while(row <=n){

        int col=1;
        char star= 'A'+n-row;
        while(col<=row){
            cout<< star;
            star=star+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i <=n){
        int space=n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;

        }
        cout<<endl;
        i=i+1;
    }
}

