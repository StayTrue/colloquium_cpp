// Copyright 2015 Ilichova Ksenia 4374
#ifndef MUL_PQ_P_CPP
#define MUL_PQ_P_CPP

#include "../../structs/struct.h"
#include "../fractional/MUL_QQ_Q.cpp"

natural MUL_P_Q(const polynom &pn, const fraction &num2) {
    polynom result = pn;
    fraction m = num2;

    for (i = 0; i <= pn.degree(); i++) {
        result[i] = MUL_QQ_Q(result[i], m);
    }

    return result;
}

#endif  // MUL_PQ_P_CPP
