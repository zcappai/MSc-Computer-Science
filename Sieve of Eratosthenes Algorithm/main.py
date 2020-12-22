
'''
The 1st function below checks if an input number is a prime number

The 2nd function below implements the Sieve of Eratosthenes algorithm 

https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes

This algorithm is used to find all the prime numbers less than or equal to a given integer.
'''

primes = []

def isPrime(x):
	prime = True
	# Cycles through numbers from 2 to n/2 to check if prime
	i = 2
	while(i <= x//2):
		primeCheck = x % i
    # if x completely divides by i (no remainder), then it is not prime
		if(primeCheck == 0):
			prime = False
			break
		# if x does NOT completely divide by any i (remainder), then it is prime
		i += 1
  # Automatically prime is x = 2
	if(x == 2):
		prime = True
	return prime

# Sieve of Eratosthenes algorithm
def SoE(x):
	n = 2
	# Adds all numbers from 2 upto x to the array
	while(n <= x):
		primes.append(n)
		n += 1

	for i in primes:
		for j in range(1, x):
			# Calculates multiples of prime numbers
			y = i + j * i
			# Removes numbers if they are multiples of prime numbers
			if(y in primes):
				primes.remove(y)
	

print("Enter maximum number: ")
x = int(input())
SoE(x)
print(f"\nThe Sieve of Eratosthenes algorithm generated {primes}\n")

yes = 0

print("Check: ")
for i in primes:
	if(isPrime(i) == True):
		print(f"{i} is a prime number")
		yes += 1
	elif(isPrime(i) == False):
		print(f"{i} is NOT a prime number")
		print(f"The Sieve of Eratosthenes algorithm has failed!")

print(f"\n{yes}/{len(primes)} tests passed!")