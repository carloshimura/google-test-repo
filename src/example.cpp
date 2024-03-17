//
// Created by carlos on 17-3-24.
//

#include "example.h"

int Operations::sum(int a, int b) {
  return a + b;
}
int Operations::mul(int a, int b) {
  return a * b;
}

int Operations::exp(int base, int exponent) {
	int x = base;
	if (exponent == 0)
		return 1;
	while (exponent != 1) {
		x = base * x;
		exponent--;
	}
		return x;
}
int Operations::div(int a, int b) {
  return a / b;
}
int Operations::mash(int a, int b, int c) {
  return ((a * b ) / c);
}
