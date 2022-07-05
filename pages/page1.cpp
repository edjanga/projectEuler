#include <iostream>
#include "page1.h"
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::map;

Solutions::Solutions(){

}
void Solutions::id1(const unsigned int& num_id1){
    int sum = 0;
    for(unsigned int i = 0; i < num_id1; i++){
        if(((i%3)==0)||((i%5)==0)){
            sum += i;
        }
    }
    cout << "The sum of all multiples of 3 or 5 smaller than " << num_id1 << " is: " << sum << "." << endl;
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
void Solutions::id2(const long int& num_id2){
    unsigned int even_sum_under_limit;
    even_sum_under_limit = this->fibNumberModified(num_id2);
    cout << "The sum of the even-valued Fibonacci terms less than " << num_id2 << " is: " << even_sum_under_limit << "." << endl;
    
}
void Solutions::id3(const long int& num_id3 = 600851475143){

    long int copy_num_id3 = num_id3;
    //int *arr = new int[num];
    unsigned int div = 2;
    //unsigned int i = 0;
    unsigned int max_prime_factor;
    while(copy_num_id3>1){
        if((copy_num_id3%div)==0){
            max_prime_factor = div;
            //arr[i] = div;
            copy_num_id3 /= div;
            //i++;
        }
        else{
            div++;
        }
    }
    cout << "The largest prime factor of the number " << num_id3 << " is:" << max_prime_factor << endl;
    
    
}
Solutions::~Solutions(){

}