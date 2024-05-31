from datetime import date
tmp=input().split(':')
d1 = date(int(tmp[0]),int(tmp[1]), int(tmp[2]))
tmp=input().split(':')
d2 = date(int(tmp[0]),int(tmp[1]), int(tmp[2]))
delta = d2 - d1
print(abs(delta.days))