// void shuffle(int* f, int l) {
//     int j = 0;int t = 0;
//     for (int i = l - 1; i > 0; i -= 1) {
//         j = arc4random_uniform(i+1);
//         t = f[i];f[i] = f[j];f[j] = t;
//     }
// }

void randomize(int* v, int L) {
    for (int i = 0; i < L; i++) 
            v[i] = arc4random_uniform(B);
}
