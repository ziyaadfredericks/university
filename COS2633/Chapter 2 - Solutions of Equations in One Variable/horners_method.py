# Finds the roots of a polynomial equation by using Horner’s Method.

import math

'''
def equation(x):
	return 2 * pow(x, 4) - 3 * pow(x, 2) + 3 * x - 4

def derivative(x):
	return 8 * pow(x, 3) - 6 * x + 3
'''

def horner(a, x, y, z, i):
	if(i < len(a) - 1):
		y = x * y + a[len(a) - i - 1]
		z = x * z + y
		horner(a, x, y, z, i + 1)
	else:
		y = x * y - 4
		print("\n(y" + str(i) + ", z" + str(i) + ") = (" + str((y, z)) + ")")

def main():
	a = []

	n = int(input("n = "))
	x = int(input("x = "))

	for i in range(n):
		a.append(int(input("a" + str(i + 1) + " = ")))

	horner(a, x, a[n - 1], a[n - 1], 0)

if __name__ == "__main__":
	main()