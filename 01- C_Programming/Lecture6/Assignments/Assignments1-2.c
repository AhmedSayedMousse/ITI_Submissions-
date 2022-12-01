//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>

void bubble_sort(int arr[]);
int main() {
	int in1, arr[10];
	int x, y, z, *q, *p, *r;
	printf("Which assignment would u like to see? 1-2");
	scanf("%d", &in1);
	switch (in1) {
		case 1:
			// This Assignment applies bubble sort on an array using pointers.
			for (int i = 0; i < 10; i++) {
				printf("Please Enter number %d:", i);
				scanf("%d", arr + i);
			}
			bubble_sort(arr);
			printf("The sorted array is:\n");
			for (int i = 0; i < 10; i++) {
				printf("%d ", arr[i]);
			}
			break;
		case 2:
			// This Assignment defines 3 variables x,y,z and 3 pointers p, q, r
			// prints with labels x, y, z, p, q, r, *p, *q, *r
			// prints the swap code r =p; p=q; q=r; result
			// reprints line 1
			x=0;y=5;z=1; p=&x; q=&y; r=&z;
			printf("X: %d, Y: %d, Z: %d, p: %d, q: %d, r: %d,"
				   " *p: %d, *q: %d, *r: %d", x,y,z,p,q,r,*p,*q,*r);
			printf("Swapping pointers");
			r=p; p=q; q=r;
			printf("X: %d, Y: %d, Z: %d, p: %d, q: %d, r: %d,"
				   " *p: %d, *q: %d, *r: %d", x,y,z,p,q,r,*p,*q,*r);
			break;
		default:
			break;
	}
}
void bubble_sort(int *arr){
	for (int i = 0; i < 9; i++) {
		for(int j=0; j<9-i; j++){
			if ( arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}