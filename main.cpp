#include <iostream>
#include <cmath>

//#####################################Insertionsort Begin############################################
/*
 * Insertion Sort
 */
int InsertionSort(int *a, int arraySize) {

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

    clock_t tStart = clock();

    int start;
    int end;

    start = 0;
    end = pow(2,16);

    int array[end];

    for (int i = start; i < end; i++) {
        array[i] = start + rand() % (end - start + 1);
    }

    InsertionSort(array, end - start);

    for (int i : array) {
        std::cout << i << ' ';
    }
    /*for(int i = 0; i < end; i++) {
        array[i] = i+1;
    }

    InsertionSort(array, end - start);

    for (int i : array) {
        std::cout << i << ' ';
    }*/
    printf("\nTime taken: %.9fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0;
}
//#####################################End Main Method###############################################