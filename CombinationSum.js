/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */


var ans = [],path = [];
var phi = function(c,tg,N){
    if(tg == 0 && path.length > 0)ans.push(path.slice());
        
    else if(N > 0){
        phi(c,tg,N-1);
        if(tg-c[N-1] >= 0){
            path.push(c[N-1]);
            phi(c,tg-c[N-1],N);
            path.pop();
        }
    }
       
};

var combinationSum = function(candidates, target) {
    ans = [];
    phi(candidates,target,candidates.length);
    return ans;
};
