#include<iostream>
using namespace std;

int partition(int arr[],int s int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<e;i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);

    //left and right part
    int i=s
    int j=e;
    while(i<pivotindex && j<pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j<pivotindex){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotindex;
}
quicksort(int arr[],int s,int e){
    if(s>=e){
        return arr[s];
    }

    //partition
    int p=partition(arr, s , e);
     
    //left part
    quicksort(arr,s,p-1);

    //rightpart
    quicksort(arr,p+1,e);

}

int main(){
    int arr[5]={2,3,1,6,0};
    int n=5;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;

}