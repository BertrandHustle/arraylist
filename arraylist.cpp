#include "arraylist.h"
#include <iostream>

// Class constructor
ArrayList::ArrayList(int cap){
    int newArr[cap];
    ArrayList::arr = newArr;
};

int ArrayList::capacity() const{
    return sizeof(arr)/sizeof(arr[0]);
};