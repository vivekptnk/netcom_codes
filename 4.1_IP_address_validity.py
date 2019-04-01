# IP Address Validity
print("Enter the IP address")
s = list(map(int, input().split('.'))) print(s)
flag = False
for i in s:
    if(i > 255 or i < 0):
        flag = True
        break
if(flag == False and len(s) == 4):
    print("IP address is valid")
else:
    print("Invalid IP address")
