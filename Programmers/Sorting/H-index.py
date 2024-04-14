def solution(citations):
    sorted_ct = sorted(citations)[::-1]
    answer = 0
    
    for i, h in enumerate(sorted_ct) :
        if h == (i+1) :
            answer = h
            break
        elif h < (i+1) :
            answer = i
            break
        else :
            answer = len(citations)
    
    return answer

# 중앙값은 무조건 된다...?
