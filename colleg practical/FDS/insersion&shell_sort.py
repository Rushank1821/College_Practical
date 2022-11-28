def getdata():
    for i in range(n):
        e=int(input("Enter marks - "))
        arr.append(e)
    print(arr)
    
    
def insort():
    for i in range(1,n):
        a=arr[i]
        j=i-1
        while j >= 0 and a < arr[j]:
            arr[j+1] = arr[j]
            j=j-1
        arr[j+1]=a
    print(arr)
    


arr=[]
n=int(input("Enter no of student - "))
getdata()
insort()
