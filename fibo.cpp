int fibo(int k) {
    if (k == 1 || k == 0)
        return 1
    else
        return fibo(k-1)+fibo(k-2)
}