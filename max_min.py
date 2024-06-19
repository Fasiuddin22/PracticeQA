def max_min(arr):
    total_sum = sum(arr)
    min_element = min(arr)
    max_element = max(arr)
    min_sum = total_sum - min_element
    max_sum = total_sum - max_element

    print(f"{min_sum} {max_sum}")

arr = []
max_min(arr)
