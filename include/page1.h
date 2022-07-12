#ifndef PAGE1_H
#define PAGE1_H
#include <map>
#include <utility>

#pragma once

typedef std::pair<int,int> pair_int;

class Solutions{

    public:
    
        Solutions();
        ~Solutions();
        void id1(const unsigned int& num_id1);
        int fibNumberModified(const int& n); // Method needed to solve other problems.
        void id2(const long int& num_id2);
        void id3(const long int& num_id3);
        void id4(const long int& num_id4);
        void id5(const unsigned int& lower_bound,const unsigned int& upper_bound);
        void id6(const unsigned int& lower_bound,const unsigned int& upper_bound);
        void id7(const long int& num_id7);
        void id9(const long int& num_id9A,const long int& num_id9B,const long int& num_id9C);
        void id10(const unsigned int& num_id10);
        void id12(const unsigned int& num_id12);
        int recursionID15(unsigned int num_id15A,unsigned int num_id15B,std::map<pair_int,int>& container);
        void id15(unsigned int num_id15A,unsigned int num_id15B,std::map<pair_int,int>& container);
        void id16(const unsigned int& base,int n);
        //void id25(const long int& num_id25);
};

#endif