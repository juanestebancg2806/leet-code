/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
    var lo = 0,hi = height.length-1,ans = 0;
    while(lo < hi){
        ans = Math.max(ans,(hi-lo)*Math.min(height[lo],height[hi]));
        if(height[lo] < height[hi])
            lo++;
        else if(height[lo] > height[hi])
            hi--;
        else{
            lo++;hi--;
        }
    }
        
    return ans;
};
