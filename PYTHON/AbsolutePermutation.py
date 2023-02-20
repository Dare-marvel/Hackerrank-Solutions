def absolutePermutation(n, k):
    numList = list(range(n+1))
    if k == 0:
        return numList[1:]
    if n % 2 != 0:
        return [-1]
    for i in range(1,n-k+1):
        if numList[i] + k == numList[i+k]:
            numList[i],numList[i+k] = numList[i+k],numList[i]
        elif abs(numList[i]-i) != k:
            return [-1]
    for i in range(n-k+1,n+1):
        if abs(numList[i]-i) != k:
            return [-1]
    return numList[1:]
    
t = int(input("Enter the number of testcases"))
for i in range(t):
    n , k = [int(x) for x in input().split()]
    res = absolutePermutation(n,k)
    print(" ".join(map(str,res)))
    

    
