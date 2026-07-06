//totsl number of setbit in a snd b
// #include<iostream>
// using namespace std;
// int setbitA(int a){
//     int count1=0;
//     while(a!=0){
//         if(a&1){
//             count1++;

//         }
//         a>>1;
//     }
//     return count1;

// }
// int setbitB(int b){
//     int count2=0;
//     while(b!=0){
//         if(b&1){
//             count2++;
//         }
//         b>>1;

//     }
//     return count2;
// } 
// int main(){
//     int a ,b;
//     cout<<"enter a value for a;
//     cin>>a;
//     cout<<"enter a value for b";
//     cin>>b;
//     int ans1=setbitA(a);
//     int ans2=setbitB(b);
//     int ans=ans1+ans2;
//     cout<<"set bit of a and b is"<<ans;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int arr[100],size,n;
    cout<<"enter a size"<<endl;
    cin>>size;
    cout<<"enter elements in array now"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"the sum all the ele entered is "<<endl<<sum;
}
