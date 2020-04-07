def swap(arr, i, j):
    tmp = arr[i]
    arr[i] = arr[j]
    arr[j] = tmp

def bubble_sort(arr):
    for i in range(len(arr) - 1):
        for j in range(len(arr) - 1 - i):
            if arr[j] > arr[j + 1]:
                swap(arr, j, j + 1)

    return arr


if __name__ == "__main__":
    arr = [1, 10, 3, 6, 2, 4, 8, 5, 12, 1, 1, 0, 13, 0]
    print(bubble_sort(arr))
