#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

void sortarr(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        while(arr[i]==0 && i<=j){
            i++;

        }
        while(arr[j]==1 && i<=j){
            j--;
        }
        while(arr[i]==1 && arr[j]==0 && i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
}
int main(){
    int arr[6]={0,1,0,0,1,1},n;
    cout <<"enter a size"<<endl;
    cin>>n;
    sortarr(arr,n);
    printarray(arr,n);
}

