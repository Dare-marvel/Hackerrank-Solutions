### [Standardize Mobile Number Using Decorators](https://www.hackerrank.com/challenges/standardize-mobile-number-using-decorators/problem?isFullScreen=false)
## Explanation:

## Time and Space Compexity:
### `Time Complexity`:

### `Space Complexity`:

## Code:
```py
def wrapper(f):
    def fun(l):
        newl = []
        # complete the function
        for i in range(len(l)):
            if len(l[i]) > 10:
                st_idx = len(l[i]) % 10
                newl.append("+91 " + l[i][st_idx:st_idx+5]+" "+l[i][st_idx+5:])
            else:
                newl.append("+91 " + l[i][0:5] +" "+ l[i][5:] )   
        f(newl)
    return fun

@wrapper
def sort_phone(l):
    print(*sorted(l), sep='\n')

if __name__ == '__main__':
    l = [input() for _ in range(int(input()))]
    sort_phone(l) 
```
