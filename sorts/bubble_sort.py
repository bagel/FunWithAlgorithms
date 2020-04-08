def bubble_sort(arr):
    for i in range(len(arr) - 1):
        is_changed = False

        for j in range(len(arr) - 1 - i):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                is_changed = True

        if is_changed == False:
            break

    return arr


if __name__ == "__main__":
    arr = [1, 10, 2, 3, 8, 4, 5, 12, 0, 0, 0]
    print(bubble_sort(arr))
