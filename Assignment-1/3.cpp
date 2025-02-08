#include <iostream>
using namespace std;
int main() {
    int max;
    cout << "enter the size of array: ";
    cin >> max;
    int arr[max], temp;
    cout << "Enter elements of the array: ";
    for(int i = 0; i < max; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < max / 2; i++) {
        temp = arr[i];
        arr[i] = arr[max - i - 1];
        arr[max - i - 1] = temp;
    }
    cout << "The reversed array is: ";
    for(int i = 0; i < max; i++) {
        cout << arr[i] << " ";
    }
    
    for(int i = 0; i < max; i++) {
        for(int j = 0; j < max; j++){
            if(arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout <<endl << "the second smallest element is: " << arr[1] <<endl <<  "the second largest element is: " << arr[max - 2];

}
