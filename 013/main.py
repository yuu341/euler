

file = open("input")
sum = 0

for each in file.readlines():
    sum += int(each)

print str(sum)[0:10]


