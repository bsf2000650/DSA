#include<iostream>
#include<vector>
using namespace std;


    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int rows=matrix.size(),cols=matrix[0].size();
        int startingrow=0,startingcol=0,endingrow=rows-1,endingcol=cols-1;
        int count=0,total=rows*cols;
        while(count<total){
            for(int i=startingcol;count<total&&i<=endingcol;i++){
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;
            for(int j=startingrow;count<total&&j<=endingrow;j++){
                ans.push_back(matrix[j][endingcol]);
                count++;
            }
            endingcol--;
            for(int i=endingcol;count<total&&i>=startingcol;i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;
            for(int j=endingrow;count<total&&j>=startingrow;j--){
                ans.push_back(matrix[j][startingcol]);
                count++;
            }
            startingcol++;
        }
        return ans;

        
    }


int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = spiralOrder(matrix);
    cout << "Printing spiral order : " << endl;
    for (auto i : ans) cout << ans[i] << " ";
}