def solve(a, b):
    minvalue = 1000
    while x in range(1,max(a,b)+1):
        if (a&x) + (b&x) < minvalue:
            minvalue = (a&x) + (b&x)
             
    return minvalue
