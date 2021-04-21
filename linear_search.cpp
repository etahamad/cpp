// Omar Hamad
// 21/04/2021
// Github: etahamad

#include<iostream>
using namespace std;

int main() {
    // Taking array size from the user
    cout << "Enter The Size Of Array:";
    int arrSize;
    cin >> arrSize;

    // Taking array elements from the user
    int arr[arrSize], i, num, index = 0;
    for (i = 0; i < arrSize; i++){
        cout << "Enter "<<i<<" Element: ";
        cin >> arr[i];
    }

    cout <<"-------------------------------";

    // Print the arr elements
    for (i = 0; i < arrSize; i++){
        cout << endl << "array[ "<<i<<" ]  =  ";
        cout << arr[i]<<endl;
    }

    cout <<"-------------------------------";

    // The search process
    cout << endl << "Enter a Number to Search: ";
    cin >> num;
    for (i = 0; i < arrSize; i++)
    {
        if(arr[i]==num)
        {
            index = i;
            break;
        }
    }

    // Check if the number exist or not
    // If yes:
    if (i != arrSize) {
        cout << endl << " Your number [ " << i << " ] Found at Index No: " << index;
    }

    // If no:
    else {
        cout << endl << " User error: Your number [ " << i << " ] was not found";
    }

    cout << endl;
    return 0;
}