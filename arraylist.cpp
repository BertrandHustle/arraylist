#include "arraylist.h"
#include <iostream>

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
    return size;
}

std::string ArrayList::toString() const {
    using namespace std;

    string return_str = "[";
    for (int i = 0; i < ArrayList::size; ++i) {
        return_str.append(to_string(ArrayList::arr[i]));
        if (i < ArrayList::size - 1){
            return_str.append(", ");
        }
    }
    return_str.append("]");

    return return_str;
}

void ArrayList::append(int value){

    // extend cap if the new appended val will exceed current cap
    if (ArrayList::size == ArrayList::cap) {
        ArrayList::cap = ArrayList::cap*2;
    }

    // init new array
    int* newArr = new int[ArrayList::cap];

    // copy current array into new array
    if (ArrayList::size > 0) {
        for (int i = 0; i < ArrayList::size; ++i) {
            newArr[i] = ArrayList::arr[i];
        }
    }

    //append new value to end of new array
    newArr[ArrayList::size] = value;

    //delete old array and replace with new one
    delete [] ArrayList::arr;
    ArrayList::arr = newArr;

    //update size
    ArrayList::size++;

};

void ArrayList::prepend(int value){
    
    // extend cap if the new appended val will exceed current cap
    if (ArrayList::size == ArrayList::cap) {
        ArrayList::cap = ArrayList::cap*2;
    }

    // init new array
    int* newArr = new int[ArrayList::cap];

    // copy current array into new array after prepending w/new value

    newArr[0] = value;

    for (int i = 0; i < ArrayList::size; ++i) {
        newArr[i+1] = ArrayList::arr[i];
    }

    //delete old array and replace with new one
    delete [] ArrayList::arr;
    ArrayList::arr = newArr;

    //update size
    ArrayList::size++;
}
