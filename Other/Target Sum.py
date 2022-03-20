arr = [2, 7, 11, 15]
target = 9
found = False

for i in range (0,len(arr)):
	for j in range (1, len(arr)):
		if int(arr[i]) + int(arr[j]) == target:
			found = True
			print(i,j)
			break
		else:
			pass
	if found == True:
		break