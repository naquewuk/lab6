#include <iostream>

int countodd(const int arr[], int size, int position = 0, int count = 0){
    if (position == size)
        return count;

    if (arr[position] % 2 == 1) count++;

    return countodd(arr, size, ++position, count );
}

int main() {
    int size;

    std::cout << "Enter array size: " << std::endl;
    std::cin >> size;
    int arr[size];
    std::cout << "Enter numbers of array" << std::endl;
    for(int i = 0; i < size; i++){
        std::cin >> arr[i];
    }

    std::cout << "Number of odd integers in the array" << countodd(arr, size) << std::endl;
    return 0;
}
