import json
i = 113383
temp = 1
dic = {}
while i!=1:
    if i%2 == 0:
        i=i//2
    elif i%2 == 1:
        i = (3*i)+1
    dic[str(temp)] = i
    temp += 1
    if temp > 1000:
        print("temp > 1000")
        break

filew = open('python.json', "w")
json.dump(dic, filew)

