class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = x < 0 ? false: true;
        if(ans && x > 0){
            long long int _pow = pow(10,((int)log10(x))),rev = 0,_x = x;
            while(_x > 0 ){
                rev = rev +((_x%10)*_pow);
                _pow /= 10;
                _x /= 10;
            }

            ans = ans && rev == x;
        }
        return ans;
        
    }
};

int main(){
	return 0;
}
