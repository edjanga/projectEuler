#include <iostream>
#include <iomanip>
#include "page1.h"
#include "functions.h"
#include <utility>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::pair;

typedef std::pair<int,int> pair_int;

int main(){

    Solutions sol1;
    sol1.id1(1000);
    sol1.id2(4000000);
    sol1.id3(600851475143);
    // 4
    sol1.id5(1,20);
    sol1.id6(1,100);
    sol1.id7(10001);
    // 8 9
    sol1.id10(2000000);
    map<pair_int,int> container;
    // 11 12 13 14
    sol1.id15(10,10,container);
    //sol1.id9(1,1,10);
}