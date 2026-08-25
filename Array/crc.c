#include <stdio.h>

int main() {
	int n, m;
	printf("Enter data size: ");
	scanf("%d", &n);
	int data[n];
	
	printf("Enter divisor size: ");
	scanf("%d", &m);
	int divisor[m];
	
	printf("Enter data: ");
	for(int i=0; i<n; i++) scanf("%d", &data[i]);
	
	printf("Enter divisor: ");
	for(int i=0; i<m; i++) scanf("%d", &divisor[i]);
	
	int dataSize = sizeof(data)/sizeof(data[0]);
	int divisorSize = sizeof(divisor)/sizeof(divisor[0]);
	
	int dataWordSize = (dataSize) + (divisorSize - 1) ;
	int dataWord[dataWordSize];
	
	for(int i=0; i<dataWordSize; i++) {
		if(i < dataSize) dataWord[i] = data[i];
		else dataWord[i] = 0; // append 0
	}
	
	//for(int i=0; i<dataWordSize; i++) printf("%d ", dataWord[i]);
	printf("\n");
	
	int temp[divisorSize];
	int i = 0;
	
	// copy first divisor size data in temp
	for(; i<divisorSize; i++) {
		temp[i] = dataWord[i];
	}
	
	for(;i<dataWordSize; i++) {
		if(temp[0] == 0) {  	// xor with 0
			for(int j=0; j<divisorSize; j++) {
				temp[j] = temp[j] ^ 0;
			}
		} else {	// xor with divisor
			for(int j=0; j<divisorSize; j++) {
				temp[j] = temp[j] ^ divisor[j];
			}
		}
		
		// Now shift 0 th idx data of temp
		for(int j=0; j<divisorSize - 1; j++) {
			temp[j] = temp[j+1];
		}
		
		// Add i th idx data word in the last idx of temp and increment i
		temp[divisorSize-1] = dataWord[i];
	}
	
	// Now for the last bit
	if(temp[0] == 0) {  	// xor with 0
		for(int j=0; j<divisorSize; j++) {
			temp[j] = temp[j] ^ 0;
		}
	} else {	// xor with divisor
		for(int j=0; j<divisorSize; j++) {
			temp[j] = temp[j] ^ divisor[j];
		}
	}
	
	printf("Remainder : ");
	for(int j=0; j<divisorSize; j++) printf("%d ", temp[j]);
	printf("\n");
	
	for(int j=dataSize, z=1; j<dataWordSize; j++, z++) {
		dataWord[j] = temp[z];
	}
	
	printf("Real dataword : ");
	for(int j=0; j<dataWordSize; j++) {
		printf("%d ", dataWord[j]);
	}
	printf("\n");
	
	return 0;
}