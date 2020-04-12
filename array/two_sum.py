def two_sum(arr, target):
    j = len(arr) - 1
    i = 0
    while i <= j:
        if arr[i] + arr[j] == target:
            return i, j
        elif arr[i] + arr[j] > target:
            j -= 1
        elif arr[i] + arr[j] < target:
            i += 1

    return None, None


if __name__ == "__main__":
    arr = [1, 3, 4, 6, 7, 11, 12]
    target = 14
    i, j = two_sum(arr, target)
    print(arr[i], arr[j], target)
