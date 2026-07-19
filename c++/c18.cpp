//repalce space with @40
string replacespaces(string &str){
    string temp= "";

    for(int i=0;i<str.length();i++){
        if(str[i]==" "){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
        
    }
    retutn temp;
}

//search in a 2d matrix using binary search 
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int rowindex=0;
        int colindex=col-1;
        while(rowindex<row && colindex>=0){
            int element=matrix[rowindex][colindex];
            if(element==target){
                return 1;
            }
            if(element<target){
                rowindex++;
            }
            else{
                colindex--;
            }
        }
        return 0;   
    }
};


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
       int m=image.size();
       int n=image[0].size();
       for(int i=0;i<m;i++){
        reverse(image[i].begin(),image[i].end());
        for(int j=0;j<n;j++){
            if(image[i][j]==0){
                image[i][j]=1;
            }
            else{
                image[i][j]=0;
            }
        }
       }   
       return image;     
    }
};