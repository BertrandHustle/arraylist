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

void ArrayList::append(int value){
    // copy current array into new array
    ArrayList newArr(ArrayList::cap++);

    for (int i = 0; i < ArrayList::cap - 1; ++i) {
		newArr.arr[i] = ArrayList::arr[i];
	}

    //delete old array and replace with new one
    delete [] ArrayList::arr;
    ArrayList::arr = newArr.arr;
    
    //append new value to end of array
    newArr.arr[cap - 1] = value;
};