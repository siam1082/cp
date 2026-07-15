t = int(input())
for _ in range(t):
    s = input().strip()
    l = s.find('1')
    r = s.rfind('1')
    
    cnt = 0
    if l != -1 and r != -1:
        cnt = s[l:r+1].count('0')
    
    print(cnt)
