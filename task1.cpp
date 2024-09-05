#include <iostream>
using namespace std;

//task 01 

int main() {
    //this is a pointer array that points to a pointer 
    int** arr;     int Size[5]; int i, j;
    arr = new int*[5]; //for new array i think?
#include <iostream>
using namespace std;

//task 01 

int main() {
    int** arr;     int Size[5]; int i, j;
    arr = new int*[5]; //for new array i think?

  //loop that takes in values 
    for (i = 0; i < 5; i++) {
        cout << "Row " << i + 1 << " size: ";
        cin >> Size[i];
        arr[i] = new int[Size[i]]; } //store values 

 
    for (i = 0; i < 5; i++) {
        for (j = 0; j < Size[i]; j++) {
            cout << "Enter row " << i + 1 << " element " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    cout << "Array elements:" << endl;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < Size[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < 5; i++) {
        delete[] arr[i];
    }
     delete[] arr;

    return 0;
}//end main 
  //loop that takes in values 
    for (i = 0; i < 5; i++) {
        cout << "Row " << i + 1 << " size: ";
        cin >> Size[i];
        arr[i] = new int[Size[i]]; } //store values 

 
    for (i = 0; i < 5; i++) {
        for (j = 0; j < Size[i]; j++) {
            cout << "Enter row " << i + 1 << " element " << j + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    cout << "Array elements:" << endl;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < Size[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < 5; i++) {
        delete[] arr[i];
    }
     delete[] arr;

    return 0;
}//end main 