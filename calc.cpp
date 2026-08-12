#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Their sum is " << a + b << endl;
    cout << "Their difference is "<< a - b << endl;

    // Changes by Rishaan
    cout <<"Their product is "<<a*b<<endl;
    cout <<"Their quotient is "<<a/b<<endl;

    return 0;
}
