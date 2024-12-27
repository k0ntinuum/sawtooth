
void demo() {
    unt k, p[P], c[P], d[P];
    hide_cursor();
    cls();
    k = arc4random();
    for (size_t z = 0; z < 10000; z++) {
        if (z % 20 == 0 ) k = arc4random();
        rgb(0, arc4random_uniform(50) + 206, 0);
        cursor_to(10,0);
        for (size_t i = 0 ; i < P; i++) p[i] = arc4random_uniform(2);
        enc(k, p, c);
        dec(k, c, d);
        printf("  k = ");print_bits(k);printf("\n");
        printf("\n  p = ");
        for (size_t i = 0 ; i < P; i++) print_bit(p[i]);
        printf("\n");
        printf("\n  c =\n");
        for (size_t i = 0 ; i < P; i++) {printf("      ");print_bits(c[i]);printf("\n");}
        printf("\n  d = ");
        for (size_t i = 0 ; i < P; i++) print_bit(d[i]);
        printf("\n");
        for (size_t i = 0 ; i < P; i++) if (p[i] != d[i]) printf("\nfailure to decode\n");
        usleep(200000);

    }

}
