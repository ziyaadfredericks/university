# Finds the root of an equation in the range [a, b] by using the Bisection Method.

import math

def equation(x):
	return math.cos(x) - x #Original equation.

def bisect(a, b, p):
	if((equation(a) * equation(p)) > 0):
		a = p
	else:
		b = p

	p = (a + b) / 2

	return (a, b, p)

def display(i, listABP):
	print(str(i + 1) + ".) a = " + str(listABP[0]))
	print(str(i + 1) + ".) b = " + str(listABP[1]))
	print(str(i + 1) + ".) p = " + str(listABP[2]))
	print(str(i + 1) + ".) f(p) = " + str(equation(listABP[2])) + "\n")

	listABP = bisect(listABP[0], listABP[1], listABP[2])

def main():
#	a = int(input("a = "))
	a = math.radians(int(input("a = ")))

#	b = int(input("b = "))
	b = math.radians(int(input("b = ")))
	
	print()
	p = (a + b) / 2

	listABP = (a, b, p)

	i = 0
	while(equation(listABP[2]) != 0):
		display(i, listABP)
		i += 1

	display(i, listABP)

if __name__ == "__main__":
	main()