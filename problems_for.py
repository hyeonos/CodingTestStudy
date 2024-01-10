"""문제
준원이는 저번 주에 살면서 처음으로 코스트코를 가 봤다. 정말 멋졌다.
그런데, 몇 개 담지도 않았는데 수상하게 높은 금액이 나오는 것이다!
준원이는 영수증을 보면서 정확하게 계산된 것이 맞는지 확인해보려 한다.

영수증에 적힌,

구매한 각 물건의 가격과 개수
구매한 물건들의 총 금액
을 보고, 구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하는지 검사해보자.

입력
첫째 줄에는 영수증에 적힌 총 금액 
$X$가 주어진다.

둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 
$N$이 주어진다.

이후 
$N$개의 줄에는 각 물건의 가격 
$a$와 개수 
$b$가 공백을 사이에 두고 주어진다.

출력
구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하면 Yes를 출력한다. 일치하지 않는다면 No를 출력한다."""

# 구매한 각 물건의 가격과 개수
# 구매한 물건들의 총 금액

total = int(input())
n = int(input())
sum = 0

for i in range(n) :
    fee, num = map(int, input().split())
    sum += fee * num

if total == sum :
    print("Yes")
else :
    print("No")
    
    
    
    
    
# 문제 25314

n = int(input())
print("long " * (n//4) + "int")


""" 
본격적으로 for문 문제를 풀기 전에 주의해야 할 점이 있다. 입출력 방식이 느리면 여러 줄을 입력받거나 출력할 때 시간초과가 날 수 있다는 점이다.

C++을 사용하고 있고 cin/cout을 사용하고자 한다면, cin.tie(NULL)과 sync_with_stdio(false)를 둘 다 적용해 주고, endl 대신 개행문자(\n)를 쓰자.
단, 이렇게 하면 더 이상 scanf/printf/puts/getchar/putchar 등 C의 입출력 방식을 사용하면 안 된다.

Java를 사용하고 있다면, Scanner와 System.out.println 대신 BufferedReader와 BufferedWriter를 사용할 수 있다.
BufferedWriter.flush는 맨 마지막에 한 번만 하면 된다.

Python을 사용하고 있다면, input 대신 sys.stdin.readline을 사용할 수 있다.
단, 이때는 맨 끝의 개행문자까지 같이 입력받기 때문에 문자열을 저장하고 싶을 경우 .rstrip()을 추가로 해 주는 것이 좋다.

"""

import sys

# T = int(input())
T = int(sys.stdin.readline().rstrip())

for i in range(T) :
    a, b = map(int, sys.stdin.readline().rstrip().split())
    print(a + b)




# 문제 11021번
import sys
T = int(sys.stdin.readline().rstrip())

for i in range(T) :
    a, b = map(int, input().split())
    print(f"Case #{i+1}: {a+b}")
    


# 문제 11022번
import sys
T = int(sys.stdin.readline().rstrip())

for i in range(T) :
    a, b = map(int, input().split())
    print(f"Case #{i+1}: {a} + {b} = {a+b}")



# 문제 2439
import sys
n = int(sys.stdin.readline().rstrip())

for i in range(n) :
    print(' ' * (n-1-i) + '*' * (i+1))
    
    

# 문제 10952번
import sys
# T = int(sys.stdin.readline().rstrip())

while True :
    a, b = map(int, sys.stdin.readline().rstrip().split())
    if a <= 0 or b >= 10 :
        break
    print(a+b)
    
    
# 문제 10951. 입력이 끝날 때까지 A+B를 출력하는 문제
# 입력이 끝났다 -> EOFError 반환
import sys
# T = int(sys.stdin.readline().rstrip())

while True :
    try :
        a, b = map(int, sys.stdin.readline().rstrip().split())
        if a <= 0 or b >= 10 :
            break
        print(a+b)
    except EOFError :
        break
    except ValueError :
        break