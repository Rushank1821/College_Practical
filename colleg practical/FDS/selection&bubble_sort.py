#function for selection sort.
def ssort(arr,l):
    print("Before selection sorting\n",arr)
    for i in range(l):
        m=i
        for j in range(i+1,l):
            if(arr[j]<arr[m]):
                m=j
        arr[i],arr[m]=arr[m],arr[i]
    print("After selection sorting\n",arr)

#function for bubble sort.
def bsort(arr,l):
    print("Before Bubble  sorting\n",arr)
    for i in range(l-1):
        for j in range(l-i-1):
            if(arr[j]>arr[j+1]):
                arr[j],arr[j+1]=arr[j+1],arr[j]
    print("After Bubble sorting \n",arr)
        
k=1
while(k==1):
    marks=[]
    n=int(input("Enter number of students :"))
    for i in range(n):
        e=int(input("Enter element : "))
        marks.append(e)
    print("\nSelect the format for sorting :")
    print("1: Selection sort")
    print("2: Bubble sort")
    print("3: Exit")
    ch=int(input("Enter your choice :"))
    if(ch==1):
        ssort(marks,n)
    elif(ch==2):
        bsort(marks,n)
    elif(ch==3):
        break
    else:
        print("Please enter correct choice...!")
