import math
import os
import random
import re
import sys


def method(n,k):
    maxi=0
    for i in range(1, n+1):
        for j in range(1,i):
            bitwise = i&j
            if maxi < bitwise < k:
                maxi = bitwise
                if maxi == k-1:
                    return maxi
    return maxi
if __name__ == '__main__':
    t = int(input())

    for t_itr in range(t):
        nk = input().split()

        n = int(nk[0])

        k = int(nk[1])
        print(method(n,k))
