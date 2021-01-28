class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i,ok = 1,minLen = 500,j;
        for(i = 0; i < strs.size();i++) minLen = strs[i].size() < minLen ? strs[i].size(): minLen;
        
        if(strs.size()){
            for(i = 0;i < minLen && ok; i++){
            for(j = 1; j < strs.size() && ok;j++)
                ok = strs[j][i] == strs[j-1][i];
            ans = ok ? ans+strs[0][i] : ans;
            
        }
        
            
        }
        
        return ans;
        
    }
};

int main(){
	return 0;
}
