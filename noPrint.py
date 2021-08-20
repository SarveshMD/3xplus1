num = int(input("Enter a Number: \n"))
print("Crunching the numbers...")
n = 0
arr = []
while n < num:
    n += 1
    i = n+0
    temp = 0
    arr[n-1][temp+1] = i+0
    while i!=1:
        if i%2 == 0:
            i/=2
        elif i%2 == 1:
            i = (3*i)+1
        temp += 1
        arr[n-1][temp+1] = i+0
    arr[n-1][0] = temp+1
print("Calculation Completed Successfully...")
l1 = 0
for l1 in range(num):
    print(f"\n{arr[l1][1]}: {arr[l1][0]}")
    if arr[l1][0]>=3:
        l2 = arr[l1][0]-3
    else:
        l2 = 0
    while l2<arr[l1][0]:
        print(f"{arr[l1][l2+1]}, ")
        l2 += 1
    print("\b\b]")
