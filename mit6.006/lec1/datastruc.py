class StaticArray:
    def __init__(self, n):
        self.data = [None] * n
    def get_at(self, i):
        if not (0 <= i < len(self.data)): raise IndexError
        return self.data[i]
    def set_at(self, i, x):
        if not (0 <= i < len(self.data)): raise IndexError
        self.data[i] = x
    def build_from_list(self, lst):
        self.data = lst
    def _len_(self):
        return len(self.data)
    def __str__(self):
        return str(self.data)
    def insert_at(self, i, x):
        if not (0 <= i < len(self.data)): raise IndexError
        for j in range(len(self.data) - 1, i, -1):
            self.data[j] = self.data[j - 1]
        self.data[i] = x
    def delete_at(self, i):
        if not (0 <= i < len(self.data)): raise IndexError
        t= self.data[i]
        for j in range(i, len(self.data) - 1):
            self.data[j] = self.data[j + 1]
        self.data[len(self.data) - 1] = None
        return t
    def insert_first(self, x):
        self.insert_at(0, x)
    def delete_first(self):
        return self.delete_at(0)
    def insert_last(self, x):
        self.insert_at(len(self.data), x)
    def delete_last(self):
        return self.delete_at(len(self.data) - 1)

class Linked_List_Node:
    def __init__(self, x): 
        self.item = x
        self.next = None    
    def later_node(self, i): 
        if i == 0: return self
        assert self.next
        return self.next.later_node(i - 1)

class Linked_List:
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0
    def _len_(self):
        return self.size
    def insert_first(self, x):
        new_node = Linked_List_Node(x)
        new_node.next = self.head
        self.head = new_node
        self.size += 1
    def delete_first(self):
        if not self.head: raise IndexError
        t = self.head.item
        self.head = self.head.next
        self.size -= 1
        return t
    def insert_at(self, i, x):
        if i == 0:
            self.insert_first(x)
            return
        assert self.head
        prev_node = self.head.later_node(i - 1)
        new_node = Linked_List_Node(x)
        new_node.next = prev_node.next
        prev_node.next = new_node
        self.size += 1
    def delete_at(self, i):
        if i == 0: return self.delete_first()
        assert self.head
        prev_node = self.head.later_node(i - 1)
        t = prev_node.next.item
        prev_node.next = prev_node.next.next
        self.size -= 1
        return t
    def insert_last(self, x):
        new_node = Linked_List_Node(x)
        if not self.head:
            self.head = new_node
        else:
            self.tail.next = new_node
        self.tail = new_node
        self.size += 1
    def delete_last(self):
        if not self.head: raise IndexError
        if not self.head.next:
            t = self.head.item
            self.head = None
            self.size -= 1
            return t
        prev_node = self.head.later_node(self.size - 2)
        t = prev_node.next.item
        prev_node.next = None
        self.tail = prev_node
        self.size -= 1
        return t

class Dynamisc_Array:
    