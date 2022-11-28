# fds assignment of operation on matrix.

#function for creation of matrix
def creation(row, column, matrix):
    for i in range (row):
        create=[]
        for j in range (column):
            element=int(input("Enter the element of the matrix : "))
            create.append(element)
        matrix.append(create)

#function for printing of matrix 
def c_display(row, column, matrix):
    for i in range (row):
        for j in range (column):
            print(matrix[i][j],end=" ")
        print( )

#function for addition of the two matrix.
def addition(row, column, matrix1, matrix2, matrix3):
    for i in range (row):
        addi=[]
        for j in range (column):
            addi.append(matrix1[i][j]+matrix2[i][j])
        matrix3.append(addi)
def a_display (row, column, matrix):
    for i in range (row):
        for j in range (column):
            print(matrix[i][j],end=" ")
        print( )
#function for substraction of the two matrix.
def substraction (row, column, matrix1, matrix2, matrix3):
    for i in range (row):
        diff=[]
        for j in range (column):
            diff.append(matrix1[i][j]-matrix2[i][j])
        matrix3.append(diff)
def d_display (row, column, matrix):
    for i in range (row):
        for j in range (column):
            print(matrix[i][j],end=" ")
        print( )
#function for getting transpose of a matrix
def transpose(row, column, initial_matrix, transposed_matrix):
    for i in range (row):
        m=i
        trans=[]
        for j in range (column):
            n=j
            temp=m
            m=n
            n=temp
            trans.append(initial_matrix[m][n])
        transposed_matrix.append(trans)
        for j in range (column):
            print(transposed_matrix[i][j],end=" ")
        print( )
#function for multiplic of two matrix
def multiplication(row,column,mat1,mat2):
    if(row==column):
        
        multi=[]
        for i in range (row):
            a=[]
            for j in range (row):
                sum1=0
                for n in range (column):
                    mut= mat1[i][n] * mat2[n][j]
                    sum1=sum1+mut
                a.append(sum1)
            multi.append(a)
            
    
        print("The multiplication of matrix  is :")
        for i in range (row):
                for j in range (column):
                    print(multi[i][j],end=" ")
                print()
    

def m_display (row, column, matrix3):
    print(row, column)
    print(matrix3[2][2])
    for i in range (row):
        for j in range (column):
            print(matrix3[i][j],end=" ")
        print( )
    # for i in matrix3 :
    #     print(matrix3)


# main program

matrix1=[]#first user intput matrix
matrix2=[]#second user input matrix
matrix3=[]#matrix for addition
matrix4=[]#matrix for substracrion
matrix5=[]#matrix for transpose
matrix6=[]#matrix for multiplication
a=[]
print("The two matrix you want to enter should be of equal rows and columns . \n")
row=int(input("Enter the number of rows you want in your matrix : "))
column=int(input("Enter the number of column you want in your matrix : "))
print("\n")
#creation of two matrix .
print("Enter the matrix elements for the first matrix.")
creation(row, column, matrix1)
c_display(row, column, matrix1)
print("Enter the matrix elements for the second matrix.")
creation(row, column, matrix2)
c_display(row, column, matrix2)
print("\n")
#calculating the addition of the two matrix.
print("After addition of the two matrix their sum is : \n")
addition(row, column, matrix1, matrix2, matrix3)
a_display(row, column, matrix3)
print("\n")
#calculating substraction of the matrix.
print("After substraction of the two matrix their difference is : \n")
substraction(row, column, matrix1, matrix2, matrix4)
d_display(row, column, matrix4)
print("\n")
#transpose of a matrix
print("The transpose of the added matrix is : \n")
transpose(row, column, matrix3, matrix5)
print("\n")
#multiplication of two matrix
print("The matrix after multiplication is : ")
multiplication(row,column,matrix1,matrix2)