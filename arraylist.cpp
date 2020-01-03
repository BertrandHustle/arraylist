#include "arraylist.h"
#include <iostream>

// Class constructor
ArrayList::ArrayList(int init_cap){
    int* newArr = new int[init_cap];
    ArrayList::arr = newArr;
    ArrayList::cap = init_cap;
};

int ArrayList::capacity() const{
    return cap;
};