class Solution:
    def isHappy(self, n: int) -> bool:
        already=set()
        while n not in already:
            if(n==1):
                return True
            already.add(n)
            rev=0
            while(n!=0):
                rev+=(n%10)**2
                n//=10
            n=rev
        return False
 /*
 keep squaring the digits of the number and add the new number to the set
 and if you get to one return true
 and if the number is formed is already in the set return false
 coz u are in an endless cycle
 */
