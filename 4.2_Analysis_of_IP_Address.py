# Analysis of IP Address with s subnet masks


print("Enter the ip adresss along with the mask")
a = input().split('/')  # splitting
b = list(map(int, a[0].split('.')))
print("Address :" + ''.join(a[0]))
c = 32-int(a[1])
d = int(a[1])
temp = '1'*d + '0'*c
print("Mask for first address:" + temp)
l = []  # list
t = temp[0:8]
m = 0

for i in t:
    if(i == '1'):
        m *= 2
        m += 1
    else:
        m *= 2

l.append(m & b[0])

t = temp[8:16]
m = 0

for i in t:
    if(i == '1'):
        m *= 2
        m += 1
    else:
        m *= 2

l.append(m & b[1])

m = 0
t = temp[16:24]

for i in t:
    if(i == '1'):
        m *= 2
        m += 1
    else:
        m *= 2

l.append(m & b[2])
m = 0
t = temp[24:32]

for i in t:
    if(i == '1'):
        m *= 2
        m += 1
    else:
        m *= 2

l.append(m & b[3])
l = map(str, l)

print("First Address is :" + '.'.join(l))


###########################


temp = '0'*d + '1'*c
print("Mask for last address (Complement) :" + temp)
l = []  # list
t = temp[0:8]
m = 0
for i in t:
    if(i == '1'):
        m *= 2
        m += 1
    else:
        m *= 2

l.append(m | b[0])

t = temp[8:16]
m = 0
for i in t:
    if(i == '1'):
        m *= 2
        m += 1
    else:
        m *= 2

l.append(m | b[1])

m = 0
t = temp[16:24]

for i in t:
    if(i == '1'):
        m *= 2
        m += 1
    else:
        m *= 2

l.append(m | b[2])

m = 0
t = temp[24:32]

for i in t:
    if(i == '1'):
        m *= 2
        m += 1
    else:
        m *= 2

l.append(m | b[3])
l = map(str, l)

print("Last Address is :" + '.'.join(l))


##################################


ans = 0
for i in temp:
    if(i == '1'):
        ans = ans*2
        ans += 1
    else:
        ans = ans*2
print("Number of addresses is :"+str(ans+1))

##################################

temp = '1'*d + '0'*c
ans = 0
if(b[0] in range(1, 127)):
    print("Class A")
    for i in range(8, 32):
        if(temp[i] == '1'):
            ans += 1
elif(b[0] in range(128, 192)):
    print("Class B")
    for i in range(16, 32):
        if(temp[i] == '1'):
            ans += 1
elif(b[0] in range(192, 224)):
    print("Class C")
for i in range(24, 32):
    if(temp[i] == '1'):
        ans += 1
print("Number of Subnets :" + str(2**ans))
