# import time
# Stime=time.time()
def queensAttack(n,r_q,c_q,obstacles):
    count=0
    direction=[(1,0), (1,1), (0,1), (-1,1), (-1,0), (-1,-1), (0,-1), (1,-1)]
    for u,v in direction:
        r_q_temp , c_q_temp=r_q,c_q
        #Converting it to a set avoids uncessary searches
        Obset=set(obstacles)
        while True:
            r_q_temp+=u
            c_q_temp+=v
            if (r_q_temp,c_q_temp) in Obset or not (0 < r_q_temp <= n >= c_q_temp > 0):
                break
            count+=1
    return count
    
n,k = [int(a) for a in input().split()]

r_q,c_q=[int(a) for a in input().split()] 

obstacles=[]

for i in range(k):
    a , b = [int(t) for t in input().split()]
    obstacles.append((a,b))

print(queensAttack(n,r_q,c_q,obstacles))

# Etime=time.time()
# elTime=Etime-Stime
# print(elTime)
#Reference : https://www.thepoorcoder.com/hackerrank-queens-attack-ii-solution/

#https://www.kindsonthegenius.com/queen-attack-ii-simple-solution-hackerrank/
