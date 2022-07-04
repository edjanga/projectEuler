#include <iostream>
#include "page1.h"
#include <iomanip>

using std::cout;
using std::cin;

Solutions::Solutions(){

}
int Solutions::id1(){
    int sum = 0;
    for(unsigned int i = 0; i < 1000; i++){
        if((i%3)==0||(i%5)==0){
            sum += i;
        }
    }
    return sum;
}
Solutions::~Solutions(){

}