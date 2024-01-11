import sys, io
file = open("inputs.txt", 'w')
# 다음 데이터에 그대로 여러 데이터를 복사붙여넣기 하면 됨
data = """5
6 3 2 10 -10
8
10 9 -5 2 3 4 5 -10
"""
file.write(data)
file.close()
input_file = open("inputs.txt", "r") 
sys.stdin = io.StringIO(input_file.read())


import sys
input = sys.stdin.readline

N = int(input())
havelist = set(map(int, input().split()))
M = int(input())
getlist = list(map(int, input().split()))
print(N, havelist)
print(M, getlist)

for get in getlist :
    if get in havelist :
        print(1, end=" ")
    else :
        print(0, end=' ')