/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#include <Echo.h>

void s__init(void) {
}

char * s_echo_string(char *s) {
    return s;
}

int s_echo_int(int i) {
    return i;
}

float s_echo_float(float f) {
    return f;
}

double s_echo_double(double d) {
    return d;
}

int s_echo_mix(double d) {
    return d;
}

int s_echo_parameter(int pin, int *pout) {
    *pout = pin;
    return pin;
}

void s_increment_parameter(int *x) {
    *x = *x + 1;
}
