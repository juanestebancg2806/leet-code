class Solution:
    def isValid(self, s: str) -> bool:
        ans,i,st = True,0,list()
        
        while i < len(s) and ans:
            if s[i] == '(' or s[i] == '[' or s[i] == '{':
                st.append(s[i])
            elif s[i] == ')':
                ans = len(st) > 0 and st.pop() == '('
            elif s[i] == ']':
                ans = len(st) > 0 and st.pop() == '['
            elif s[i] == '}':
                ans = len(st) > 0 and st.pop() == '{'                
                
            i += 1
                
        ans = ans and len(st) == 0  
        
        return ans
        
