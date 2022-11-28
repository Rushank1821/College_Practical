#program for writing a string and operations of the string.

#function for finding frequency of a letter in a string.
def freq(entry):
    count=0
    ele=input("Enter the letter you want to check for the string : ")
    for i in entry :
        if (i==ele):
            count+=1
    print("The frequency of "+ele+" in the string is : ",count)

#function to find the maximum word of the string.
def maximum (entry):
    a=entry.split()
    print(a)
    max1=-1
    for i in a: 
        if (len(i)>=max1):
            max1=len(i)
            b=i
    print("The word with maximum length is : ",b,"\nAnd the length of "+b+" is : ",max1)

#function to check for the palindrome of the string.
def pali(entry):
    length=len(entry)
    j=length-1
    const=0
    for i in range (int(length/2 +1)):
        if (entry[i]!=entry[j]):
            const=1
            break
        else :
            j-=1
    if (const==1):
        print("The entred string is not a palindrome.")
    else :
        print("The entred string is a palindrome.")

#finding appearence of a word in the given string.
def word (entry) :
    word=input("Enter the word you want to search in the string : ")
    wcount=0
    for i in range (len(entry)) :
        if (entry[i]==word):
            wcount+=1
    print("The word "+word+" is appearing ",wcount," times in the given string.")

#function for finding the index of given string .
def find (entry):
    find=input("Enter the word you want to search in the string : ")
    flist=entry.split()
    for i in range(len(flist)) : 
        if (flist[i]==find):
            print("The index of the word "+flist[i]+" is : ",i)
            break


#main program.

#taking input of a string from the user.
entry=input("Enter the srting : ")
freq(entry)
maximum(entry)
pali(entry)
word(entry)
find(entry)