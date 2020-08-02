#!/bin/python3

import math
import os
import random
import re
import sys



arr = []
sum=[]
for arr_i in range(6):
   arr_t = [int(arr_temp) for arr_temp in input().strip().split(' ')]
   arr.append(arr_t)
for i in range(4):
    for j in range(4):
        num=arr[j][i]+arr[j][i+1]+arr[j][i+2]+arr[j+1][i+1]+arr[j+2][i]+arr[j+2][i+1]+arr[j+2][i+2]
        sum.append(num)
for i in range(15):
    if sum[i]>sum[i+1]:
        sum[i+1]=sum[i]
print(sum[15])
