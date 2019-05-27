def readArr(len):
	arr = list()
	for i in range(len):
		arr.append(int(input("Inserire valore " + str(i+1) + ": ")))
	return arr

def occurrences(arr):
	first = arr[0]
	i = 0
	for item in arr:
		if item == first:
			i+=1
	return i


def main():
	try:
		n = int(input("Inserire la quantità di numeri da leggere: "))
	except ValueError:
		print("Non è stato inserito un valore numerico.")
		return
	
	VET = readArr(n)
	print("Occorrenze del numero " + str(VET[0]) + ": " + str(occurrences(VET)))


if __name__ == '__main__':
	main()
	input("Premi INVIO per continuare...")