/**
 * @param {string} s
 * @return {number}
 */
var _map = {};
_map['I'] = 1; _map['V'] = 5; _map['X'] = 10; _map['L'] = 50; _map['C'] = 100;
_map['D'] = 500;_map['M'] = 1000;

var romanToInt = function(s) {
    var ans = 0;
    var i = 0;
    while(i < s.length){
        ans = i > 0 && _map[s.charAt(i)] > _map[s.charAt(i-1)] ? ans-_map[s.charAt(i-1)]+_map[s.charAt(i)] - _map[s.charAt(i-1)]:ans+_map[s.charAt(i)];
        i++ ;
        
    }
         
    return ans;
    
};


