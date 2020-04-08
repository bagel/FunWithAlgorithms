def selection_sort(arr):
    for i in range(len(arr) - 1):
        min_index = i
        for j in range(i, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j

        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]

    return arr


if __name__ == "__main__":
    arr = [2, 10, 5, 1, 8, 9, 6, 4, 7, 3]
    print(selection_sort(arr))
