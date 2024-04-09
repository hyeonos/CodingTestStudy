def solution(m, n, puddles):    
    way = [[0 for j in range(n)] for i in range(m)]     # 초기화
    
    way[0][0] = 1
    
    for pud in puddles :
        way[pud[0]-1][pud[1]-1] = 0
    
    for i in range(0, m) :
        for j in range(0, n) :
            if i == 0 and j == 0 :
                continue
            if [i+1, j+1] in puddles :
                continue
            way[i][j] = way[i-1][j] + way[i][j-1]
    
    answer = way[-1][-1] % 1000000007
    return answer
