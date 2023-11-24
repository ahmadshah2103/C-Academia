#include <iostream>
using namespace std;

int main() {
    int start, end;
    int sum = 0;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    // Swap start and end if start is greater than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    cout << "The sum of even numbers between " << start << " and " << end << " is: " << sum << endl;

    return 0;
}
