#include <iostream>
#include <stdio.h>
#include "page1.h"
#include "functions.h"
#include <iomanip>
#include <algorithm>
#include <vector>
#include<utility>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::for_each;
using std::pair;
using std::map;

typedef std::pair<int,int> pair_int;

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
int Solutions::fibNumberModified(const int& n){
    // N-th Fib iteratively in O(n) time
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
void Solutions::id3(const long int& num_id3){

    long int copy_num_id3 = num_id3;
    unsigned int div = 2;
    unsigned int max_prime_factor;
    while(copy_num_id3>1){
        if((copy_num_id3%div)==0){
            max_prime_factor = div;
            copy_num_id3 /= div;
        }
        else{
            div++;
        }
    }
    cout << "The largest prime factor of the number " << num_id3 << " is: " << max_prime_factor << endl;
    
    
}
void Solutions::id4(const long int& num_id4){
    map_int_int memo;
    map_int_int memo2;
    unsigned int temp;
    unsigned int max_number = 0;
    unsigned int lower = longPower(10,num_id4,memo);
    unsigned int upper = longPower(10,num_id4+1,memo2)-1;
    for(unsigned int i = upper; i >= lower; i--){
        for(unsigned int j = i; j >= lower; j--){
                temp = i*j;
                if((temp>max_number)&&(isPalindorm(temp))) max_number = temp;
        }
    }
    cout << max_number << endl;
    cout << printf("The largest palindrom formed by the product of two %d digit numbers is: %d.\n",num_id4,max_number);
}
void Solutions::id5(const unsigned int& lower_bound,const unsigned int& upper_bound){
    unsigned int start_point = upper_bound+1;
    unsigned int div = lower_bound;
    while(div<=upper_bound){
        if((start_point%div)==0){
            div++;
        }
        else{
            div = lower_bound;
            start_point++;
        }
    } 
    cout << "The smallest positive number that is evenly divisible by all numbers from " << lower_bound << " to " << upper_bound << " is: " << start_point << endl << ".";
}
void Solutions::id6(const unsigned int& lower_bound,const unsigned int& upper_bound){
    // With use of lambda expression
    // Range of integers between lower bound and upper bound
    vector<int> range;
    for(unsigned int i = lower_bound; i < upper_bound+1; i++){
        range.push_back(i);
    }
    unsigned int sum_square = 0;
    unsigned int square_sum = 0;
    // Lambda expression for sum_square
    for_each(range.begin(),range.end(),[&sum_square](int n){
        sum_square += n*n;
    });
    // Lambda expression for square_sum
    for_each(range.begin(),range.end(),[&square_sum](int n){
        square_sum += n;
    });
    square_sum = square_sum*square_sum;
    cout << "The difference between the sum of the squares of the first " << upper_bound << " numbers and the square of the sum is: " << sum_square-square_sum << "."<< endl;
    
}
void Solutions::id7(const long int& num_id7){
    cout << "The " << num_id7 << "th prime number is: " << nThPrime(num_id7) << "." << endl;
}
/*void Solutions::id9(const long int& num_id9A,const long int& num_id9B,const long int& num_id9C){
    unsigned int c;
    bool** matrix = new bool* [num_id9C];
    for(unsigned int i = 0; i < num_id9C; i++){
        matrix[i] = new bool[num_id9C];
    }

    for(unsigned int i = 0; i < num_id9C; i++){
        for(unsigned int j = 0; j < num_id9C; j++){
            float c = sqrt((i+1)*(i+1)+(j+1)*(j+1));
            bool temp = (floor(c)==ceil(c)?true:false);
            matrix[i][j] = temp;
        }    
    }
    for(unsigned int i = 0; i < num_id9C; i++){
        for(unsigned int j = 0; j < num_id9C; j++){
            if(matrix[i][j]==true){
                int c = (i+1)*(i+1)+(j+1)*(j+1);
                if((num_id9A+num_id9B+c)==num_id9C){
                    break;
                }
            }
        }    
    }
    for(unsigned int i = 0; i < num_id9C; i++){
        delete [] matrix[i];    
    }
    delete [] matrix;
    cout << c << endl;

}*/
void Solutions::id10(const unsigned int& num_id10){

    cout << "The sum of all the primes below " << num_id10 << " is: " << sumSieveEratosthenes(num_id10) << "." << endl;
}
/*void Solutions::id12(const unsigned int& num_id12){
    
}*/
int Solutions::recursionID15(unsigned int num_id15A,unsigned int num_id15B,map<pair_int,int>& container){
    if((num_id15A==1)&&(num_id15B==1)) return 2;
    if((num_id15A==1)||(num_id15B==1)) return (num_id15A>num_id15B)?num_id15A+1:num_id15B+1;
    if(container.count(pair(num_id15A,num_id15B))==1) return container[pair(num_id15A,num_id15B)];
    return recursionID15(num_id15A-1,num_id15B,container)+recursionID15(num_id15A,num_id15B-1,container);
}
void Solutions::id15(unsigned int num_id15A, unsigned int num_id15B,map<pair_int,int>& container){
    cout << "There are " << recursionID15(num_id15A,num_id15B,container) << " ways to go through a " << num_id15A << " x " << num_id15B << " grid." << endl;
}
void Solutions::id16(const unsigned int& base,int n){
    // Functions pointers - Note that one can use the functions directly as they were not passed in as arguments
    int(*ptrLongPower)(const unsigned int&,int, map_int_int&) = longPower;
    int(*ptrNumberOfDigits)(const unsigned int&) = numberOfDigits;
    map_int_int memo;
    // n-th power in O(n)
    int vLongPower = ptrLongPower(base,n+1,memo);
    int vNumberOfDigits = ptrNumberOfDigits(vLongPower);
    vector<int> digitsStore;
    int count = 1;
    while(count <= vNumberOfDigits){
        int remainder = vLongPower%10;
        digitsStore.push_back(remainder);
        vLongPower -= remainder;
        vLongPower /= 10;
        count++;
    }
    unsigned int sum = 0;
    for_each(digitsStore.begin(),digitsStore.end(),[&sum](int i){
        sum += i;
    });
    cout << sum << endl;


}
/*void Solutions::id25(const long int& num_id25){
    int(*ptrNthFib)(const unsigned int&) = nThFib;
    cout << "The index of the first Fibonacci number with " << num_id25 << " digits is: " << binarySearchModified(num_id25,ptrNthFib,1000000) << "." << endl;
}*/
Solutions::~Solutions(){

}