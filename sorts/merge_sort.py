def merge_sort(arr):
    if len(arr) <= 1:
        return arr
    elif len(arr) == 2:
        if arr[0] > arr[1]:
            return [arr[1], arr[0]]
        else:
            return arr

    middle = int(len(arr) / 2)
    left = arr[:middle]
    right = arr[middle:]
    
    return merge_sort(left) + merge_sort(right)


if __name__ == "__main__":
    arr = [1, 10, 2, 8, 6, 4, 5, 3]
    print(merge_sort(arr))
