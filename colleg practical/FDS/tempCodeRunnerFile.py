#function for creating a list.
def create() :
    for i in range (n):
        a=int(input("Enter the number : "))
        l1.append(a)
    print(l1)
def average ():
    acount=0
    total=0
    for i in range (n):
        if (l1[i]>=0):
            total+=l1[i]
            acount=acount+1
    avg=total/acount
    print("The average marks of students is : ",avg)
    abs=n-acount
    print("The total number of abscent numbers is : ",abs)
def max():
    max_count=l1[0]
    for i in range (n):
        if (l1[i]>max_count):
            max_count=l1[i]
    print("The maximum number among the numbers is : ",max_count)
def min():
    min_count=l1[0]
    for i in range (n):
        if (min_count>l1[i]):
            min_count=l1[i]
    print("The minimum number among the numbers is : ",min_count)
def frequency():
    tl1=[]
    l2=l1
    for i in l1 :
        fcount=0
        for j in l2 :
            if (i==j):
                fcount+=1
        tl1.append(fcount)
    print(tl1)
    tl2=[]
    hfcount=0
    for i in range (n):
        if (tl1[i]>hfcount):
            hfcount=tl1[i]
    for i in range (n):
        if (tl1[i]==hfcount):
            if (l1[i] not in tl2):
                tl2.append(l1)
                print("The highest frequency is of ",l1[i]," and it is : ",hfcount)


#main program 

l1=[]
n=int(input("Enter the number of elements you want to enter in the list : "))
#creation of list
create()
#calculating average of the etries of list
average()
#finding the maximum number among the numbers in the list
max()
#finding the minimum number among the numbers in the list
min()
#calculating the highest frequency of the elements in the list
frequency()