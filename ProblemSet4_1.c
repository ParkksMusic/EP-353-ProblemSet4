#include <stdio.h>
#include <stdbool.h>

const int SIZE = 5;
 int input;
bool linearSearch(int arr[], int value);

int main(void) {
//Defines the array
    int arr[SIZE] = {2, 4, 6, 8, 10};
    printf("Input a number to search for:\n");
    scanf("%d" , &input);
    
//If, Else statement to print out the results.
    bool exists = linearSearch(arr, input);
    if(exists){
        printf("The value %d exists in the array.\n", input);
    }
    else {
        printf("The value %d does not exist in the array.\n", input);
    }

    return 0;

}
//Boolian statement to test all integers in the array.
bool linearSearch(int arr[], int value) {
    for(int i = 0; i < SIZE; i++){
        if(arr[i] == input){
            return true;
        }
    }
    return false;
}

