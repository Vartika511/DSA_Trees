def lca(root , v1 , v2):
    # make sure v2 > v1
    if v1 > v2: v1, v2 = v2, v1
    # traverse until terminal
    while True:
        if v1 < root.info and v2 < root.info:
            root = root.left
        elif v1 > root.info and v2 > root.info:
            root = root.right
        else:
            return(root)
