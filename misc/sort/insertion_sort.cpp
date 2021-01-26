for (int i = 2; i <= n; ++i) {
    int value = a[i];
    int [j] = i - 1;
    while (j > 0 && value < a[j]) {
        a[j+1] = a[j];
        --j;
    }
    a[j+1] = value;
}