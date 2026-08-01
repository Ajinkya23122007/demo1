

class Solution{
    private:

    //removeing unssesry elements from the string
    bool valid(char ch){
        if( ( ch >='a' &&ch <='z') || (ch >='A'&& ch <='Z') || (ch >='0' && ch<='9') ){
            return 1;
        }
        return 0;
    }
    
    //converting all char elements into lowecase character..
    char tolowercase(char ch){
        if((ch >='a' && ch <='z') || (ch >='0' && ch <='9'))
            return ch;
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }


    //chackng if its palindrome
    bool checkpalindrome(string a){
        int s=0;
        int e=a.length()-1;
        while(s<=e){
            if(a[s]!=a[e]){
                return 0;
                break;
            }
            else{
                s++;
                e--;
            }
        }
        return 1;
    }

public:

//creating new string temp which stores all valid element and check if the string is plalindrome 
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;i<s.length();i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<temp.length();i++){
            temp[i]=tolowercase(temp[i]);
        }
        return checkpalindrome(temp);

        
    }
};

//smallest palidrome rearrgenmet
class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.length();
        int mid=n/2;
        sort(begin(s),begin(s)+mid);
        for(int i=0;i<mid;i++){
            s[n-1-i]=s[i];
        }
        return s;
    }
};


//fiboniic series using recursion 
class Solution {
public:
    int fib(int n) {
        if(n==0)
            return 0;\

        if(n==1)
            return 1;

        int ans=fib(n-1)+fib(n-2);
        return ans ;
    }
};


//Minimum Number of Pushes to Type word
class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int sum=0;
        for(int i=0;i<n;i++){
            if(i<8){
                sum=sum+1;
            }
            else if(i<16){
                sum=sum+2;
            }
            else if(i<24){
                sum=sum+3;
            }
            else{
                sum=sum+4;
            }
        }
        return sum;
    }
};