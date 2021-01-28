class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        ans = list()
        nums = [(nums[i],i) for i in range(len(nums))]
        nums.sort(key = lambda x: x[0])
        lo,hi,ok = 0,len(nums)-1,False
        while(lo != hi and not ok):
            ok = nums[lo][0]+nums[hi][0] == target
            if(ok):
                ans = [nums[lo][1],nums[hi][1]]
            lo = lo+1 if nums[lo][0]+nums[hi][0] < target else lo
            hi = hi-1 if nums[lo][0]+nums[hi][0] > target else hi
        return ans
        
