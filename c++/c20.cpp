

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