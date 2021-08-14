import timeit

num = 1500000
def solve():
    allNums = []
    n = 0
    global num
    while n < num:
        n += 1
        nums = []
        i = n+0
        while i!=1:
            if i%2 == 0:
                i/=2
            elif i%2 == 1:
                i = (3*i)+1
            nums.append(i)
        print(f"{n}: {len(nums)}\n{nums[-3:]}\n")
        allNums.append((len(nums),n))
    allNums=sorted(allNums)
    return allNums[-50:]

# print(timeit.timeit(solve,number=1))
print(solve())

