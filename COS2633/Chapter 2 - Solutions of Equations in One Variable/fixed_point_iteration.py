# Finds the root of an equation in the range [a, b] by using Fixed-Point Iteration.

import math

def equation(x):
	return math.cos(x)

def iterate(p0, i):
	p = equation(p0)

	if(p0 != equation(p)):
		print("\n" + str(i) + ".) p = " + str(p))
		print(str(i) + ".) f(p) = " + str(equation(p)))
		iterate(p, i + 1)
	else:
		print("\nFixed-point = (" + str((p, equation(p))) + ")")

def main():
#	a = int(input("a = "))
	a = math.radians(int(input("a = ")))

#	b = int(input("b = "))
	b = math.radians(int(input("b = ")))

	iterate((a + b) / 2, 1)

if __name__ == "__main__":
	main()