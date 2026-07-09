//book allocation problem


#include<iostream>
using namespace std;
bool ispossible(arr[],int x,int n,int mid){
    int stdentcount=0;
    int pagesum=0;
    for(int i-0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum=pagesum+arr[i];
        }
        else{
            studentcount++;
            if(student>x || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];

        }
    }
    return true;
}

int main(){
    int arr[]={10,20,30,40}
    int x=2;
    int n=4;
    int sum=0;
    int s=0,ans=-1;
    for(int i=0;i<n,i++){
        sum=summ+arr[i];
    }
    int e=sum;
    int mid = s+(e-s)/2;
    while(s<=e){
        bool result=ispossible(arr,x,n,mid)
        if(result){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid =s+(e-s)/2;
    }
    return ans;
}




