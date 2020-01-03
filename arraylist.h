#pragma once
#include <stddef.h>
#include <string>
class ArrayList{
    public:
        int cap;
        // Class constructor
        int* arr = new int[0];
        ArrayList(int cap);
        // Adds the given value to the "end" of the list.
        // An append of 7 to a list containing [1, 5, 14] will result in a list
        // containing [1, 5, 14, 7]
        void append(int value);
        // Adds the given value to the "beginning" of the list.
        // A prepend of 7 to a list containing [1, 5, 14] will result in a list
        // containing [7, 1, 5, 14]
        void prepend(int value);
        // Inserts the given value at the given index. The given index must be
        // less than or equal to the size of the list. All elemnts from index
        // to the "end" of the list will be shifted one to the right.
        // A insert(1, 7) on a list containing [1, 5, 14] will result in a list
        // containing [1, 7, 5, 14]
        void insert(size_t index, int value);
        // Returns the current number of elements in the list.
        size_t size() const;
        // Returns the value of the list at the given index. The given index must be
        // less than size.
        int valueAt(size_t index) const;
        // Removes the element in the list at the given index. The given index must
        // be less than size.
        // A remove(1) on a list containing [1, 5, 14] will result in a list containing
        // [1, 14]
        void remove(size_t index);
        // Returns a string representation of the list. A list containing [1, 5, 14]
        // will return "[1, 5, 14]".
        std::string toString() const;
        // Returns the capacity of the list. The capacity is the maximum number of
        // elements that the list can contain before adding new elements will trigger
        // the expansion of the underlying array.
        int capacity() const;
};