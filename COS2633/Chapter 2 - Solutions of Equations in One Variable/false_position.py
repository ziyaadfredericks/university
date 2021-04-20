# Finds the root of an equation in the range [a, b] by using the False Position Method.

import math

def equation(x):
	return math.cos(x) - x #Original equation.

def iterate(p1, p0, i):
	p = p1 - ((equation(p1) * (p1 - p0)) / (equation(p1) - equation(p0)))
	print("\n(p" + str(i) + ", f(p" + str(i) + ")) = " + str((p, equation(p))))

	if(equation(p) != 0):
		if(equation(p) * equation(p1) < 0):
			iterate(p, p1, i + 1)
		else:
			iterate(p, p0, i + 1)

def main():
	p0 = float(input("p0 = "))
#	p0 = math.radians(int(input("p0 = ")))

#	p1 = int(input("p1 = "))
	p1 = math.radians(float(input("p1 = ")))

	print("\n(p0, f(p0)) = " + str((p0, equation(p0))))
	print("\n(p1, f(p1)) = " + str((p1, equation(p1))))

	iterate(p1, p0, 2)

if __name__ == "__main__":
	main()