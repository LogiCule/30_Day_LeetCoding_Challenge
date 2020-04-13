class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        count = 0
        length=0
        hashTab = {0: 0}
        for index, num in enumerate(nums, 1):
            if num == 0:
                count -= 1
            else:
                count += 1
            
            if count in hashTab:
                length = max(length, index - hashTab[count])
            else:
                hashTab[count] = index
        
        return length
