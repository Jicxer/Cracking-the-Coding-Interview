#include <iostream>
#include <ctime>
#include <cstdlib>  // Include cstdlib for rand and srand
using namespace std;

int* populate_array(int array[], int size){
    srand(time(0));

    for(int i = 0; i < size; i++){
        array[i] = rand() % 10;  // Generating a random number between 0 and 9
    }
    return array;
}

void foo(int array[], int size){
    int sum = 0;
    int product = 1;
    
    for (int i = 0; i < size; i++){
        sum += array[i];
    }

    for (int i = 0; i < size; i++){
        product *= array[i];
    }

    cout << sum << " , " << product << endl;
}

int main(){
    const int size = 20;
    int arr[size];

    populate_array(arr, size);
    foo(arr, size);

    return 0;
}
