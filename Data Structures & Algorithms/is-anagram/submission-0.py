class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
       sTable = {}
       tTable = {}

       for i in range(len(s)):
            if s[i] not in sTable:
                sTable[s[i]] = 1
            else:
                sTable[s[i]] += 1
        
       for i in range(len(t)):
            if t[i] not in tTable:
                tTable[t[i]] = 1
            else:
                tTable[t[i]] += 1
        
       if sTable == tTable:
            return True
        
       return False
