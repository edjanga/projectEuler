#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#pragma once

class Functions{
    public:
        Functions();
        int nThFib(const unsigned int& n);
        int sumOfFibUpTo(const unsigned int& n);
        int nThPrime(const unsigned int& n);
        int sumSieveEratosthenes(const unsigned int& n);
        bool isPrime(const unsigned int& n);
        ~Functions();
};

#endif