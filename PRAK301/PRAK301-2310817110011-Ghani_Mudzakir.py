a,b,c = map(int, input().split())

if (a<b):
        if (a<c):
            if (c<b):
                print(f"{a} {c} {b}")
            if (c>b):
                print(f"{a} {b} {c}")
        if (a>c):
            if (c<b):
                print(f"{c} {a} {b}")
    
elif (a>b):
        if (a<c):
            if (c>b):
                print(f"{b} {a} {c}")
        if (a>c):
            if (c<b):
                print(f"{c} {b} {a}")
            if (c>b):
                print(f"{b} {c} {a}")
            
        

    



