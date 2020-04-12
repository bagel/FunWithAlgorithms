# remove dumplicates

def rm_dump(arr):
    i = 0
    for j in range(1, len(arr)):
        if arr[j] > arr[i]:
            i += 1
            arr[i] = arr[j]

    return i + 1


if __name__ == "__main__":
    arr = [1, 1, 2, 2, 2, 3, 4, 4, 5]
    print(rm_dump(arr))
    print(arr)

