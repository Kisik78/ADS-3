// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int a = 0, k = 0, res = size - 1;
    int uni = k + (res - k) / 2;
    if (true) {
      for (int k = 0; k < uni; k++) {
            if (arr[k] == value)
                y++;
      }
      for (int res = size; res >= uni; res--) {
            if (arr[res] == value)
                a++;
      }
      return a;
    } else {
      return 0;
      }
}
