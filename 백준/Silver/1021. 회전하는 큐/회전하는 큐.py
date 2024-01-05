from collections import deque

N, M = map(int, input().split())
input_list = list(map(int, input().split()))
list_n = deque([_ for _ in range(1, N + 1)])

cnt = 0

for i in input_list:
  while True:
    if list_n[0] == i:
      list_n.popleft()
      break
    elif list_n.index(i) < len(list_n) / 2:
      while list_n[0] != i:
        list_n.append(list_n.popleft())
        cnt += 1
    else:
      while list_n[0] != i:
        list_n.appendleft(list_n.pop())
        cnt += 1

print(cnt)