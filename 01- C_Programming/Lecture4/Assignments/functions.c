//
// Created by Ahmed Sayed Mousse on 11/27/2022.
//
#include <stdio.h>
#include "functions.h"

void Add(int in2, int in3){
	printf("%d + %d = %d\n", in2, in3, in2+in3);
}
void Sub(int in2, int in3){
	printf("%d - %d = %d\n", in2, in3, in2-in3);

}
void Mul(int in2, int in3){
	printf("%d * %d = %d\n", in2, in3, in2*in3);

}
void Div(int in2, int in3){
	printf("%d / %d = %d\n", in2, in3, in2/in3);

}
void Rem(int in2, int in3){
	printf("%d % %d = %d\n", in2, in3, in2%in3);

}
void And(int in2, int in3){
	printf("%d & %d = %d\n", in2, in3, in2&in3);

}
void Or(int in2, int in3){
	printf("%d | %d = %d\n", in2, in3, in2|in3);

}
void Not(int in2){
	printf("!%d = %d\n", in2, !in2);

}
void Xor(int in2, int in3){
	printf("%d ^ %d = %d\n", in2, in3, in2^in3);

}
void Inc(int in2){
	printf("++%d = %d\n", in2, ++in2);

}
void Dec(int in2){
	printf("--%d = %d\n", in2, in2);

}