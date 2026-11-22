include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the number to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Element not found";

    return 0;
}
