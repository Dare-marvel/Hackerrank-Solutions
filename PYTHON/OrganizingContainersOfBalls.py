# Link to the problem : https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem?isFullScreen=false

def OrgContainers(matrix):
    # total number of balls in that container
    container_sizes=[sum(matrix[i]) for i in range(len(matrix))] 
    # number of balls of that type in each container
    ball_counts=[sum(matrix[i][j] for i in range(len(matrix))) for j in range(len(matrix))] 
    
    #Sorting the containers in ascending order
    container_sizes.sort()
    ball_counts.sort()
    
    if(all(container_sizes[i] == ball_counts[i] for i in range(len(container_sizes)))):
        print('Possible')
    else:
        print('Impossible')

#The number of queries
q=int(input())
for i in range(q):
    #The number of containers and ball types
    n=int(input())

    matrix=[]

    #Description of rows and columns of containers
    for i in range(n):
        l=[int(t) for t in input().split()]
        matrix.append(l)
    OrgContainers(matrix)
