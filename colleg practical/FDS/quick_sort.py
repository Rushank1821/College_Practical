#function for 
def partition(array, low, high):
  pivot = array[high]
  i = low - 1
  for j in range(low, high):
    if array[j] <= pivot:
      i = i + 1
      (array[i], array[j]) = (array[j], array[i])
  (array[i + 1], array[high]) = (array[high], array[i + 1])
  return i + 1

def quickSort(array, low, high):
  if low < high:
    pi = partition(array, low, high)
    quickSort(array, low, pi-1)
    quickSort(array, pi+1, high)

#main body
n=int(input("Enter no of student :"))
marks=[]       #list for storing percentage of students.
for i in range(n):
    marks.append(float(input("Enter percentage :")))
print("Unsorted Array :",marks)
size=len(marks)
quickSort(marks, 0, size-1)
print("Array after sorting :",marks)
#code for top five score.
end=size-1
for i in range(5):
    print(i+1," ranker :",marks[end])
    end -= 1
