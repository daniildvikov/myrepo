def hash(value):
    return value % 100


def find_pairs(arr, summ):
    hash_table = [False] * 100

    for num in arr:
        if hash_table[hash(summ-num)]:
            print((num, summ-num))
        else:
            hash_table[hash(num)] = True


a = [1, 3, 4, 6, 7, 9]
b = 10
find_pairs(a, b)