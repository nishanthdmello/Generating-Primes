## Introduction :

The given code is a program that finds the nth prime number where n is specified by the user. The program works by generating a list of prime numbers and then finding the nth prime number from the list. This is accomplished using a nested loop that checks each number for primality and adds it to the list if it is a prime number.

## `prime_nums.c` Code Explanation :

The program starts by prompting the user to enter the number of primes they want to find. The user input is stored in the variable `num_primes`. An array `prime_list` of size `num_primes` is then created to store the list of prime numbers. The variable `prime_count` is initialized to 0 and is used to keep track of the number of prime numbers found so far.

The first prime number, 2, is added to the `prime_list` array and `prime_count` is incremented. The program then uses a `for` loop to generate the remaining prime numbers. It starts with the number 3 and checks each odd number for primality. The loop continues until `prime_count` equals `num_primes`.

The program checks each number for primality by using a nested `for` loop that divides the number by each prime number in the `prime_list` array. If the number is divisible by any of the prime numbers, then it is not a prime number, and the loop moves on to the next number. If the number is not divisible by any of the prime numbers, then it is a prime number, and it is added to the `prime_list` array. The loop then continues until the `prime_count` equals `num_primes`.

Finally, the program prints the nth prime number, which is stored in `prime_list[num_primes - 1]`.

## Disadvantage :

The code uses an array to store the prime numbers. This can be inefficient if the number of primes required is very large, as the array needs to be allocated a fixed size in advance. In contrast, the linked list in the other code can grow dynamically as more primes are discovered.