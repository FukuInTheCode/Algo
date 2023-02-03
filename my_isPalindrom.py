class Solution(object):
    def isPalindrome(x) -> bool:
        return True if str(x)[::-1] == str(x) else False
