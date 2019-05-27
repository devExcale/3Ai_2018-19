def readArr(len):
	arr = list()
	for i in range(len):
		arr.append(float(input("Inserire valore " + str(i+1) + ": ")))
	return arr

def shared(arr1, arr2):
	res = list()
	for i in range(len(arr1)):
		if arr1[i] == arr2[i]:
			res.append(arr1[i])
	return res
		

def main():
	n = int(input("Inserire la quantità di numeri da leggere: "))
	
	print("[VETTORE 1]:")
	v1 = readArr(n)
	print("[VETTORE 2]:")
	v2 = readArr(n)
	
	print()
	print("Vettori:")
	print(v1)
	print(v2)
	print("Comuni:\n" + str(shared(v1, v2)))


if __name__ == '__main__':
	main()
	input("Premi INVIO per continuare...")