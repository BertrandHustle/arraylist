#include "arraylist.h"
#include <iostream>

// Class constructor
ArrayList::ArrayList(int init_cap){
    arr = new int[init_cap];
    cap = init_cap;
    size = 0;
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
    for (int i = 0; i < size; ++i) {
        return_str.append(to_string(arr[i]));
        if (i < size - 1){
            return_str.append(", ");
        }
    }
    return_str.append("]");

    return return_str;
}

int* ArrayList::copy(){
    int* toCopy;
    for (int i = 0; i < size; ++i) {
        toCopy[i] = arr[i];
    }
    return toCopy;
}

void ArrayList::append(int value){

    // extend cap if the new appended val will exceed current cap
    if (size == cap) {
        cap = cap*2;
    }

    // init new array
    int* tempArr = new int[cap];

    // copy current array into new array
    if (size > 0) {
        for (int i = 0; i < size; ++i) {
            tempArr[i] = arr[i];
        }
    }

    //append new value to end of new array
    tempArr[size] = value;

    //delete old array and replace with new one
    delete [] arr;
    arr = tempArr;

    //update size
    size++;
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
