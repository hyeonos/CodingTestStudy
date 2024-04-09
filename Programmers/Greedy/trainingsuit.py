def solution(n, lost, reserve):
    lost_set = set(lost) - set(reserve)
    reserve_set = set(reserve) - set(lost)
    
    answer = n - len(lost_set)
    
    for lost_one in lost_set :
        if lost_one-1 in reserve_set :
            reserve_set.remove(lost_one-1)
            answer += 1
        elif lost_one+1 in reserve_set :
            reserve_set.remove(lost_one+1)
            answer += 1
    
    return answer
