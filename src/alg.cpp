// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
            if (arr[i] + arr[j] == value)
                count++;
    return count;
  return 0;
}

int countPairs2(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len - 1; i++)
        for (int j = len - 1; j > i; j--)
            if (arr[i] + arr[j] == value)
                count++;
    return count;
  return 0;
}

int countPairs3(int *arr, int len, int value) {
    int count = 0;
    for (int i = 0; i < len - 1; i++) {
        int left = i, right = len;
        while (left < right - 1) {
            int mid = (left + right) / 2;
            if (arr[i] + arr[mid] == value) {
                count++;
                int j = mid + 1;
                while (arr[i] + arr[j] == value && j < right) {
                    count++;
                    j++;
                }
                j = mid - 1;
                while (arr[i] + arr[j] == value && j > left) {
                    count++;
                    j--;
                }
                break;
            }
            if (arr[i] + arr[mid] > value)
                right = mid;
            else
                left = mid;
        }
    }
    return count;
  return 0;
}
