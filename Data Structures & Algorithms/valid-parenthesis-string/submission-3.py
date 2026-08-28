class Solution:
    def checkValidString(self, s: str) -> bool:
        sb = []  # FIXED: Use Python list as a stack for '('
        ss = []  # FIXED: Use Python list as a stack for '*'
        n = len(s)
        
        for i in range(0, n):
            if s[i] == '(':
                sb.append(i)  # FIXED: Use .append() instead of .push()
            elif s[i] == '*':  # FIXED: Changed 'c' to 's[i]'
                ss.append(i)
            else:  # s[i] == ')'
                if sb:  # FIXED: In Python, 'if sb' checks if the stack is NOT empty
                    sb.pop()
                elif ss:
                    ss.pop()
                else:
                    return False
                    
        # Match remaining '(' with remaining '*'
        while sb and ss:  # FIXED: Clean loop condition for non-empty stacks
            if sb[-1] > ss[-1]:  # FIXED: Use [-1] to look at the top element
                return False
            sb.pop()
            ss.pop()
            
        return len(sb) == 0  # Returns True if all open brackets are balanced
