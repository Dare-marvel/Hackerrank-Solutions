def BiggerIsGreater(lstr):
    i , j = 0 , 0
    flag = 0
    for i in range(len(lstr)-2,-1,-1):
        if (lstr[i]) < (lstr[i + 1]):
            flag=1
            break
    if flag == 0:
        return 'no answer'
    else :
        for j in range(len(lstr)-1,i,-1):
            if((lstr[j])>(lstr[i])):
                break
        lstr[i],lstr[j] = lstr[j],lstr[i]
        st , end = i+1,len(lstr)
        lstr[st:end] = lstr[st:end][::-1]
        return "".join(lstr)
    
t = int(input())
l=[]
for i in range(t):
    l.append(list(input()))
    
for lstr in l:
    print(BiggerIsGreater(lstr))