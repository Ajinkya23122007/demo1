//gdc or hcf 

#include<iostream>
using namespace std;
int gdc(int a,int b){
    if(a==0){
        cout<<"the gdc of two given number is "<<endl;
        return b;
    }
    else if(b==0){
        cout<<"thr gdc of the given number is "<<endl;
        return a;
    }
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else if(b>a){
            b=b-a;
        }
    }
    cout<<"the gdc of thr given numbers is "<<endl;
    return a;
}    


int main(){
    int a ,b;
    cout<<"enter value for a"<<endl;
    cin>>a;
    cout<<"enter value for b"<<endl;
    cin>>b;
    int ans=gdc(a,b);
    cout <<ans<<endl;
}


//search in 2d matirx
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int start =0;
        int end=n*m-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            int element=matrix[mid/m][mid%m];
            if(element==target){
                return 1;
            }
            if(element<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return 0;
    }
};