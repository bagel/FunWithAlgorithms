# stock

def stock(arr):
    min_s = arr[0]
    max_s = arr[0]
    for i in range(1, len(arr) - 1):
        #print(i, min_s, max_s)
        if arr[i] < arr[i - 1]:
            min_s = arr[i]
            max_s = arr[i]
        elif arr[i] > arr[i - 1]:
            max_s = arr[i]

        if arr[i + 1] < arr[i]:
            print(min_s, max_s)


if __name__ == "__main__":
    arr = [100, 80, 120, 130, 70, 60, 100, 125]
    stock(arr)

