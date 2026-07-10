#include<iostream>
using namespace std;

int sqrtbinarysearch(int n){
    int s =0;
    int ans=-1;
    int e=n;
    long long int mid =s+(e-s)/2;
   while(s<=e){
    long long int square=mid*mid;
    if(square==n){
        return mid;
    }
    if(square<n){
        ans=mid;
        s=mid+1;

    }
    else{
        e=mid-1;
    }
    
     mid =s+(e-s)/2;
   }
   return ans;
}

int main(){
    int n;
    cout<<"this program finds sqrt of number using binary sreach"<<endl;
    cout<<"enter a number";
    cin>>n;
    sqrtbinarysearch(n);
}

