class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        n=len(word)
        if word.isupper():
            return True
        if word.islower():
            return True
        if n>0 and word[0].isupper() and word[1:].islower():
            return True
        return False