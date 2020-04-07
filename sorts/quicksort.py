def quicksort(arr):
    if len(arr) <= 1:
        return arr

    choice = int(len(arr) / 2)
    pivot = arr[choice]

    left = []
    right = []
    for i in range(len(arr)):
        if i == choice:
            continue

        if arr[i] < pivot:
            left.append(arr[i])
        else:
            right.append(arr[i])

    return quicksort(left) + [pivot] + quicksort(right)


if __name__ == "__main__":
    arr = [3, 1, 10, 2, 4, 6, 7, 12, 8, 5]
    print(quicksort(arr))
