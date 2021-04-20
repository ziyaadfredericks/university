# Finds the root of an equation in the range [a, b] by using Newton's Method.

import math

def equation(x):
	return math.cos(x) - x #Original equation.

def derivative(x):
	return -math.sin(x) - 1 #Derivative of original equation.

def newton(p0, i):
	p = p0 - (equation(p0) / derivative(p0))
	print("\n(p" + str(i) + ", f(p" + str(i) + ")) = (" + str((p, equation(p))) + ")")

	if(equation(p) != 0):
		newton(p, i + 1)

def main():
#	a = int(input("a = "))
	a = math.radians(float(input("a = ")))

#	b = int(input("b = "))
	b = math.radians(float(input("b = ")))

	newton((a + b) / 2, 0)

if __name__ == "__main__":
	main()