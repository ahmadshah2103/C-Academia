#include <iostream>

using namespace std;

int main() {

    int arr[20], count;
    for(int i = 0; i < 20; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < 20; i++) {
        if(arr[i] > arr[i+1]) count++;
    }
    cout << "Count: " << count << endl;
    return 0;
}