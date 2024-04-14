def solution(number, k):
    max_len = len(number)-k
    
    max_num = []
    for i, num in enumerate(number) :
        if k <= 0  :
            max_num.append(number[i:])
            break
        elif i == len(number)-k and max_num[-1] >= num and max(number) in max_num :
            break
        
        while len(max_num) > 0 and k > 0 :
            if max_num[-1] < num :
                max_num.pop()
                k -= 1
            else :
                break
        max_num.append(num)

    answer = ''.join(max_num)
    
    return answer
