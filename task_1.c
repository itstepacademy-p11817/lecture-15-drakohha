#include "task_1.h"

// Function counting sum of digits in number given
long long get_digits_sum(long long number) {
	
	
	
	long int ind = 0;
	
	long long sum = 0;
	
   long long int t = 10;
	t = 10;
	do {
		if (number / t != 0) {
			ind++;
			
			sum += number / t % 10;
            t *= 10;
	}
		else {
			ind = 0;
		}
		
	} while (ind != 0);
	sum += number % 10;
    return sum;
}

// Function counting sum of digits for each prime number in range (l,r)
long long counter(long long l, long long r) {

	
	long long per = 0;
	long long sum = 0;
	long long a[120000] = { 0 };
	
	for (long long i = l+1; i < r; i++) {
		a[i] = i;
	}
	
	for (long long i = 2; i < r; i++) {
			if (a[i] != 0) {
				per = 2*i;
				
					for (long long j = per; j < r; j++) {
						if (a[j] % i == 0) {
							a[j] = 0;
						}
					}
				
				
			}
		}
	for (long long i = l + 1; i < r; i++) {
			if (a[i] != 0) {
				sum += get_digits_sum(a[i]);
			}
			
		}
	
	
	printf("%lli \n", sum);
    return sum;
}
