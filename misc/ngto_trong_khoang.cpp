int a[1000], p[1000], k = 0;
while (x > 1) {
    if (not_prime[x] != a[k]) {
        k += 1;
        a[k] = not_prime[x];
        p[k] = 1;
    }
    else 
        p[k]++;
    x /= not_prime[x];
}