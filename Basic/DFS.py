"""
DFS (Depth-First Search)
깊이 우선 탐색.

그래프 형식으로 응용되는 탐색방법
시작 node를 지정하고, 거리가 가까운 node부터 파고 들어가 탐색한다.
stack의 형식을 사용하며, 구현은 재귀함수로 된다고 함.
"""

def dfs(graph, start, visited) :
    # visited = [False] * len(graph)
    
    visited[start] = True
    print(visited)
    
    for i in graph[start] :
        if not visited[i] :
            dfs(graph, i, visited)


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

dfs(graph, 1, visited)