def BinarySearch(A , l , r , x):
    if l < r:

        mid = (l+r) // 2
        
        if A[mid] == x :
            return mid
            
        elif A[mid] > x :
            return BinarySearch(A , l , mid-1 , x)

        else:
            return BinarySearch(A , mid +1  , r , x)

    else:
        return -1

A = [2,4,5,7,11,14,16,19]
x = 2

result = BinarySearch(A , 0 , len(A) - 1 , x)

if result != -1 :
    print("Element is found at the index " , str(result))
else:
    print("Element not found")
 