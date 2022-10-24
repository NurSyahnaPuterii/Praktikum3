x = int (input())
y = int (input())
z = int (input())

if x < y and x < z:
    print (x, y, z) 
elif x < z and z < y:
    print (x, z, y)
elif y < x and x < z :
    print (z, y, x)
elif y < z and z < x :
    print (y, z, x)
elif z < x and x < y :
    print (z, x, y)
else :
    print (z, y, x)