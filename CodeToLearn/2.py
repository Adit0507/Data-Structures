def BinarySearch(A, x):
    l = 0
    r = len(A) -1
    mid = 0

    while l < r: 

        mid = (l+r)//2 

        if A[mid] < x:
            l = mid +1
        
        elif A[mid] > x:
            r = mid-1

        else:
            return mid

    return -1

A = [2,4,6,11,15,18,19]
x = 15 

result = BinarySearch(A , x)

if result != -1:
        print("Element is found at the index " , str(result))
else:
    print("Element is not present")




