#include <stdio.h>
#include <conio.h>
#include <math.h>

int arr[30], count = 0;

int place(int post){
	for(int i=1; i<post; i++){
		if((arr[i] == arr[post]) || ((abs(arr[i] - arr[post]) == abs(i - post))))
		return 0;
	}
	return 1;
}

void print_sol(int n){
	int i, j;
	count++;
	printf("Solution #%d: \n", count);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(arr[i] == j) printf("Q\t");
			else printf("*\t");
		}
		printf("\n");
	}
}

void queen(int n){
	int i=1;
	arr[i]=0;
	
	while(i!= 0){
		do{
			arr[i]++;
		}
		while((arr[i] <= n) && !place(i));
		
		if(arr[i] <= n){
			if(i == n) print_sol(n);
			else{
				i++;
				arr[i]=0;
			}
		}
		else i--;
	}
}

int main(){
	int n;
	printf("Enter the number of Queens : ");
	scanf("%d", &n);
	queen(n);
	printf("\n Total solutions: %d", count);
}
