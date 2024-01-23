tmpStr = "this, is ,some, string"
strArr = tmpStr.split(", ")
print("start")
for el in strArr:
    print(el)

print("end ", len(strArr))