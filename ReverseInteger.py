class Solution:
    def reverse(self, x: int) -> int:
        INF = (2**31)
        ans,rev,neg,_x,pow10 = 0,list(),x < 0,x,1
        x = abs(x); _x = abs(x)
        while(_x):
            pow10 *= 10
            _x //= 10
        pow10 //= 10
        while(x):
            ans += ((x%10)*pow10)
            pow10 //= 10
            x //= 10
        ans = -ans if neg else ans
        if(ans < -INF or ans > INF-1): ans = 0
        return ans
       
