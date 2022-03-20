def fib(rep):
    if rep == 0 or rep == 1:
        return(1)
    else:
        num = fib(rep - 1) + fib(rep - 2)
        return(num)

print(fib(3))