#include <stdio.h>

int main(){
	int n, k;
	scanf("N? %d", &n);
	scanf("K? %d", &k);
	
	int andMax = 0, orMax = 0, xorMax = 0;
	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++){
			int and = i & j, or = i | j, xor = i ^ j;
			
			//below I use the ternary operator but you can use 'if' statements
			andMax = (and < k && and > andMax ? and : andMax);
			orMax = (or < k && or > orMax ? or : orMax);
			xorMax = (xor < k && xor > xorMax ? xor : xorMax);
		}	
	}

	printf("%d\n%d\n%d", andMax, orMax, xorMax);
}
