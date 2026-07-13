//selection sort
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,0,4,1,6};
    int n;
    cout<<"enter a size"<<endl;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }    
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}

//bubble sort 
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,0,4,1,6};
    int n;
    cout<<"enter a size"<<endl;
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }

        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    

}

//insertion sort

#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,0,4,1,6};
    int n;
    int temp=0;
    cout<<"enter a size"<<endl;
    cin>>n;
    for (int i=01;i<n;i++){
        temp=arr[i];
        int j=i-1
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
}