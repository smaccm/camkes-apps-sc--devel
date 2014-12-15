/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#include <stdio.h>
#include <Client.h>

int run() {
    char *shello = "hello world";
    char *smore = "a longer string that will overflow the message registers on ARM";
    char *s;
    int i = 42, j;
    int p, p1, p2;
    float f = 273421.4274, g;
    double d = 273421.4274, e;

    printf("Starting the client\n");
    printf("-------------------\n");

    j = s_echo_int(i);
    printf("echo_int: %d -> %d\n",i, j);

    g = s_echo_float(f);
    printf("echo_float: %f -> %f\n",f, g);

    e = s_echo_double(d);
    printf("echo_double: %f -> %f\n",d, e);

    j = s_echo_mix(d);
    printf("echo_mix: %f -> %d\n",d, j);

    s = s_echo_string(shello);
    printf("echo_string: \"%s\" -> \"%s\"\n", shello, s);

    s = s_echo_string(smore);
    printf("echo_string: \"%s\" -> \"%s\"\n", smore, s);

    p = 123;
    p2 = s_echo_parameter(p, &p1);
    printf("echo_parameter: %d -> %d (returned = %d)\n", p, p1, p2);

    p = 100;
    s_increment_parameter(&p);
    printf("increment_parameter: 100 -> %d\n", p);

    printf("After the client\n");
    return 0;
}
