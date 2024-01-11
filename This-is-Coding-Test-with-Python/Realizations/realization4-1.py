## 4-1 상하좌우
import time
import sys, io
file = open("inputs.txt", 'w')
# 다음 데이터에 그대로 여러 데이터를 복사붙여넣기 하면 됨
data = """5
R R R U D D
"""
file.write(data)
file.close()
input_file = open("inputs.txt", "r") 
sys.stdin = io.StringIO(input_file.read())

starttime = time.time()
import sys
input = sys.stdin.readline


N = int(input())
moving = [i for i in input().split()]
print(moving)

start = [1, 1]

for m in moving :
    if m == 'L' :
        if start[1] <= 1 : continue
        start[1] -= 1
    elif m == 'R' :
        if start[0] >= N : continue
        start[1] += 1
    elif m == 'U' :
        if start[0] <= 1 : continue
        start[0] -= 1
    elif m == 'D' :
        if start[0] >= N : continue
        start[0] += 1

print(start[0], start[1])


# n = int(input())
# x, y = 1, 1
# plans = input().split()

# dx = [0, 0, -1, 1]
# dy = [-1, 1, 0, 0]
# move_types = ['L', 'R', 'U', 'D']

# for plan in plans :
#     for i in range(len(move_types)) :
#         if plan == move_types[i] :
#             nx = x + dx[i]
#             ny = x + dy[i]
#     if nx < 1 or ny < 1 or nx > n or ny > n :
#         continue

#     x, y = nx, ny

# print(x, y)

print('걸린 시간 : ', time.time() - starttime)



# =========================================================
# 4-2.