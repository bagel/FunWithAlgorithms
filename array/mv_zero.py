# move zero

def mv_zero(arr):
    zero_index = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[zero_index], arr[i] = arr[i], arr[zero_index]
            zero_index += 1

    return arr


if __name__ == "__main__":
    arr = [1, 0, 2, 0, 0, 3, 4]
    mv_zero(arr)
    print(arr)
