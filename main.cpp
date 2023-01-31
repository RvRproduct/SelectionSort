#include <iostream>
#include <vector>

using namespace std;

vector<int> selectionSort(vector<int> vec);

vector<int> selectionSort(vector<int> vec) {
    const int length = vec.size();
    for (int i = 0; i < length; i++) {
        // set current index as minimum
        int min = i;
        int temp = vec[i];
        for (int j = i+1; j < length; j++) {
            if (vec[j] < vec[min]) {
                // update minimum if current is
                // lower that what we had previously
                min = j;
            }
        }
        vec[i] = vec[min];
        vec[min] = temp;
    }
    for (int item: vec)
        cout << item << " ";
    return vec;
}

int main(){
    const vector<int> numbers = {99, 44, 6, 2, 1, 5, 63, 87, 283, 4, 0};
    
    selectionSort(numbers);
    cout << endl;
    return 0;
}