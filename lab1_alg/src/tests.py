import pytest
from main import *

def test1():
    ull = UnrolledLL()
    for i in range(3):
        ull.insert(i, i)
    ull.insert(3, 0)
    assert ull.__str__() == "[3, 0, 1, 2]"

def test2():
    ull = UnrolledLL()
    for i in range(3):
        ull.insert(i, i)
    ull.delete(1)
    assert ull.__str__() == "[0, 2]"

def test3():
    ull = UnrolledLL(2)
    for i in range(3):
        ull.insert(i, i)
    with pytest.raises(IndexError):
        ull.delete(3)

def test4():
    ull = UnrolledLL()
    for i in range(8):
        ull.insert(i, i)
    assert ull.foundIndex(5).__str__() == '5'