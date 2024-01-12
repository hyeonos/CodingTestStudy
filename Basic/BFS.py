"""
BFS (Breadth-First Search)
넓이 우선 탐색.

그래프 형식으로 응용되는 탐색방법
시작 node를 지정하고, 방문하지 않은 node를 거리순으로 모두 등록 후
가까운 순으로 방문하지 않은 node를 방문하며 반복해서 인접 node 중 방문하지 않은 node를 등록한다.
queue 형식을 사용하며, 구현도 queue로 된다고 함.
"""

from collections import deque

def bfs(graph, start, visited) :
    # visited = [False] * len(graph)
    
    queue = deque([start])
    visited[start] = True
    
    # queue.append(start)
    
    while queue :
        print(queue)
        next = queue.popleft()
        
        for i in graph[next] :
            if not visited[i] :
                queue.append(i)
                visited[i] = True


# graph 형태 정의
graph = [
    [],
    [2, 3, 8],              # 시작 node는 1번째. 2, 3, 8 node에 연결되어 있음을 나타냄
    [1, 7],                 # node간의 순서는 열의 index로 판단하는 것 같다. 만약 [1, 7]이라면 현재 2번째 node에서 1이 더 가깝다는 뜻
    [1, 4, 5],
    [3, 5],
    [3, 4],
    [7],
    [2, 6, 8],
    [1, 7]
]

visited = [False] * len(graph)

bfs(graph, 1, visited)