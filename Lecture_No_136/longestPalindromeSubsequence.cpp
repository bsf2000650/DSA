
int spaceOptimization(string &a, string &b){

    // vector<vector<int > > dp(text1.length()+1, vector<int>(text2.length()+1,0));
    vector<int> next(a.length()+1, 0);
    vector<int> curr(b.length()+1, 0);

    for(int i=a.lengt()-1; i>=0; i--){
        for(int j=b.length()-1; j>=; j--){
            int ans = 0;

            if(a[i] == b[j])
                ans =  1 + next[i+1];
            else
                ans = max(next[j], curr[j+1]);
            
            curr[j] = ans;
        }
        curr = next;
    }
    return next[0];
}


int longestPalindromeSubseq(string s) {

    string revStr = s;

    reverse(revStr.begin(), revStr.end());
    int ans = spaceOptimization(s,revStr);
    return ans;
}