# INSERTION SORT   

def InsertionSort(A):

    for i in range(1 , len(A)):

        key = A[i]

        j = i-1
        while j >=0 and key < A[j] :
                A[j+1] = A[j]
                j -= 1
        A[j+1] = key

A = [12, 11, 13, 5,6]
InsertionSort(A)
for i in range(len(A)):
    print("%d" %A[i])

 


