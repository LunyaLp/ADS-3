// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  uint16_t leftBorder = 0;
  uint16_t rightBorder = size - 1;
  uint16_t counter = 0;
  while (leftBorder <= rightBorder) {
    int part = (leftBorder + rightBorder)/2;
    if (arr[part] == value) {
      counter++;
    }
    if (arr[part] > value) {
      rightBorder = part-1;
    }else{
      if (value > arr[part]) {
        leftBorder = part+1;
      }
    }
    if ((leftBorder > rightBorder) && (counter == 0)) {
      return 0;
    }
  }
  return counter;
}
