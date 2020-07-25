#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(meal_cost, tip_percent, tax_percent):
    tip= meal_cost*(tip_percent/100)
    tax=meal_cost*(tax_percent/100)
    totalcost=meal_cost+tip+tax
    roun_cost=round(totalcost)
    return roun_cost
meal=float(input())

tip=float(input())
tax=float(input())
a=solve(meal, tip, tax)
print(a)
