import timeit

num = 150
def solve():
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

print(timeit.timeit(solve,number=1))

