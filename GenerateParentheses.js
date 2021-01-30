/**
 * @param {number} n
 * @return {string[]}
 */

var ans = [];

var phi = function(o,c,n,s){
    if(o+c == 2*n && s.length > 0) ans.push(s);
    if(o+c < 2*n){
        if(o < n)
            phi(o+1,c,n,s+'(');
        if(c < o)
            phi(o,c+1,n,s+')');
    }
};


var generateParenthesis = function(n) {
    ans = [];
    phi(0,0,n,"");
    
    return ans;
};


/*
rec:


*/
