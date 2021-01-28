class Solution {
public:
    string longestPalindrome(string s) {
    int i,l,r,n = s.size(),k,maxOdd = 0,maxEven = 0,idxOdd,idxEven;
    string ans = "";
        
    if(n > 0){
        
    
    vector<int> d1(n),d2(n);//odd an even
    for (i = 0, l = 0, r = -1; i < n; i++) {
        k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
        while (0 <= i - k && i + k < n && s[i - k] == s[i + k]) k++;
        
        d1[i] = k--;
        
        if (i + k > r) {
            l = i - k;
            r = i + k;
        }
    }
    for (i = 0, l = 0, r = -1; i < n; i++) {
        k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
        while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k]) k++;
        
        d2[i] = k--;
        
        if (i + k > r) {
            l = i - k - 1;
            r = i + k ;
        }
    }
    for(i = 0; i < n;i++){
        if(d1[i] > maxOdd){
            maxOdd = d1[i];
            idxOdd = i;
        }
        if(d2[i] > maxEven){
            maxEven = d2[i];
            idxEven = i;
        }
    }
        cout<<maxOdd<<" "<<idxOdd <<" "<<maxEven<<" "<< idxEven<<endl;
    if(((maxOdd-1)*2)+1 > maxEven*2){
        l = r = idxOdd;
        maxOdd--;
        while(maxOdd > 0){
            l--;
            r++;
            maxOdd--;
        }
        for(; l <= r;l++) ans.push_back(s[l]);
        
        
    }
    else{
        l = r = idxEven;
        k = maxEven;
        while(maxEven > 0){
            l--;
            maxEven--;
        }
        
        cout<<ans<<endl;
        k--;
        while(k > 0){
            r++;
            k--;
        }
        
        for(; l <= r;l++) ans.push_back(s[l]);
    
        
        
        
    }
    }
    
    return ans;
        
    }
};

int main(){
	return 0;
}
