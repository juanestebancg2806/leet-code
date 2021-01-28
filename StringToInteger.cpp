#include <bits/stdc++.h>
#include <limits.h>
class Solution {
public:
    int myAtoi(string str) {
        long long int ans = 0,INF = INT_MAX;
        unsigned long long int pow10 = 1;
        int i = 0,j,cntDig = 0;
        bool neg,z;
        while(str[i] == ' ') i++;
        z = str[i] == '0';
        while(str[i] == '0')i++;
        if(z && !(((int)str[i] >= 48 && (int)str[i] <= 57))) return 0;
        if(((int)str[i] >= 48 && (int)str[i] <= 57) || str[i] == '-' || str[i] == '+'){
            neg = str[i] == '-';
            if(neg && i+1 < str.size() && str[i+1] == '0') {
                i++;
                while(str[i] == '0')i++;
            }
            for(j = str[i] == '-' ? i+1: str[i] == '+'? i+1: i; j < str.size()
                && ((int)str[j] >= 48 && (int)str[j] <= 57) ;j++){
                cntDig++;
            }
            //cout<<cntDig<<" " <<j<<endl;
            if(cntDig > 10) ans = neg? INF+1: INF;
            else{
                j--;
                while(j >= 0 && ((int)str[j] >= 48 && (int)str[j] <= 57) ){
                    ans += ((int)str[j]-48)*pow10;
                    pow10 *= 10;
                    j--;
                }
            }
            if(ans > INF || ans < -INF) ans = neg? INF+1: INF;
            ans = neg ? -ans : ans;
            
            
            
        }
        
            
        return ans;
    }
};

int main(){
	return 0;
}
