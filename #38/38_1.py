def readArr(len):
	arr = list()
	for i in range(len):
		try:
			arr.append(int(input("Inserire valore " + str(i+1) + ": ")))
		except ValueError:
			return False
	return arr

def checkOrder(arr):
	last = arr[0]
	for current in arr[1:]:
		if last > current:
			return False
		last = current
	return True
	

def main():
	try:
		n = int(input("Inserire la quantità di numeri da leggere: "))
	except ValueError:
		print("Non è stato inserito un valore numerico.")
		return
	
	VET = readArr(n)
	#if VET:
	#	print("Valori errati.")
	#	return
	print("Vettore: " + str(VET))
	if checkOrder(VET):
		print("Ordinato in ordine crescente.")
	else:
		print("Non ordinato in ordine crescente.")


if __name__ == '__main__':
	main()
