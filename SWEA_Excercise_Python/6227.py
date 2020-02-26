li=[]
for i in range(100, 301):
    if i%2 == 0 and i//10%2 ==0 and i/100%2==0 :
        li.append(i)

print( ",".join( repr(e) for e in li ) )