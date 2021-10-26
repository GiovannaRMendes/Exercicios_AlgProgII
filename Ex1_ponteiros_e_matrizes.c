#include <stdio.h>

int main(void) {
  int n, *p;

  scanf("%d", &n);
  int v[n][n], i = 0;

  for (p = &v[0][0]; p < &v[n][i] && i < n; p++) {
    for(p = v[i]; p < v[i] + n; p++) {
      if (((p-v[0])-(n*i)) == i) {
        *p = 1;
      } else {
        *p = 0;
      }
    }
    i++;
  }

  i = 0;

  for (p = &v[0][0]; p <= &v[n-1][n-1]; p++) {
    if (i == n-1) {
      printf("%d\n", *p);
      i = 0;
    } else {
      printf("%d ", *p);
      i++;
    }
  }
  return 0;
}
