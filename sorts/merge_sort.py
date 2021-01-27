def merge_sort(arr):
    if len(arr) < 2:
        return arr

    middle = int(len(arr) / 2)
    left = merge_sort(arr[:middle])
    right = merge_sort(arr[middle:])

    result = []
    while left and right:
        if left[0] < right[0]:
            result.append(left.pop(0))
        else:
            result.append(right.pop(0))

    if left:
        result += left
    if right:
        result += right
    
    return result


if __name__ == "__main__":
    arr = [1, 10, 2, 8, 6, 4, 5, 3]
    print(merge_sort(arr))
