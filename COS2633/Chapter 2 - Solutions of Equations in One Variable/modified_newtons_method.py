# Finds the root of an equation in the range [a, b] by using the modified version of Newton's Method.

import math

def equation(x):
	return pow(x, 2) + 4 * x #Original equation.

def derivative1(x):
	return 2 * x + 4 #Derivative of original equation.

def derivative2(x):
	return 2 #2nd Derivative of original equation.

def newton(p0, i):
	p = p0 - ((equation(p0) * derivative1(p0)) / (pow(derivative1(p0), 2) - (equation(p0) * derivative2(p0))))
	print("\n(p" + str(i) + ", f(p" + str(i) + ")) = (" + str((p, equation(p))) + ")")

	if(equation(p) != 0):
		newton(p, i + 1)

def main():
	a = int(input("a = "))
#	a = math.radians(float(input("a = ")))

	b = int(input("b = "))
#	b = math.radians(float(input("b = ")))

	newton((a + b) / 2, 0)

if __name__ == "__main__":
	main()