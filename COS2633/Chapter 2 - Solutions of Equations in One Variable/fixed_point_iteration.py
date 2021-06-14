# Finds the root of an equation in the range [a, b] by using Fixed-Point Iteration.

import math

def equation(x):
	return 2 * pow(math.e, -x)

def iterate(p0, i):
	p = equation(p0)

	if(p0 != equation(p)):
		print("\n" + str(i) + ".) p = " + str(p))
		print(str(i) + ".) f(p) = " + str(equation(p)))
		iterate(p, i + 1)
	else:
		print("\nFixed-point = (" + str((p0, equation(p))) + ")")

def main():
	p0 = float(input("p0 = "))
#	p0 = math.radians(float(input("p0 = ")))

	iterate(p0, 1)

if __name__ == "__main__":
	main()