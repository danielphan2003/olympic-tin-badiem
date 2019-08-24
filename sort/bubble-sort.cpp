for (int i = 2; i <= n; ++i) {
    for (int j = n; j >= i; --j) 
        if (a[j] < a[j-1])
            swap(a[j],a[j-1])
}