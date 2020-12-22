# Sieve of Eratosthenes Algorithm
The sieve of Eratosthenes is an ancient algorithm for finding all prime numbers up to any given limit.

The algorithm:
1. Create a list of consecutive integers from 2 through n.
2. Start from the smallest prime number, 2.
3. Calculates the multiples by multiplying by 2 to n, and remove the multiples from the list (without removing the current number, as it is prime).
4. Then, find the smallest number in the list greater than the previous number. This new number is the next prime number, and repeat from step 3.
5. When the algorithm stops, the numbers remaining in the list are all the prime numbers below n.

### Languages:
<a href="#"><img align="left" alt="Python" height="25px" src="https://img.shields.io/badge/Python-14354C?style=for-the-badge&logo=python&logoColor=white" /></a>
