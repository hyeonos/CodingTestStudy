# Page 92

import io
import sys
file = open("inputs.txt", 'w')
# 다음 데이터에 그대로 여러 데이터를 복사붙여넣기 하면 됨
data = """5 8 3
2 4 5 4 6
"""
file.write(data)
file.close()
input_file = open("inputs.txt", "r") 
sys.stdin = io.StringIO(input_file.read())



import sys
input = sys.stdin.readline

# N : 배열의 크기, M : 숫자가 더해지는 횟수, K : 연속으로 초과하면 안 되는 횟수
N, M, K = map(int, input().split())
arr = [i for i in map(int, input().split())]

arr.sort(reverse=True)
print(arr)

maxsum = arr[0] * (M // K) * K + arr[1] * (M % K)

print(maxsum)