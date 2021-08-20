import timeit
printable = []
num = int(input("Enter a Number: \n"))
print("\n")
def solve():
    n = 0
    global num, printable
    while n < num:
        n += 1
        nums = []
        i = n+0
        temp = 0
        while i!=1:
            if i%2 == 0:
                i//=2
            elif i%2 == 1:
                i = (3*i)+1
            temp += 1
            nums.append(i)
        printable.append(f"{n}: {len(nums)}\n{nums[-3:]}\n")
    
print(timeit.timeit(solve,number=1))
print("\n")
for item in printable:
    print(item)

