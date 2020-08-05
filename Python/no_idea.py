n, m = map(int, raw_input().strip().split())
arr = map(int, raw_input().strip().split())
a = map(int, raw_input().strip().split())
b = map(int, raw_input().strip().split())

like = set(a)
dislike = set(b)

happiness = 0
for e in arr:
  if e in like:
    happiness += 1
  elif e in dislike: 
    happiness -= 1

print (happiness)
