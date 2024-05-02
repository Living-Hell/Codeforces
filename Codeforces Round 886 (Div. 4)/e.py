import math
import io,os,sys
input = io.BytesIO(os.read(0,os.fstat(0).st_size)).readline


for _ in range(int((input().decode()))):
    n,c = map(int,(input().decode()).split())
    apple = list(map(int,(input().decode()).split()))
    b = 0
    for i in range(len(apple)):
        c -= apple[i]**2
        b += 2*apple[i]
    qwer = -c
    dii = (b**2) - (4*n*qwer)

    sooool1 = (-b-math.sqrt(dii))/(2*n)
    sooool2 = (-b+math.sqrt(dii))/(2*n)
    
    print (int(max(sooool1,sooool2)//2))
    
 