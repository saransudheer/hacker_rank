#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    N = int(input())
    pattern = "@gmail.com"
    regex = re.compile(pattern)
    firstnlist=[]


    for N_itr in range(N):
        firstNameEmailID = input().split()

        firstName = firstNameEmailID[0]

        emailID = firstNameEmailID[1]

        if regex.search(emailID):
            firstnlist.append(firstName)
        firstnlist.sort()
    for name in firstnlist:
        print(name)
