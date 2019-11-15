li=[]
for i in range(0, 201):
    if i%5 != 0 and i%7 == 0:
        li.append(i)
print( ", ".join( repr(e) for e in li ) )