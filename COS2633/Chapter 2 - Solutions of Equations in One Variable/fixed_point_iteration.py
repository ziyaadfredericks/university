# Finds the root of an equation in the range [a, b] by using the fixed-point method.

import math

def equation(x):
#	return (3 * pow(x, 4) + 2 * pow(x, 2) + 3) / (4 * pow(x, 3) + 4 * x - 1)
	return pow(3 + x - 2 * pow(x, 2), 0.25)

def main():
	a = int(input("a = "))
	b = int(input("b = "))
	print()
	p0 = (a + b) / 2

	i = 0
	while(p0 != equation(p0)):
		p = equation(p0)
		print("\n" + str(i + 1) + ".) p = " + str(p))
		print(str(i + 1) + ".) f(p) = " + str(equation(p)))
		p0 = p
		i += 1

	if(abs(p - p0) < pow(10, -5)):
		print("\nS U C C")
	else:
		print("\nfailed")


if __name__ == "__main__":
	main()