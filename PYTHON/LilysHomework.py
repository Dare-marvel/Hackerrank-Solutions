def NumbSwaps(arr):
    indexMap={}
    for i in range(len(arr)):
        indexMap[arr[i]]=i
        
    sortedArray=sorted(arr)
    res=0
    
    for i in range(len(arr)):
        if arr[i]!=sortedArray[i]:
            res+=1
            #swap_index contains the actual position of first element in the unsorted array
            swap_index=indexMap[sortedArray[i]]
            #This contains the position of unsorted element after swapping the indices
            indexMap[arr[i]]=swap_index
            #Now swap the elements
            arr[i],arr[swap_index]=arr[swap_index],arr[i]
            
    return res

n = int(input().strip())

arr = list(map(int, input().rstrip().split()))

print(min(NumbSwaps(arr[::]),NumbSwaps(arr[::-1])))