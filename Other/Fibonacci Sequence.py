import matplotlib.pyplot as plt
import numpy as np

'''
def fib(rep):
    if rep == 0 or rep == 1:
        return(1)
    else:
        num = fib(rep - 1) + fib(rep - 2)
        return(num)
'''

num = 1000
seq = [0,1]
for i in range(1,num):
    seq.append(seq[i]+seq[i - 1])

even = []
for i in range (0,len(seq)):
    if i % 4 == 0:
        even.append(seq[i])