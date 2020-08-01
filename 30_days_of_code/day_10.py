#!/bin/python3

import math
import os
import random
import re
import sys



n = int(input())

count=0
count1=0
while n != 0:
    a = n // 2
    rem = n - 2 * a
    n = a
    if rem== 1:
        count1+= 1
        count = max(count, count1)
    else:
        count1 = 0

print(count)
