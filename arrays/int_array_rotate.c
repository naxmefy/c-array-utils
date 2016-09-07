#include "int_array_rotate.h"

void rotate_right(int a[], int n, int d) {
  int t[n];
  t[0]=a[0];
  for(int i = 1; i <= n; i++) {
    t[i%2] = a[(i*d)%n];
    a[(i*d)%n] = t[(i+1)%2];
  }
}

void rotate_left(int a[], int n, int d) {
  int t[n];
  t[0]=a[0];
  for(int i = 1; i <= n; i++) {
    t[i%2] = a[(i*(n-d))%n];
    a[(i*(n-d))%n] = t[(i+1)%2];
  }
}
