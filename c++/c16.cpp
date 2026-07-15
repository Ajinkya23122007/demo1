class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int e=s.size()-1;
        while(st<e){
            swap(s[st],s[e]);
            st++;
            e--;
        }  
    }
};

// program to check if a string is a paildrome or not using two pointers approach 
// just wrting logic
#include<iostream>
using namespace std;
int main(){
    char name[20];
    int n;
    cout<<"enter a size"<<endl;
    cin>>n;
    cout<<"enter your word"<<endl;
    cin>>name;
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            cout<<"not a palindeome"<<endl;
            break;
        }
        else{
            s++;
            e--;
        }
        cout<<"its a palindrome"<<endl;
    }
}