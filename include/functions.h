#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include<map>
#include<algorithm>

#pragma once

typedef std::pair<int,int> pair_int;
typedef std::map<int,int> map_int_int;

int nThFib(const unsigned int& n);
int sumOfFibUpTo(const unsigned int& n);
int nThPrime(const unsigned int& n);
int sumSieveEratosthenes(const unsigned int& n);
bool isPrime(const unsigned int& n);
int numberOfDigits(const unsigned int& n);
int nThTriangleNumber(const unsigned int& n);
int longPower(const unsigned int& base,int n, map_int_int& memo);
//void isPalindorm(const unsigned int& n);
//int binarySearchModified(const int& target,int (*nThFibPtr)(const unsigned int&),const long int& n);

#endif