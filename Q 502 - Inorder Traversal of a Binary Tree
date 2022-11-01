class newNode:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None

def insertLevelOrder(arr, i, n):
    root = None
    # Base case for recursion
    if i < n:
        root = newNode(arr[i])

        # insert left child
        root.left = insertLevelOrder(arr, 2 * i + 1, n)

        # insert right child
        root.right = insertLevelOrder(arr, 2 * i + 2, n)

    return root


def inOrder(root):
    if root != None and root.data != 0:
        inOrder(root.left)
        print(root.data, end=" ")

        inOrder(root.right)


# Driver Code
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    root = None
    root = insertLevelOrder(arr, 0, n)
    inOrder(root)
