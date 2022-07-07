#include <iostream>
#include "functions.h"
#include <algorithm>
#include <vector>
#include <cmath>
#include <map>

using std::map;
using std::vector;
using std::for_each;
using std::cout;
using std::endl;

int nThFib(const unsigned int& n){
    vector<int> vFib;
    vFib.push_back(1);
    vFib.push_back(2);
    for(unsigned int i = 2; i <= n; i++){
        vFib.push_back(vFib[i-2]+vFib[i-1]);
    }
    return vFib.back();
}
int sumOfFibUpTo(const unsigned int& n){
    vector<int> vFib;
    vFib.push_back(1);
    vFib.push_back(2);
    unsigned int sum = 0;
    for(unsigned int i = 2; i <= n; i++){
        if((vFib[i-2]+vFib[i-1])<=n){
            vFib.push_back(vFib[i-2]+vFib[i-1]);
            sum += vFib.back();
        }
    }
    return sum;
}
int sumSieveEratosthenes(const unsigned int& n){
    // Sum of prime number smaller than n using Eratosthenes' sieve
    vector<int> range;
    for(unsigned int i = 2; i < n+1; i++){
        range.push_back(i);
    }
    map<int,bool> primes;
    // for_each works only with iterable;
    for_each(range.begin(),range.end(),[&primes](int prime){
        primes[prime] = true;
    });
    // limit one needs in the sieve
    int limit = static_cast<int>(ceil(sqrt(n)));
    for(unsigned int i = 2; i < limit; i++){
        int j = 0;
        while((i*i+j*i)<=n){
            primes[i*i+j*i] = false;
            j++;
        }
    }
    vector<int> vPrimes;
    for(auto itr = primes.cbegin(); itr != primes.cend(); ++itr){
        if((itr->second)==true) vPrimes.push_back(itr->first);
    }
    unsigned int sum = 0;
    for_each(vPrimes.begin(),vPrimes.end(),[&sum](int i){
        sum += i;
    });
    return sum;
}
bool isPrime(const unsigned int& n){
    if(n==2) return true;
    for(unsigned int i = 2; i < n; i++){
        if((n%i==0)){
            return false;
            break;
        }
    }
    return true;
}
int nThPrime(const unsigned int& n){
    unsigned int count = 2;
    vector<int> vPrimes;
    do{
        if(isPrime(count)) vPrimes.push_back(count);
        count++;
    }
    while(vPrimes.size()!=n);
    return vPrimes.back();
}
int numberOfDigits(const unsigned int& n){
    /*unsigned int n_copy = n;
    unsigned int digits = 1;
    while(!((n_copy>=1)&&(n_copy<10))){
        unsigned int remainder = n_copy%10;
        n_copy -= remainder;
        n_copy /= 10;
        digits++;
    }*/
    unsigned int digits = static_cast<int>(floor(log10(n)+1.0));
    return digits; 
}