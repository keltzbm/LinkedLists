class LinkedList:
    def __init__(self, head = None) -> None:
        self.head = head

    def __sizeof__(self) -> int:
        pass

    def append(self, tail):
        if self.head:
            current = self.head
            while current.next:
                current = current.next
            current.next = tail
        else:
            self.head = tail

    def pop(self):
        if self.head and self.head.next:
            current = self.head
            previous = current
            while current.next:
                previous = current
                current = current.next
            previous.next = None
            return current
        elif self.head:
            current = self.head
            self.head = None
            return current
        else:
            return None

    def print(self):
        print("Head -> ", end = "")
        current = self.head
        while current:
            print(str(current.data) + " -> ", end = "")
            current = current.next
        print(current)