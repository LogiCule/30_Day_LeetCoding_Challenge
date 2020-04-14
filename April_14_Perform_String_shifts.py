class Solution:
    def stringShift(self, s: str, shift: List[List[int]]) -> str:
        if len(s)==0 or len(s)==1:
            return s
        count=0
        
        for i in shift:
            if(i[0]==0):
                count-=i[1]
            else:
                count+=i[1]
            
        if(count<0):
            count=count*-1
            count=count%len(s)
            return s[count:]+s[0:count]
        else:
            count=count%len(s)
            return s[len(s)-count:]+s[0:len(s)-count]
        
           
