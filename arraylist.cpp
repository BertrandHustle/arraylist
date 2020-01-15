#include "arraylist.h"
#include <iostream>

// comment
// Class constructor
ArrayList::ArrayList(int init_cap){
    int* newArr = new int[init_cap];
    ArrayList::arr = newArr;
    ArrayList::cap = init_cap;
    ArrayList::size = 0;
};

int ArrayList::capacity() const{
    return cap;
};

size_t ArrayList::getSize() const {
    return ArrayList::size;
}

std::string ArrayList::toString() const {
    using namespace std;

    string return_str = "[";
    for (int i = 0; i < ArrayList::size; ++i) {
        return_str.append(to_string(ArrayList::arr[i]));
        return_str.append(", ");
    }
    return_str.append("]");

    return return_str;
}

void ArrayList::append(int value){

    int newCap = ArrayList::cap;

    // extend cap if the new appended val will exceed current cap
    if (ArrayList::size == ArrayList::cap) {
        newCap = newCap + newCap;
        ArrayList::cap = newCap;
    }

    // init new array
    int* newArr = new int[newCap];

    // copy current array into new array
    if (size + 1 > 0) {
        for (int i = 0; i < ArrayList::size - 1; ++i) {
            newArr[i] = ArrayList::arr[i];
        }
    }

    //append new value to end of new array
    newArr[ArrayList::size] = value;

    //std::cout << newArr[0] << std::endl;

    //delete old array and replace with new one
    delete [] ArrayList::arr;
    ArrayList::arr = newArr;

    //std::cout << ArrayList::arr[0] << std::endl;

    //update size
    ArrayList::size++;

};
