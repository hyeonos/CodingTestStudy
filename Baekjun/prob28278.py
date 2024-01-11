#### ========= problem 28278 ========= ####

import sys, io
file = open("inputs.txt", 'w')
# 다음 데이터에 그대로 여러 데이터를 복사붙여넣기 하면 됨
data = """9
4
1 3
1 5
3
2
5
2
2
5
"""
file.write(data)
file.close()
input_file = open("inputs.txt", "r") 
sys.stdin = io.StringIO(input_file.read())

import sys
input = sys.stdin.readline

N = int(input())
stack = list()

for i in range(N) :
    order = input()
    # print('stack ', stack)
    if int(order[0]) == 1 :     # order == 1 일 때
        stack.append(int(order.split()[-1]))
    else :
        if int(order) == 2 :
            try :
                print(stack.pop(-1))
            except :
                print(-1)
        elif int(order) == 3 :
            print(len(stack))
        elif int(order) == 4 :
            if len(stack) == 0 : print(1)
            else : print(0)
        elif int(order) == 5 :
            try :
                print(stack[-1])
            except :
                print(-1)