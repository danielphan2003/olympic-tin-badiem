for (int i = 1; i <= n - 1; ++i) {
    i_min = i;
    for (int j = i + 1; j <= n; ++j) {
    if (a[j] < a[i_min])
        i_min = j;
    swap(a[j], a[i_min]);
}
