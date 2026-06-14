def printSelf(s):
    for c in s:
        if c == chr(63):
            print(repr(s), end='')
        else:
            print(c, end='')

self = """def printSelf(s):\n    for c in s:\n        if c == chr(63):\n            print(repr(s), end='')\n        else:\n            print(c, end='')\n\nself = ?\nprintSelf(self)\n"""
printSelf(self)
