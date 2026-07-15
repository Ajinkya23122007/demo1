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
using name 