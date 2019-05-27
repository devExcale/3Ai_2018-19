def sumArr(arr):
	var = 0
	try:
		for item in arr:
			item = int(item)
			if item != 0:
				var += item
			else:
				break
	except ValueError:
		return False
	
	return var

def readArr(len):
	arr = list()
	for i in range(len):
		try:
			arr.append(int(input("Inserire valore " + str(i+1) + ": ")))
		except ValueError:
			return False
	return arr


def main():
	try:
		n = int(input("Inserire la quantità di numeri da leggere: "))
	except ValueError:
		print("Non è stato inserito un valore numerico.")
		return
	
	VET = readArr(n)
	if(not VET):
		print("Illegal character")
		return
	print(VET)
	vsum = sumArr(VET)
	if vsum:
		print(vsum)
		

if __name__ == '__main__':
	main()
	input("Premi INVIO per continuare...")