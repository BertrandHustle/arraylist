#include "arraylist.h"
#include <iostream>

// Class constructor
ArrayList::ArrayList(int cap){
    int* newArr = new int[cap++];
    //record capacity in first element
    newArr[0] = cap;
    ArrayList::arr = newArr;
};

int ArrayList::capacity() const{
    return arr[0] - 1;
};