class Solution {
public:
    bool checkpalindrome(vector<int> arr){
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            if(arr[s]!=arr[e]){
                return 0;
            }
            s++;
            e--;
        }
        return 1;
    }    
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp=head;
        while(temp!=NULL){
            arr.push_back(temp->val);

        }
        return checkpalindrome(arr);
    }
};