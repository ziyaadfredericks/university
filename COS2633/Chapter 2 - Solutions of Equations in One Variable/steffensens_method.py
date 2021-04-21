# Finds the root of an equation by using Steffensen’s Method.

import math

def equation(x):
	return math.cos(x)

def iterate(p0, i):
	p1 = equation(p0)
	p2 = equation(p1)
	p = p0 - (pow((p1 - p0), 2) / (p2 - 2 * p1 + p0))

	print("\n(p" + str(i) + ", f(p" + str(i) + ")) = " + str((p, equation(p))))

	if(equation(p) != p):
		iterate(p, i + 1)

def main():
#	p0 = float(input("p0 = "))
	p0 = math.radians(float(input("p0 = ")))

	print("\n(p0, f(p0)) = " + str((p0, equation(p0))))

	iterate(p0, 1)

if __name__ == "__main__":
	main()