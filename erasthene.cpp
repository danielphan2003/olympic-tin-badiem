int not_prime[1000];

for (int i: 1 .. 1000) {
    not_prime[i] = 0;
}
for (int i = 2; i <=1000; ++i) {
    if (not_prime[i] == 0) {
        i la ngto;
        for (int j = i+1; j <=1000; j+=i) {
            not_prime[j] = i
        }
    }
}