#include <bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lo = 0,hi = 0,ans = 0,N = s.size();
        vector<int> ch(256,0);
        while(lo < N && hi < N ){
            lo = max(lo,ch[s[hi]]);
            ans = max(ans,hi-lo+1);
            ch[s[hi]] = hi+1;
            hi++;
        }
        return ans;
        
    }
};

int main(){
  return 0;
}
