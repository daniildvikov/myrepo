def hash(value):
    return value % 10000
def find_dublicates(nums, summ):
    hash_set = set()
    dublicates = []
    for num in nums:
        complement = hash(summ) - hash(num)
        if complement in hash_set:
            dublicates.append((complement, num))
        hash_set.add(hash(num))
    return dublicates

nums = [1, 3, 4, 6, 7, 9, 101]
summ = 10
dublicate_p = find_dublicates(nums, summ)
print(dublicate_p)
