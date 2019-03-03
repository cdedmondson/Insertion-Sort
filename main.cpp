#include <iostream>

//#####################################Insertionsort Begin############################################
/*
 * Insertion Sort
 */
int insertionSort(int *a, int arraySize) {

    for (int i = 1; i < arraySize; i++) {

        // Assume first element is the smallest value
        int smallestValue = a[i];

        int counter = i;

        /*
         * While counter is greater than zero and the element to
         * the left of the next value is greater swap positions
         */
        while (counter > 0 && a[counter - 1] > smallestValue) {
            a[counter] = a[counter - 1];
            counter = counter - 1;
        } // End while loop

        a[counter] = smallestValue;  // Assign smallest value to index 0

    } // End for loop

} // End insertion sort function
//#####################################Insertionsort End##############################################


//#####################################Begin Main Method#############################################
int main() {

    //Insertion Sort Test
    int array[] = {10, 5, 1, 20, 2};

    insertionSort(array, 5);

    for (int i : array) {
        std::cout << i << ' ';
    }

    return 0;
}
//#####################################End Main Method###############################################