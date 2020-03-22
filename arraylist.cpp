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
    int* toCopy = new int[cap];
    for (int i = 0; i < size; ++i) {
        toCopy[i] = arr[i];
    }
    return toCopy;
}

void ArrayList::extend(){
    cap = cap*2;
    int* tempArr = ArrayList::copy();
    delete [] arr;
    arr = tempArr;
}

void ArrayList::append(int value){

    // extend cap if the new appended val will exceed current cap
    if (size == cap) {
        extend();
    }

    //append new value to end of new array
    arr[size] = value;

    //update size
    size++;
};

void ArrayList::prepend(int value){
    
    // extend cap if the new appended val will exceed current cap
    if (size == cap) {
        extend();
    }

    // shift values over one
    if (size > 0) {
        for (int i = size; i >= 0; --i) {
            arr[i] = arr[i-1];
        }
    }

    arr[0] = value;

    //update size
    size++;
}

void ArrayList::insert(size_t index, int value){
    // shift array over by one to accomodate insert
    if (index < size){
        // extend cap if the new appended val will exceed current cap
        if (size == cap) {
            extend();
        }
        for (int i = size; i >= index; i--){
            arr[i+1] = arr[i];
        }
        arr[index] = value;
        //update size
        size++;        
    }
    else{
        printf("ARRAY OUT OF BOUNDS");
        throw 1;
    }
}

void ArrayList::remove(size_t index){
    // shift array over by one to accomodate insert
    if (index < size){
        for (int i = index; i <= size-1; i++){
            arr[i] = arr[i+1];
        }
        //delete leftover end of array
        arr[size-1] = 0;
        //update size
        size--;        
    }
    else{
        printf("ARRAY OUT OF BOUNDS");
        throw 1;
    }
}

int ArrayList::valueAt(size_t index) const{
    if (index < size){
        return arr[index];
    }
    else{
        printf("ARRAY OUT OF BOUNDS");
        throw 1;
    }
}
