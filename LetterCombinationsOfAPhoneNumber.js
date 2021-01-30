/**
 * @param {string} digits
 * @return {string[]}
 */

var _map = {
    '2':['a','b','c'],
    '3':['d','e','f'],
    '4':['g','h','i'],
    '5':['j','k','l'],
    '6':['m','n','o'],
    '7':['p','q','r','s'],
    '8':['t','u','v'],
    '9':['w','x','y','z']
    
};

var ans = [];

var phi = function(i,digits,s){
    var j = 0, letters = [];
    if(s.length == digits.length && s.length > 0) ans.push(s);
    
    if(i < digits.length){
        letters = _map[digits[i]];
        for(j = 0; j < letters.length;j++) phi(i+1,digits,s+letters[j]);
        
    }
}

var letterCombinations = function(digits) {
    ans = [];
    phi(0,digits,"");
    return ans;
    
};
