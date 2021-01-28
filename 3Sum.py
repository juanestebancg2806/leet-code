class Solution:
    def twoSum(self,nums:List[int],i,ans:List[List[int]]) -> None:
        global used
        lo,hi = 0,len(nums)-1
        while lo < hi:
            ok = lo != i and hi != i and nums[lo]+nums[hi]+nums[i] == 0
            #print(nums[lo],nums[hi],nums[i])
            if ok:
                l = [nums[lo],nums[i],nums[hi]]
                l.sort()
                tl = tuple(l)
                if tl not in used:
                    ans.append(l)
                    used.add(tl)
            lo = lo+1 if nums[lo]+nums[hi]+nums[i] < 0 or lo == i or ok else lo
            hi = hi-1 if nums[lo]+nums[hi]+nums[i] > 0 or hi == i or ok else hi
         
    
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        global used
        ans,N,used = list(),len(nums),set()
        nums.sort()
        for i in range(N):
            self.twoSum(nums,i,ans)     
                    
        return ans
        
#[-1,0,1,2,-1,-4,-2,-3,3,0,4]
