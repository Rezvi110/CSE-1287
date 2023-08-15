//1
/*#include <stdio.h>

void main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n / 2; i++) {
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
}*/
//2
/*#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  printf("%d\n", sum);
}*/
//3
/*#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int max = arr[0];
  int min = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("Max:%d\nMin:%d\n", max, min);
}*/
//4
/*#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int count[100] = {};
  for (int i = 0; i < n; i++) {
    count[arr[i]]++;
  }

  for (int i = 0; i < 100; i++) {
    if (count[i] != 0) {
      printf("%d:%d\n", i, count[i]);
    }
  }
}*/
//5
/*#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] == arr[j]) {
        count++;
        break;
      }
    }
  }

  printf("%d\n", count);
}
*/
//6
/*#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int seen[100] = {};
  for (int i = 0; i < n; i++) {
    if (!seen[arr[i]]) {
      printf("%d ", arr[i]);
      seen[arr[i]] = 1;
    }
  }

  printf("\n");
}*/
//7
/*#include <stdio.h>

void merge_sorted_arrays(int arr1[], int arr2[], int m, int n, int merged[]) {
  int i = m - 1;
  int j = n - 1;
  int k = m + n - 1;
  while (i >= 0 && j >= 0) {
    if (arr1[i] > arr2[j]) {
      merged[k] = arr1[i];
      i--;
    } else {
      merged[k] = arr2[j];
      j--;
    }
    k--;
  }

  while (i >= 0) {
    merged[k] = arr1[i];
    i--;
    k--;
  }

  while (j >= 0) {
    merged[k] = arr2[j];
    j--;
    k--;
  }
}

int main() {
  int m, n;
  scanf("%d", &m);
  int arr1[m];
  for (int i = 0; i < m; i++) {
    scanf("%d", &arr1[i]);
  }

  scanf("%d", &n);
  int arr2[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr2[i]);
  }

  int merged[m + n];
  merge_sorted_arrays(arr1, arr2, m, n, merged);

  for (int i = 0; i < m + n; i++) {
    printf("%d ", merged[i]);
  }

  printf("\n");
}
*/
//8
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
 int odd_ptr = 0;
  int even_ptr = 0;
 for (int i = 0; i < n; i++) {
     if (arr[i] % 2 != 0) {
      arr[odd_ptr] = arr[i];
      odd_ptr++;
    } else {
      arr[even_ptr] = arr[i];
      even_ptr++;
    }
  }

  for (int i = 0; i < odd_ptr; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  for (int i = 0; i < even_ptr; i++) {
    printf("%d ", arr[i + odd_ptr]);
  }

  printf("\n");
}
//9
/*#include <stdio.h>

int main() {
  int n, i, j, temp;
 scanf("%d", &n);
 int arr[n];
 for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
 for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
 for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}*/
//10
/*
#include <stdio.h>

void insert_element(int arr[], int n, int new_element) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] > new_element) {
      break;
    }
  }

  for (int j = n - 1; j >= i; j--) {
    arr[j + 1] = arr[j];
  }

  arr[i] = new_element;
}

int main() {
  int n;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int new_element;
  scanf("%d", &new_element);

  insert_element(arr, n, new_element);

  for (int i = 0; i < n + 1; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
}
*/




