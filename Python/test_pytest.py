import random
from LinkedList import LinkedList
from Node import Node

ll = LinkedList(Node(0))
current = ll.head
print(current.data)
ll.append(Node(1))
print(current.next.data)


def testEmptyLinkedList():
    ll = LinkedList()
    assert ll.head == None

def testAppend():
    n = 1000
    elements = random.sample(range(n ** 2), n)
    ll = LinkedList(Node(-1))
    current = ll.head
    assert current.data == -1
    for element in elements:
        ll.append(Node(element))
        current = current.next
        assert current.data == element
    i = 0
    current = ll.head.next
    while current:
        if n <= i:
            assert False
        assert current.data == elements[i]
        current = current.next
        i += 1

def testPop():
    n = 1000
    elements = random.sample(range(n ** 2), n)
    ll = LinkedList()
    for element in elements:
        ll.append(Node(element))
    i = n - 1
    while ll.head:
        current = ll.pop()
        if i < 0:
            assert current == None
        else:
            assert current.data == elements[i]
        i = i - 1