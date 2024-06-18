def plus_minus(arr):
    arr_count = len(arr)
    pos = 0
    neg = 0
    zero = 0
    for i in arr:
        if i > 0:
            pos = pos + 1
        elif i == 0:
            zero = zero + 1
        elif i < 0:
            neg = neg + 1
    pos_ratio = pos/arr_count
    neg_ratio = neg/arr_count
    zero_ratio = zero/arr_count

    print(f"{pos_ratio:.6f}")
    print(f"{neg_ratio:.6f}")
    print(f"{zero_ratio:.6f}")


arr = [-2,-1,0,1,2]
plus_minus(arr)

