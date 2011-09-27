//Project Euler Problem 1//

/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.*/

#include <stdio.h>

main(void){

	int i, n, sumof3s, sumof5s, the_sum;

	n = 1000;
	for(i = 0; i < n; i = i + 3){
		sumof3s = sumof3s + i;
	}
	for(i = 0; i < n; i = i + 5){
		sumof5s = sumof5s + i;
	}

	the_sum = sumof3s + sumof5s;

printf("The Sum of all the multiples 3 or 5 below 1000 is %d\n", the_sum);

return 0;
}
