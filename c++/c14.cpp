//selection sort
#include<iostream>
using namespace std;
int main(){
    int arr[5]={2,0,4,1,6};
    int n;
    int ans;
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