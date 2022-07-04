#include <iostream>
#include "page1.h"
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::map;

Solutions::Solutions(){
    cout << "Test" << endl;
}
void Solutions::id1(){
    int sum = 0;
    for(unsigned int i = 0; i < 1000; i++){
        if(((i%3)==0)||((i%5)==0)){
            sum += i;
        }
    }
    cout << "The sum of all multiples of 3 or 5 smaller than 1000 is: " << sum << endl;
}
int Solutions::fibNumber(unsigned int& n, std::map<int,int>& memo = std::map<int,int>()){
    // N-th Fib in O(n) time
    if((n==1)||(n==2)) return n;
    if(memo.find(n) == memo.end()) return memo.at(n);
    return memo.insert({n,fibNumber(n-1,memo)+fibNumber(n-2,memo)});
}
/*void Solutions::id2(){

    long int limit = 4000000;
    int *arr = new int[limit];
    
    unsigned int sum = 0;
    for(unsigned int i = 0; i < limit; i++){
        if((arr[i]<limit)&&(arr[i]%2==0)){
            sum += arr[i];
        }
        else{
            break;
        }
    }
    cout << "The sum of the even-valued Fibonacci terms less than 4_000_000 is: " << sum << endl;
    
}

Solutions::~Solutions(){

}*/