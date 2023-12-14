class Node:
    def __init__(self):
        self.arr = []
        self.next = None

class UnrolledLL:
    def __init__(self, n_array=4):
        self.n_array = n_array
        self.length = 0
        self.head = None

    def get_len(self):
        return self.length

    def get_head(self):
        return self.head

    def __str__(self):
        tmp = self.head
        result_lst = []
        while tmp:
            result_lst.append(tmp.arr)
            tmp = tmp.next
        return " ".join(map(str, result_lst))

    def foundIndex(self, value):
        tmp = self.head
        index = 0
        while tmp:
            if value in tmp.arr:
                index = index + tmp.arr.index(value)
                return index
            else:
                index += len(tmp.arr)
                tmp = tmp.next

    def insert(self, data, index):
        if index < 0:
            index += self.length + 1

        self.length += 1
        if not self.head:
            self.head = Node()
            self.head.arr.append(data)
            return

        tmp = self.head
        while tmp.next and index > len(tmp.arr):
            index -= len(tmp.arr)
            tmp = tmp.next
        tmp.arr.insert(index, data)

        if len(tmp.arr) > self.n_array:
            new_n = Node()
            new_n.arr.extend(tmp.arr[self.n_array // 2:])
            new_n.next = tmp.next
            tmp.next = new_n
            tmp.arr = tmp.arr[:self.n_array // 2]


    def delete(self, index):
        if index < 0:
            index += self.length

        self.length -= 1
        tmp = self.head
        prev_n = None
        while(tmp):
            if index < len(tmp.arr):
                break
            index -= len(tmp.arr)
            prev_n = tmp
            tmp = tmp.next
        else:
            raise IndexError("Index is out of range")
        tmp.arr.pop(index)
        if len(tmp.arr) == 0:
            if prev_n is None:
                self.head = tmp.next
            else:
                prev_n.next = tmp.next



def check(array1, array2, n_array = 4):
    ull = UnrolledLL(n_array)

    for i in range(len(array1)):
        ull.insert(array1[i], i)
        print(ull)
    for j in array2:
       index = ull.foundIndex(j)
       ull.delete(index)
       print(ull)