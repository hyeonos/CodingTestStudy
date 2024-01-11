#### ========= problem 5086 ========= ####

import sys, io
file = open("inputs.txt", 'w')
# 다음 데이터에 그대로 여러 데이터를 복사붙여넣기 하면 됨
data = """8 16
32 4
17 5
0 0
"""
file.write(data)
file.close()
input_file = open("inputs.txt", "r") 
sys.stdin = io.StringIO(input_file.read())

import sys
# input = sys.stdin.readline
inputs = sys.stdin.readlines()

for onput in inputs[:-1] :
    A, B = map(int, onput.split())
    print(A, B)
    
    if B % A == 0 :
        print('factor')
    elif A % B == 0 :
        print('multiple')
    else :
        print('neither')