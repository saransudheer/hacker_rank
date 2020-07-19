import sys

class Solution:
    # Write your code here
    def __init__(self):
        self._st=[]#see geeksforgeeks underscore
        self._quc=[]#works without being a private variable
    def pushCharacter(self,ch):
        self._st.append(ch)
    def enqueueCharacter(self,ch):
        self._quc.insert(0,ch)
    def popCharacter(self):
        return self._st.pop()
    def dequeueCharacter(self):
        return self._quc.pop()
    
# read the string s
s=input()
#Create the Solution class object
obj=Solution()   

l=len(s)
# push/enqueue all the characters of string s to stack
for i in range(l):
    obj.pushCharacter(s[i])
    obj.enqueueCharacter(s[i])
    
isPalindrome=True
'''
pop the top character from stack
dequeue the first character from queue
compare both the characters
''' 
for i in range(l // 2):
    if obj.popCharacter()!=obj.dequeueCharacter():
        isPalindrome=False
        break
#finally print whether string s is palindrome or not.
if isPalindrome:
    print("The word, "+s+", is a palindrome.")
else:
    print("The word, "+s+", is not a palindrome.")    