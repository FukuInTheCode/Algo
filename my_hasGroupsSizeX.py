def hasGroupsSizeX(deck: list[int]) -> bool:
    pass


def findMultiple(int):
    yield 1
    for i in range(2, int):
        if int % i == 0:
            yield i

    yield int


print(list(findMultiple(1787)))
