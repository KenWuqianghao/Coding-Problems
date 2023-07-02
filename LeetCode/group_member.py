class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """

        strs_dict = {}
        for string in strs:
            sorted_string = ''.join(sorted(string))
            if sorted_string in strs_dict:
                strs_dict[sorted_string].append(string);
            else:
                strs_dict[sorted_string] = [string]

        output = []

        for key in strs_dict:
            output.append(strs_dict[key])
        
        return output