#include<stdio.h>
void loop() {
	int x;
	printf("Enter number : ");
	scanf_s("%d", &x);
	for (int i = 1; i <= x; i++) {
		printf("* ");
	}
	printf("\n");
	for (int i = 1; i <= x; i++) {
		for (int j = x; j <= x; j++) {
			printf("* ");
		}
		for (int j = 3; j <= x; j++) {
			printf("  ");
		}
		for (int j = x; j <= x; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i <= x; i++) {
		printf("* ");
	}
}
int main() {
	loop();
	return 0;
}