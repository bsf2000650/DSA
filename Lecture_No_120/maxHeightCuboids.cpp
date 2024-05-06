#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool check(vector<int> base, vector<int> newRow){
    if(newBox[0] <= base[0] && newBox[1] <= base[1] && newBox[2] <= base[2])
        return true;
    else
        return false;
}

int solveTab(int n, vector<vector<int > > &cuboids){

    vector<int> currRow(n+1,0);
    vector<int> currCol(n+1,0);

    for(int curr = n-1; curr >= 0; curr--){
        for(int prev = curr; prev >= 0; prev--){
            int take = 0;
            if(prev == -1 || check(a[curr],a[prev]))
                take = a[curr][2] + nextRow[curr+1];
            
            int notTake = 0 + nextRow[prev+1];
            currRow[prev+1] = max(take,notTake);
        }
        nextRow = currRow;
    }
    return nextRow[0];
}

int maxHeight(vector<vector<int > > &cuboids){
    for(auto &a: cuboid){
        sort(a.begin(),a.end());
    }

    sort(cuboids.begin(),cuboids.end());

    return solveTab(cuboids.size(), cuboids);
}

int main(){
    
}