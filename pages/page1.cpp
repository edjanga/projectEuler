#include <iostream>
#include "page1.h"
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::map;

Solutions::Solutions(){

}
void Solutions::id1(){
    int sum = 0;
    for(unsigned int i = 0; i < 1000; i++){
        if(((i%3)==0)||((i%5)==0)){
            sum += i;
        }
    }
    cout << "The sum of all multiples of 3 or 5 smaller than 1000 is: " << sum << "." << endl;
}
int Solutions::fibNumberModified(const unsigned int& n){
    // N-th Fib in O(n) time
    int *arr = new int[n];
    arr[0] = 1;
    arr[1] = 2;
    unsigned int sum = 0;
    unsigned int i = 2;
    while((arr[i-1]+arr[i-2])<=n){
        arr[i] = arr[i-1]+arr[i-2];
        if(arr[i]%2==0) sum += arr[i];
        i++;
    }
    delete [] arr;
    return sum;
}
void Solutions::id2(){

    long int limit = 4000000;
    unsigned int even_sum_under_limit;
    even_sum_under_limit = this->fibNumberModified(limit);
    cout << "The sum of the even-valued Fibonacci terms less than 4_000_000 is: " << even_sum_under_limit << "." << endl;
    
}

Solutions::~Solutions(){

}