class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        dictionary = {}

        if len(s) != len(t):
            return False

        for i in range (0, len(s)):
            if s[i] in dictionary:
                dictionary[s[i]] += 1
            else:
                dictionary[s[i]] = 1
        
        for i in range(0, len(t)):
            if t[i] in dictionary:
                dictionary[t[i]] -= 1
            else:
                return False

        for key in dictionary:
            if dictionary[key] != 0:
                return False
        
        return True