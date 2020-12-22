# Recursive Collatz Conjecture #
# An interesting mathematical sequence always seems to end up resulting in a 1
# It is formed by the successive applications of the following function:
# f(n) = 3n+1 when n is odd & n/2 when n is even
# The Collatz conjecture asks: for any positive integer n, is f^i(n) = 1 for some i,
# where f is applied to n recursively i times

# The function below simulates the Collatz conjecture using recursion.
# It returns the number of steps required to reach 1, where n >= 1.

def collatz(n):
    steps = 0
    if n == 1:
        return 0
    elif n % 2 == 0:
        steps += 1
        return steps + collatz(n/2)
    else:
        steps += 1
        return steps + collatz(3*n+1)

test = [2, 3, 4, 5, 6, 835, 951, 572, 948, 25]
for i in test:
  print("Input: "+str(i)+", Steps: "+str(collatz(i)))